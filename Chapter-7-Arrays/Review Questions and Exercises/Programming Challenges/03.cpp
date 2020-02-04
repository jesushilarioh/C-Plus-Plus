/************************************************************
 *
 *   03. Chips and Salsa
 * 
 *  Write a program that lets a maker of chips and salsa 
 *  keep track of sales for five different types of salsa: 
 *  mild, medium, sweet, hot, and zesty. The program should 
 *  use two parallel 5-element arrays: an array of strings 
 *  that holds the five salsa names and an array of integers 
 *  that holds the number of jars sold during the past month 
 *  for each salsa type. The salsa names should be stored 
 *  using an initialization list at the time the name 
 *  array is created. The program should prompt the user 
 *  to enter the number of jars sold for each type. 
 * 
 *  Once this sales data has been entered, the program 
 *  should produce a report that displays sales for each 
 *  salsa type, total sales, and the names of the highest 
 *  selling and lowest selling products.
 * 
 *  Input Validation: Do not accept negative values for 
 *  number of jars sold.
 *
 * 	Jesus Hilario Hernandez
 * 	1/12/20
 *
 *************************************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Global constants

// Function Prototypes
int inputValidate(int);
void getNumberSold(const string[], int[], const int);
int getTotal(const int[], const int);
string getHighest(const string[], const int[], const int);
string getLowest(const string[], const int[], const int);

int main()
{
    // Variables
    const int ARRAY_SIZE = 5;

    int number_of_jars_sold[ARRAY_SIZE];
    string salsa_names[] = {"mild", 
                            "medium", 
                            "sweet", 
                            "hot", 
                            "zesty"};

    getNumberSold(salsa_names, number_of_jars_sold, ARRAY_SIZE);
    
    cout << endl;
    
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Sales for "
             << salsa_names[i] 
             << " salsa = "
             << number_of_jars_sold[i] 
             << " jars."
             << endl;
    }

    int total_sales = getTotal(number_of_jars_sold, ARRAY_SIZE);
    cout << "\nTotal sales = " 
         << total_sales
         << " jars."
         << endl;

    string highest_selling = getHighest(salsa_names, number_of_jars_sold, ARRAY_SIZE);
    cout << "Highest selling = "
         << highest_selling
         << endl;

    string lowest_selling = getLowest(salsa_names, number_of_jars_sold, ARRAY_SIZE);
    cout << "Lowest selling = "
         << lowest_selling
         << endl
         << endl;

    return 0;
}

/********************************************************
 * inputValidate() function                             *
 ********************************************************/
int inputValidate(int user_number)
{
    while (!(cin >> user_number) || user_number < 0)
    {
        cout << "Error. Only positve number. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;
}

/********************************************************
 * getNumberSold() function                             *
 ********************************************************/
void getNumberSold(const string names_array[], int values_array[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter number of jars sold for "
             << names_array[i] 
             << ": ";

        values_array[i] = inputValidate(values_array[i]);
    }
    
}

/********************************************************
 * getTotal() function                                  *
 ********************************************************/
int getTotal(const int array[], const int SIZE)
{
    int total = 0;

    for (int i = 0; i < SIZE; i++)
        total += array[i];

    return total;
}

/********************************************************
 * getHighest() function                                *
 ********************************************************/
string getHighest(const string array1[], const int array2[], int ARRAY_SIZE)
{
    int highest = array2[0];
    string highest_name = array1[0];

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array2[i] > highest)
        {
            highest = array2[i];
            highest_name = array1[i];
            
        } else if (array2[i] == highest)
        {
            highest = array2[i];
            highest_name += ", ";
            highest_name += array1[i];
            
        }
        
    }
    
    return highest_name;
}

/********************************************************
 * getLowest() function                                 *
 ********************************************************/
string getLowest(const string array1[], const int array2[], int ARRAY_SIZE)
{
    int lowest = array2[0];
    string lowest_name = array1[0];

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array2[i] < lowest)
        {
            lowest = array2[i];
            lowest_name = array1[i];
            
        } else if (array2[i] == lowest)
        {
            lowest = array2[i];
            lowest_name += ", ";
            lowest_name += array1[i];

        }
        
    }
    
    return lowest_name;
}