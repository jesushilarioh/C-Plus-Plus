//**************************************************************************
// This program gets a series of test scores and
// calculates the average of the scores with the lowest
// score dropped.
//*********************** Pseudocode algorithim: ***************************
//  Read the student's four test scores.
//  Calculate the total of the scores.
//  Find the lowest score.
//  Subtract the lowest score from the total. This gives the adjusted total.
//  Divide the adjusted total by 3. This is the average.
//  Display the average.
//**************************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4;
    double testScores[SIZE],
           total,
           lowestScore,
           average;

    cout << fixed << showpoint << setprecision(1);

    getTestScores(testScores, SIZE);

    total = getTotal(testScores, SIZE);

    lowestScore = getLowest(testScores, SIZE);

    total -= lowestScore;

    average = total / (SIZE - 1);

    cout << "The average with the lowest score "
         << "dropped is " << average << " .\n";

    return 0;
}

//***********************************************************
// The getTestScores function accepts an array and its size *
// as arguments. It prompts the user to enter test scores,  *
// which are stored in the array.                           *
//***********************************************************
void getTestScores(double scores[], int size)
{
    int index;

    for(index = 0; index <= size - 1;index++)
    {
        cout << "Enter test score number "
             << (index + 1) << ": ";
        cin >> scores[index];
    }
    
}

//***************************************************
// The getTotal function accepts a double array     *
// and its size as arguments. The sum of the array's*
// elements is returned as a double.                *
//***************************************************
double getTotal(const double numbers[], int size)
{
    double total = 0;
    
    for(int count = 0; count < size; count++)
        total += numbers[count];

    return total;
    
}

//***************************************************
// The getLowest function accepts a double array and*
// its size as arguments. The lowest value in the   *
// array is returned as a double.                   *
//***************************************************
double getLowest(const double numbers[], int size)
{
    double lowest;

    lowest = numbers[0];

    for(int count = 1; count < size; count++)
    {
        if (numbers[count] < lowest)
            lowest = numbers[count];
    }

    return lowest;
}