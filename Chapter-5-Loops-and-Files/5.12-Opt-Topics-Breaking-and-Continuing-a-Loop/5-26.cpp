//******************************************************
// This program calculates the charges for DVD rentals.
// Every thrid DVD is free.
//
// By: Jesus Hilario Hernandez
// Last updated: Novermber 1, 2016
//******************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int inputVal(int);      // Input validation (int)
char inputVal2(char);    // Input Valication (char)

int main()
{
    int dvdCount = 1;   // DVD counter
    int numDVDs;        // Number of DVDs rented
    double total = 0.0; // Accumulator
    char current;       // Current release, (Y/N)

    // Get the number of DVDs.
    cout << "How many DVDs are being rented? ";
    numDVDs = inputVal(numDVDs);

    // Determine the charges.
    do
    {
        if ((dvdCount % 3) == 0)
        {
            cout << "DVD #" << dvdCount << " is free!\n";
            continue;   // Immediately start the newt iteration
        }
        cout << "Is DVD #" << dvdCount;
        cout << " a current release? (Y/N) ";
        cin >> current;
        current = inputVal2(current);
        if (current == 'Y' || current == 'y')
        {
            total += 3.50;
        }
        else
        {
            total += 2.50;
        }
    } while (dvdCount++ < numDVDs);

    // Display the total.
    cout << fixed << showpoint << setprecision(2);
    cout << "The total is $" << total << endl;
    return 0;
}

//***************************************************
// The inputVal function checks for validate input. *
// In this case an integer. If an integer is not    *
// typed in, the user will be promted to enter      *
// valid data.                                      *
//***************************************************

int inputVal(int num)
{
    while (!(cin >> num))
    {
        cout << "I'm sorry. A number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

//***************************************************
// The inputVal function checks for validate input. *
// In this case the letters Y or N. If neither is   *
// typed in, the user will be promted to input      *
// the valid data.                                  *
//***************************************************

char inputVal2(char letter)
{
    while(!(letter == 'y' || letter == 'Y' || letter == 'n' || letter == 'N'))
    {
        cout << "\n\t\tError: choose either Y or N.";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
        // Re-enter input
        cin >> letter;
    }
    return letter;
}
