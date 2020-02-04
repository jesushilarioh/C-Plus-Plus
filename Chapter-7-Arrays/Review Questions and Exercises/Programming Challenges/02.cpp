/************************************************************
 *
 *   02. Rainfall Statistics
 * 
 *  Write a program that lets the user enter the total 
 *  rainfall for each of 12 months into an array of doubles. 
 *  The program should calculate and display the total 
 *  rainfall for the year, the average monthly rainfall, 
 *  and the months with the highest and lowest amounts.
 * 
 *  Input Validation: Do not accept negative numbers for 
 *  monthly rainfall figures.
 *
 * 	Jesus Hilario Hernandez
 * 	1/12/20
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Global constants
const int ARRAY_SIZE = 12;

// Function Prototypes
double inputValidate(double);
void getValues(double []);
double average(double);
double calculateTotal(double []);
double findHighest(double []);
double findLowest(double []);
void display(double, double, double, double);


int main()
{
    // Variables
    double rainfall[ARRAY_SIZE];
    double total_rainfall = 0,
           avarage_rainfall,
           highest_month,
           lowest_month;

    getValues(rainfall);

    total_rainfall = calculateTotal(rainfall);
    avarage_rainfall = average(total_rainfall);
    highest_month = findHighest(rainfall);
    lowest_month = findLowest(rainfall);

    display(total_rainfall, avarage_rainfall, highest_month, lowest_month);

    return 0;
}

/********************************************************
 * function definitions                                 *
 ********************************************************/
double inputValidate(double user_number)
{
    while(!(cin >> user_number) || user_number < 0)
    {
        cout << "Error: please enter a positive number."
             << "Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;
}

void getValues(double array[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter average rainfall for month "
             << (i + 1)
             << ": ";
        array[i] = inputValidate(array[i]);
    }
    
}

double calculateTotal(double array[])
{
    double total;

    for (int i = 0; i < ARRAY_SIZE; i++)
        total += array[i];

    return total;
}

double average(double sum)
{
    return sum / ARRAY_SIZE;
}

double findHighest(double array[])
{
    double max = array[0];

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if(array[i] > max)
            max = array[i];       
    }

    return max;
}

double findLowest(double array[])
{
    double min = array[0];

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if(array[i] < min)
            min = array[i];
    }
    
    return min;
}

void display(double total, double average, double highest, double lowest)
{
    // display the total rainfall for the year, 
    // the average monthly rainfall, and the months with the 
    // highest and lowest amounts.
    cout << endl;

    cout << "Total rainfall for the year is "
         << total
         << endl;
    
    cout << "Average rainfall for the year is "
         << average
         << endl;

    cout << "Highest month is "
         << highest
         << endl;
    
    cout << "Lowest month is "
         << lowest
         << endl;
}