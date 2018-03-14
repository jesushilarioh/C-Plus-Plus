//*****************************************************
// This program demonstrates the nested if statement.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 16, 2016
//*****************************************************
#include <iostream>
using namespace std;

int main()
{
    char employed,      // Currently employed, Y or N
         recentGrad;    // Recent graduate, Y or N

    // Is the user employed and a recent graduate?
    cout << "Answer the following questions\n";
    cout << "with either Y for Yes or ";
    cout << "N for No.\n";
    cout << "Are you employed? ";
    cin >> employed;
    cout << "Have you graduated from college ";
    cout << "in the past two years? ";
    cin >> recentGrad;

    // Determine the user's loan qulaifications.
    if (employed == 'Y')
    {
        if (recentGrad == 'Y')  // Nested if
        {
            cout << "You qualify for the special ";
            cout << "interest rate.\n";
        }
    }
    return 0;
}
