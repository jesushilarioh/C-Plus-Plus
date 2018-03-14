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
// 2. Fahrenheit to Celsius, and 3. Quite Program. Aside from these
// three menu options an end session option is also available.
//
// Input: Input will come from the user, through the (cin) object.
// The information the user provides will either be stored
// in a double, char, or an int. Further, input validation will
// occur each time the user provides information at the keyboard.
// If invalid input should occur, the user will be redirected through
// a while loop, to input only valid information.
//
// Output: All output will be sent using the (cout) object.
// A brief description of what
// the program does will be displayed when the program is run.
// A menu with three options will be provided for the user
// to choose from. At one point in the program,
// the user will be given the option to continue the
// program, end the program, or quit the program.
//
//********************************************************************

#include <iostream>
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
    double C, //Holds Celsius Temp
    F; //Holds Fahrenheit Temp
    int choice; //Holds Menu choice
    char choice2; //Hold (Y/N) Ans.

    cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
    << "\n\t\tor Fahrenheit to Celsius." << endl;

    //Do-While menu
    do
    {
        cout    //display menu
        << "\n\t\tHere are your options: \n"
        << "\t\t\t1. Convert Celsius to Fahrenheit" << endl
        << "\t\t\t2. Convert Fahrenheit to Celsius" << endl
        << "\t\t\t3. Quit Program\t\t\t\t";

        // Error checking menu choice
        while(!(cin >> choice) || choice < CHOICE_1 || choice > CHOICE_3)
        {
            //explain error
            cout << "\n\t\tError: You must choose either 1, 2, or 3. ";
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
                while (!(cin >> C))
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

                //Asking if user would like to make another conversion
                cout << "\n\t\tWould you like to make another conversion?" << endl;
                cout << "\t\tY: if yes" << endl;
                cout << "\t\tN: if no \n\t\t";
                cin >> choice2;

                //Validating user input, whether y or n is pressed.
                while(!(choice2 == 'y' || choice2 == 'Y' || choice2 == 'n' || choice2 == 'N'))
                {
                    cout << "Error: choose either Y or N." << endl;
                    //Clear input stream
                    cin.clear();
                    //Discard previous input
                    cin.ignore(1200, '\n');

                    cin >> choice2;
                }
                //if pressed Y, acknowledge that they did
                if (choice2 == 'y' || choice2 == 'Y')
                {
                    cout << "\n\n\t\tOk. " ;

                }
                //if pressed N, acknowledge that they did
                else if (choice2 == 'n' || choice2 == 'N')
                {
                    cout << "\n\nThank you! Have a nice day.\n\n" << endl;
                    cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
                    << "\n\t\tor Fahrenheit to Celsius." << endl;

                }
                break; //End of case 1

                //Choice 2
            case CHOICE_2:
                cout << "\n\t\tWhat is the Fahrenheit temperature " << endl;
                cout << "\t\tthat you would wish to convert? ";

                //Error check choice 2
                while(!(cin >> F))
                {
                    //Explain Error
                    cout << "\n\t\tError: A number must be entered. "
                    << "\n\t\tWhat is the Fahrenheit temperature? ";
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

                //Asking if user would like to make another conversion
                cout << "\n\t\tWould you like to make another conversion?" << endl;
                cout << "\t\tY: if yes" << endl;
                cout << "\t\tN: if no \n\t\t";
                cin >> choice2;

                //Validating user input, whether y or n is pressed.
                while(!(choice2 == 'y' || choice2 == 'Y' || choice2 == 'n' || choice2 == 'N'))
                {
                    cout << "Error: choose either Y or N." << endl;
                    //Clear input stream
                    cin.clear();
                    //Discard previous input
                    cin.ignore(1200, '\n');

                    cin >> choice2;
                }

                //if Y pressed, acknowledge that they did
                if (choice2 == 'y')
                {
                    cout << "\n\n\t\tOk. " ;

                }
                //if N pressed, acknowledge that they did
                else if (choice2 == 'n')
                {
                    cout << "\n\nThank you! Have a nice day.\n\n" << endl;
                    cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
                    << "\n\t\tor Fahrenheit to Celsius." << endl;

                }
                break; //end of case 2

            case CHOICE_3 :
                //Let user know that they have chosen to quit the program.
                cout << "\n\t\tQuitting program..." << endl;
                cout << "\n\t\tProgram Ended." << endl;
                break; //end of case 3

        }   //end Switch menu


    } while (choice == 1 || choice == 2);//End Do-While menu.

    //for padding before the 0 exit code.
    cout << endl << endl;

    return 0;
}
