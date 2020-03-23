/************************************************************
 *
 *   20. Theater Seating
 * 
 *  This program should be designed and written by a team of 
 *  students. Here are some suggestions:
 *  
 *  • One student should design function main, which will call 
 *          the other functions in the program. The remainder of the 
 *          functions will be designed by other members of the team.
 *  
 *  • The requirements of the program should be analyzed so each 
 *          student is given about the same work load.
 *  
 *  • The parameters and return types of each function should 
 *          be decided in advance.
 *  
 *  • The program can be implemented as a multi-file program, 
 *          or all the functions can be cut and pasted into the 
 *          main file.
 *  
 *  Here is the assignment: Write a program that can be used 
 *  by a small theater to sell tickets for performances. The 
 *  theater’s auditorium has 15 rows of seats, with 30 seats 
 *  in each row. The program should display a screen that 
 *  shows which seats are available and which are taken. 
 *  For example, the following screen shows a chart depicting 
 *  each seat in the theater. Seats that are taken are 
 *  represented by an * symbol, and seats that are available 
 *  are represented by a # symbol:
 * 
 *                      Seats
 *          123456789012345678901234567890    
 * Row 1    ***###***###*########*****####
 * Row 2    ####*************####*******##
 * Row 3    **###**********########****###
 * Row 4    **######**************##******
 * Row 5    ********#####*********########
 * Row 6    ##############************####
 * Row 7    #######************###########
 * Row 8    ************##****############
 * Row 9    #########*****############****
 * Row 10   #####*************############
 * Row 11   #**********#################**
 * Row 12   #############********########*
 * Row 13   ###***********########**######
 * Row 14   ##############################
 * Row 15   ##############################
 * 
 *  Here is a list of tasks this program must perform:
 * 
 *  • When the program begins, it should ask the user to enter 
 *      the seat prices for each row. The prices can be stored 
 *      in a separate array. (Alternatively, the prices may be 
 *      read from a file.)
 * 
 *  • Once the prices are entered, the program should display 
 *      a seating chart similar to the one shown above. The 
 *      user may enter the row and seat numbers for tickets 
 *      being sold. Every time a ticket or group of tickets is 
 *      purchased, the program should display the total ticket 
 *      prices and update the seating chart.
 * 
 *  • The program should keep a total of all ticket sales. 
 *      The user should be given an option of viewing this 
 *      amount.
 * 
 *  • The program should also give the user an option to 
 *      see a list of how many seats have been sold, how 
 *      many seats are available in each row, and how 
 *      many seats are available in the entire auditorium.
 * 
 *  Input Validation: When tickets are being sold, do not 
 *      accept row or seat numbers that do not exist. When 
 *      someone requests a particular seat, the program 
 *      should make sure that seat is available before it 
 *      is sold.
 *
 *************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

const int ROWS = 15, 
          COLUMNS = 30;

double inputValidate(double, int);
void getValues(double [], int);
void displayArray(double [], int);
void displayArray(char [], int);
void displayArray(char [][COLUMNS]);
void getValuesFromFile(char [][COLUMNS], string = "seating_chart.txt");
// void getValues(char [][]);

int main()
{
    // 1. display a screen that shows which seats are available 
    // and which are taken.

    // 2. ask the user to enter the seat prices for each row.
    cout << "Enter the seat prices for each row: ";
    double seat_prices[ROWS];

    // 2a. The prices can be stored in a separate array. 
    //      (Alternatively, the prices may be read from a file.)
    getValues(seat_prices, ROWS);
    displayArray(seat_prices, ROWS);


    // 3. display a seating chart similar to the one shown above.
    char seating_chart[15][30];
    char seat_name[30] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4'};
    displayArray(seat_name, COLUMNS);
    getValuesFromFile(seating_chart);    
    displayArray(seating_chart);
    
    // 3a. The user may enter the row and seat numbers for 
    //      tickets being sold
    // cout << "Enter"

    // 3b. Every time a ticket or group of tickets is purchased, 
    //      the program should display the total ticket prices 
    //      and update the seating chart.

    // 4. keep a total of all ticket sales. 
    // 4a. The user should be given an option of viewing this 
    //      amount.

    // 5. The program should also give the user an option to 
    //      see a list of 
    //
    //      * how many seats have been sold, how 
    //      * many seats are available in each row, and 
    //      * how many seats are available in the entire 
    //          auditorium.

    return 0;
}

double inputValidate(double user_number, int limit)
{
    while(!(cin >> user_number) || user_number < limit)
    {
        cout << "Error. Enter a number greater than " 
             << limit 
             << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return user_number;
}

void getValues(double array[], int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "#" << (i + 1) << ": ";
        array[i] = inputValidate(array[i], 0);
    }
    
}

void displayArray(double array[], int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << " " << endl;
    
}

void displayArray(char array[], int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i];
    cout << endl;
    
}

void displayArray(char array[][COLUMNS])
{
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
        {
            cout << array[row][column];
        }
        cout << endl;

    }
    
}

void getValuesFromFile(char array[][COLUMNS], string file_name)
{
    ifstream inputFile;
    
    inputFile.open(file_name);

    if(inputFile.fail())
    {
        cout << "Error opening file. " << endl;
        exit(EXIT_SUCCESS);
    }
    else
    {
        for (int row = 0; row < ROWS; row++)
        {
            for (int column = 0; column < COLUMNS; column++)
            {
                inputFile >> array[row][column];
            }
            
        }
        
    }
}