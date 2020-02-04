/************************************************************
 *
 *   05. Monkey Business
 * 
 * A local zoo wants to keep track of how many pounds of 
 * food each of its three monkeys eats each day during a 
 * typical week. Write a program that stores this 
 * information in a two-dimensional 3 × 5 array, where 
 * each row represents a different monkey and each column 
 * represents a different day of the week. The program should 
 * first have the user input the data for each monkey. Then 
 * it should create a report that includes the following 
 * information:
 * 
 * • Average amount of food eaten per day by the whole 
 * family of monkeys.
 * 
 * • The least amount of food eaten during the week by 
 * any one monkey.
 * 
 * • The greatest amount of food eaten during the week 
 * by any one monkey.
 * 
 * Input Validation: Do not accept negative numbers for 
 * pounds of food eaten.
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Global constants
const int ROWS    = 3,
          COLUMNS = 5;

// Function Prototypes
double inputValidate(double);
void getInfo(double[][COLUMNS], int);
double getAverage(double[][COLUMNS], int);
double getLeast(double[][COLUMNS], int);
double getHighest(double[][COLUMNS], int);

int main()
{
    double pounds_of_food[ROWS][COLUMNS];
    double average_per_day,
           least_per_week,
           highest_per_week;

    getInfo(pounds_of_food, ROWS);

    average_per_day = getAverage(pounds_of_food, ROWS);
    cout << "Average amount eaten during the week per day = "
         << average_per_day
         << endl;

    least_per_week = getLeast(pounds_of_food, ROWS);
    cout << "Lowest amount eaten during the week = "
         << least_per_week
         << endl;

    highest_per_week = getHighest(pounds_of_food, ROWS);
    cout << "Highest amount eaten during the week = "
         << highest_per_week
         << endl;


    return 0;
}

double inputValidate(double number)
{
    while(!(cin >> number) || number < 0)
    {
        cout << "Error, enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}

void getInfo(double array[][COLUMNS], int ROWS)
{
    double number_of_pounds;
    cout << "Enter the following information: \n";
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            cout << "Monkey #" 
                 << (i + 1)
                 << ", on day "
                 << (j + 1)
                 << ": ";

            array[i][j] = inputValidate(number_of_pounds);
        }
        cout << endl;
    }
}

double getAverage(double array[][COLUMNS], int ROWS)
{
    double columns_sum;
    int total_elements = ROWS * COLUMNS;

    for(int r = 0; r < ROWS; r++)
    {
        for(int c = 0; c < COLUMNS; c++)
            columns_sum += array[r][c];
    }

    return columns_sum / total_elements;
}

double getLeast(double array[][COLUMNS], int ROWS)
{
    double sum, 
           local_array[ROWS], 
           lowest_number;

    for(int row = 0; row < ROWS; row++)
    {
        sum = 0;
        for(int column = 0; column < COLUMNS; column++)
            sum += array[row][column];

        local_array[row] = sum;

    }

    lowest_number = local_array[0];
    for (int number = 1; number < ROWS; number++)
    {
        if (local_array[number] <= lowest_number)
            lowest_number = local_array[number];
        
    }

    return lowest_number;
}

double getHighest(double array[][COLUMNS], int ROWS)
{
    double sum, 
           local_array[ROWS], 
           highest_number;

    for(int row = 0; row < ROWS; row++)
    {
        sum = 0;
        for(int column = 0; column < COLUMNS; column++)
            sum += array[row][column];

        local_array[row] = sum;

    }

    highest_number = local_array[0];
    for (int number = 1; number < ROWS; number++)
    {
        if (local_array[number] >= highest_number)
            highest_number = local_array[number];
        
    }
    
    return highest_number;
}