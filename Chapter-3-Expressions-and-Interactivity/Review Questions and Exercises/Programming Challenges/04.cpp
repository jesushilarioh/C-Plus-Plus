/********************************************************************
*
*	04. AVERAGE RAINFALL
*
*       Write a program that calculates the average rainfall for three
*       months. The program should ask the user to enter the name of
*       each month, such as Jun or July, and the amount of rain
*       (in inches) that fell each month. The program should
*       display a message similar to the following:
*
*       The average rainfal for June, July, and August is 6.72 inches.
*
* 	Jesus Hilario Hernandez
* 	January 9th 2017
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int NUM_OF_MONTHS = 3;
    string months[NUM_OF_MONTHS];
    float rainfall[NUM_OF_MONTHS],
          total,
          average;

    // This Program calculate the average rainfall for three months
    cout << endl;
    cout << "---------------------------------------------------------------";
    cout << "\nThis program calculate the average rainfall for three months." << endl;
    cout << "---------------------------------------------------------------";
    cout << "\n\nPress enter to continue." << endl;
    cin.get();

    // Ask user to enter name of each month.
    // Ask user to enter amount of rain for each month (in inches).
    for (int x = 0; x < NUM_OF_MONTHS; x++)
    {
        cout << "Enter name of " << (x + 1) << "st month: ";
        cin >> months[x];
        cout << "How many inches of rain fell for " << months[x] << ": ";
        cin >> rainfall[x];
        total += rainfall[x];
    }

    // Calculte the average rain fall for those three months
    average = total / NUM_OF_MONTHS;

    // Display rainfall average
    cout << "\nThe average rainfall for ";
    cout << months[0] << ", " << months[1] << ", and " << months[2];
    cout << " is " << average << " inches.\n" << endl;

    // Terminate Program
    return 0;
}
