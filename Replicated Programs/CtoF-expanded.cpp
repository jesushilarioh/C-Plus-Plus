//********************************************************************
//
// JESUS HILARIO HERNANDEZ
// Course: COSC 1436.001 Programming Fundamentals 1
// Lab # 5 Ch 3 Programming Challenge #10
//  Celsius to Fahrenheit extended
// Due Date: October 5, 2016
// Instructor: Korinne Caruso
//
// Purpose: This program converts Celsius to Fahrenheit or
// Fahrenheit to Celsius. A menu is provided for the user to choose from.
// The three choices will be 1. Convert Celsius to Fahrenheit,
// 2. Fahrenheit to Celsius, and 3. End session. Aside from these
// three menu options a quit the program option is available as well.
//
// Input: Input will come from the user, through the (cin) object.
// The information the user provides will either be stored
// in a double, string, char, or an int. Further, input validation will
// occur each time the user provides information at the keyboard.
// If invalid input should occur, the user will be redirected through
// a while loop, to input valid a valid choice.
//
// Output: All output will be sent using the (cout) object.
// The user's user name along with a brief description of what
// the program does is displayed when the program is run.
// A menu with three options will be provided for the user
// to choose from. At one point in the program,
// the user will be given the option to continue the
// program or to quit the program.
//
//********************************************************************

#include <iostream>
#include <string>
#include <iomanip>
#include <istream>
using namespace std;

int main()
{
    //Constants
    const int CHOICE_1 = 1,
    CHOICE_2 = 2,
    CHOICE_3 = 3;

    //Variables:
    double C,           //Holds Celsius Temp
    F;           //Holds Fahrenheit Temp
    string name;        //Holds User name
    char   keepGoing;   //Holds (Y/N) Ans.
    int    choice;      //Holds Menu choice


    //Do-While menu
    do
    {
        cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
        << "\n\t\tor Fahrenheit to Celsius." << endl
        << "\n\t\tSelect an option to continue: \n"
        << "\t\t\t1. Convert Celsius to Fahrenheit" << endl
        << "\t\t\t2. Convert Fahrenheit to Celsius" << endl
        << "\t\t\t3. Quit Program\t\t\t\t";

        // Error checking menu choice
        while(!(cin >> choice) || choice < CHOICE_1 || choice > CHOICE_3)
        {
            //explain error
            cout << "\n\t\tError: You must choose either 1, 2, or 3.";
            //clear input stream
            cin.clear();
            //discard previous input
            cin.ignore(1200, '\n');
        }

        //switch menu
        switch (choice)
        {
                //Choice 1
            case CHOICE_1:
                //Ask for Celsius temp.
                cout << "\n\t\tWhat is the Celsius temperature "
                << "\n\t\tthat you would wish to convert? ";

                //Error check choice 1
                while (!(cin  >> C))
                {
                    //Explain Error
                    cout << "\n\t\tError: A number must be entered. "
                    << "\n\t\tWhat is the Celsius temperature? ";
                    //clear input stream
                    cin.clear();
                    //discard previous input
                    cin.ignore(1200, '\n');
                }

                //calculate C to F
                F = (9.0/5.0) * C + 32;

                //Display C to F conversion
                cout << "\n\n\t\t\t"<< C << " Celsius = "
                << setprecision(1) << fixed << F << " Fahrenheit" << endl;
                cout << endl;
                //Ask user if would like to make another conversion
                cout << "\n\t\tWould you like to make another "
                << "conversion?\n\t\tY: to make another conversion\n\t\t"
                << "N: to quit the program ";
                break;

                //Choice 2
            case CHOICE_2:
                cout << "\n\t\tWhat is the Fahrenheit temperature " << endl;
                cout << "\t\tthat you would wish to convert? ";

                //Error check choice 2
                while(!(cin >> F))
                {
                    //Explain Error
                    cout << "\n\t\tError: A number must be entered. "
                    << "\n\t\tWhat is the Fahrenheit temperature?";
                    //Clear input stream
                    cin.clear();
                    //Discard previous input
                    cin.ignore(1200, '\n');
                }

                //Calculate F to C
                C = (F - 32) * (5.0/9.0);

                //Display F to C conversion
                cout << "\n\n\t\t\t" << F << " Fahrenheit = "
                << setprecision(1)<< fixed << C << " Celsius" << endl;
                cout << endl;
                //Ask user if would like to make another conversion
                cout << "\n\t\tWould you like to make another "
                << "conversion (Y/N)? ";
                break;

            case CHOICE_3 :
                cout << "\n\t\tAre you sure you want to "
                << "quit the program? (Y/N)\n\n" << endl;

                //end Switch menu
        }

        cin >> keepGoing;
        while(!(keepGoing == 'y' || keepGoing == 'Y' || keepGoing == 'n' || keepGoing == 'N'))
        {
            //Explain error
            cout << "\n\t\tError: Neither Y nor N was pressed." << endl
            << "\t\tWould you like to make another conversion? ";
            //Clear input stream
            cin.clear();
            //Discard previous input
            cin.ignore(1200, '\n');

            cin >> keepGoing;
        }


        //If NO or choice 3
        if (keepGoing == 'n' || keepGoing == 'N' || choice == 3)
        {
            cout << "\n\t\tThank you.\n\n\n" << endl;
        }

        //End Do-While menu.
    } while (keepGoing == 'y' || keepGoing == 'Y' || keepGoing == 'n' || keepGoing == 'N' || choice == 3);

    //for padding before the 0 exit code.
    cout << endl << endl;

    return 0;
}
