//********************************************************************
//
// JESUS HILARIO HERNANDEZ
// Course: COSC 1436.001 Programming Fundamentals 1
// Lab # 6 Temperature Functions
// Celsius to Fahrenheit modified
// Due Date: October 16, 2016
// Instructor: Korinne Caruso
//
// PURPOSE: This program converts Celsius to Fahrenheit or
// Fahrenheit to Celsius. Functions will be used within the program to
// display a menu, convert C to F, convert F to C, display results,
// send results to an external text file, and to handle error checking
//
// INPUT: Input will come from the user, through the (cin) object.
// The information the user provides will either be stored
// in a double, char, or an int. Further, input validation will
// occur each time the user provides information at the keyboard.
// If invalid input should occur, the user will be redirected through
// a while loop, to input only valid information.
//
// OUTPUT: Output in this program is either printed on the screen using
// cout, or written to an external file label results.txt.
// The user chooses to convert a temperature. After the temperature is
// converted, it is then displayed to the screen as well as written to
// an external file. The user is displayed with the menu if they
// choose to make another conversion and has the option to quit the
// program. Upon quitting the program or choosing not to make another
// conversion, the user is displayed an appropriate message in either
// case.
//
//********************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// PPD to determine OS and set appropriate clear command
#ifdef _WIN32 || _WIN64f
char buffer[4] = "cls";
const char* clearVar = buffer;
#else
char buffer[6] = "clear";
const char* clearVar = buffer;
#endif

// Global Constants
const int CHOICE_1 = 1,
          CHOICE_2 = 2,
          CHOICE_3 = 3;

// Function Prototypes
void clearScreen();                         // Clear Screen
void displayMenu();                         // Display menu
double convertCtoF(double);                 // C to F Conversion
double convertFtoC(double);                 // F to C Conversion
void displayResults(int, double, double);   // Display result use pass by reference
void sendResults(int, double, double);      // Send results to .txt file
int errorChecking1(int);                    // Error Checking Menu Choice
double errorChecking2(double);              // Error Checking For Numbers
char errorChecking3(char);                  // Error Checking (Y/N)

int main()
{
    // Variables:
    double C,       // Holds Celsius Temp
    F;       // Holds Fahrenheit Temp
    int choice;     // Holds Menu choice
    char choice2;   // Hold (Y/N) Ans.
    
    cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
    << "\n\t\tor Fahrenheit to Celsius." << endl;
    
    // Do-While menu
    do
    {
        // Display Menu
        displayMenu();
        
        // Error Check Menu Choice
        choice = errorChecking1(choice);
        
        // Switch menu
        switch (choice)
        {
                // Choice 1
            case CHOICE_1:
                
                // Ask for Celsius temp.
                cout << "\n\t\tWhat is the Celsius temperature "
                << "\n\t\tthat you would wish to convert? ";
                
                // Error Check For Numbers
                C = errorChecking2(C);
                
                // Calculate C to F
                F = convertCtoF(C);
                
                // Display C to F conversion
                displayResults(choice, C, F);
                
                // Send Results to results.txt
                sendResults(choice, C, F);
                
                // Asking if user would like to make another conversion
                cout << "\n\t\tWould you like to make another conversion?" << endl;
                cout << "\t\tY: if yes" << endl;
                cout << "\t\tN: if no \n\t\t";
                cin >> choice2;
                
                // Validating user input, whether y or n is pressed.
                choice2 = errorChecking3(choice2);
                
                clearScreen();
                
                // If pressed Y, acknowledge that they did
                if (choice2 == 'y' || choice2 == 'Y')
                {
                    cout << "\n\n\t\tOk. " ;
                    
                }
                // If pressed N, acknowledge that they did
                else if (choice2 == 'n' || choice2 == 'N')
                {
                    cout << "\n\nThank you! Have a nice day.\n\n" << endl;
                    clearScreen();
                    cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
                    << "\n\t\tor Fahrenheit to Celsius." << endl;
                    
                }
                break; // End of case 1
                
                // Choice 2
            case CHOICE_2:
                
                // Ask for Fahrenheit Temp
                cout << "\n\t\tWhat is the Fahrenheit temperature " << endl;
                cout << "\t\tthat you would wish to convert? ";
                
                // Error check choice 2
                F = errorChecking2(F);
                
                // Calculate F to C
                C = convertFtoC(F);
                
                // Display F to C conversion
                displayResults(choice, F, C);
                
                // Send Results to results.txt
                sendResults(choice, F, C);
                
                // Asking if user would like to make another conversion
                cout << "\n\t\tWould you like to make another conversion?" << endl;
                cout << "\t\tY: if yes" << endl;
                cout << "\t\tN: if no \n\t\t";
                cin >> choice2;
                
                // Validating user input, whether y or n is pressed.
                choice2 = errorChecking3(choice2);
                
                clearScreen();
                
                // If Y pressed, acknowledge that they did
                if (choice2 == 'y')
                {
                    cout << "\n\n\t\tOk. " ;
                    
                }
                // If N pressed, acknowledge that they did
                else if (choice2 == 'n')
                {
                    cout << "\n\nThank you! Have a nice day.\n\n" << endl;
                    clearScreen();
                    cout << "\n\n\t\tThis program converts Celsius to fahrenheit "
                    << "\n\t\tor Fahrenheit to Celsius." << endl;
                }
                break; // End of case 2
                
                // Choice 3
            case CHOICE_3 :
                
                // Let user know they program quitting.
                cout << "\n\t\tQuitting program..." << endl;
                cout << "\n\t\tProgram Ended." << endl;
                break; // End of case 3
                
        }   // End Switch menu
        
    } while (choice == 1 || choice == 2);// End Do-While menu.
    
    // For padding before the 0 exit code.
    cout << endl << endl;
    
    return 0;
}

//*******************************************
// Function clearScreen clears the screen   *
// when the user chooses not to make another*
// conversion.                              *
//*******************************************
void clearScreen()
{
    system(clearVar);
}

//*******************************************
// The displayMenu() function display the   *
// menu to the user.                        *
//*******************************************

void displayMenu()
{
    cout << "\n\t\tHere are your options: \n"
    << "\t\t\t1. Convert Celsius to Fahrenheit" << endl
    << "\t\t\t2. Convert Fahrenheit to Celsius" << endl
    << "\t\t\t3. Quit Program ";
}

//*******************************************
// The convertCtoF() function converts a    *
// celsius temperature to fahrenheit.       *
//*******************************************

double convertCtoF(double num1)
{
    return (9.0/5.0) * num1 + 32;
    
}
//*******************************************
// The convertFtoC() function converts a    *
// fahrenheit temperature to a celsius      *
// temperature.                             *
//*******************************************

double convertFtoC(double num1)
{
    return (num1 - 32) * (5.0/9.0);
}

//*******************************************
// The displayResults() function displays   *
// the result of the conversion to the user *
// using the cout object.                   *
//*******************************************

void displayResults(int num, double num1, double num2)
{
    if (CHOICE_1 == num)
    {
        cout << "\n\n\t\t" << setprecision(1) << fixed << num1 << " Celsius = "
        << num2 << " Fahrenheit" << endl;
    }
    else if (CHOICE_2 == num)
    {
        cout << "\n\n\t\t" << setprecision(1) << fixed << num1 << " Fahrenheit = "
        << num2 << " Celsius" << endl;
    }
}

//*******************************************
// The sendResults() function writes each   *
// conversion result to an external text    *
// file called results.txt                  *
// It's very similer to the displayResults()*
// function. The only difference is this    *
// function uses the outputFile object      *
// instead of the cout object.              *
//*******************************************

void sendResults(int num, double num1, double num2)
{
    // File Stream Object
    ofstream outputFile;
    // Open file results.txt
    outputFile.open("results.txt", ios::out | ios::app);
    
    if (CHOICE_1 == num)
    {
        outputFile << setprecision(1) << fixed << num1 << " Celsius = "
        << num2 << " Fahrenheit" << endl;
    }
    else if (CHOICE_2 == num)
    {
        outputFile << setprecision(1) << fixed << num1 << " Fahrenheit = "
        << num2 << " Celsius" << endl;
    }
    
    // Close file results.txt
    outputFile.close();
}

//*******************************************
// The errorChecking1() function is used to *
// check for either a 1, a 2, or a 3 in user*
// input. If something other than any one   *
// of these number is enter at the keyboard,*
// the while loop will prompt the error     *
// and give the user a chance to re-enter   *
// valid input.                             *
//*******************************************

int errorChecking1(int num)
{
    while(!(cin >> num) || num < CHOICE_1 || num > CHOICE_3)
    {
        // Explain error
        cout << "\n\t\tError: You must choose either 1, 2, or 3. ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }
    return num;
}

//***********************************************
// Definition of function errorChecking2().     *
// This function is used to validate whether    *
// the user has entered a number. If no         *
// number is entered at the keyboard, the       *
// while loop will prompt the error and ask     *
// for valid input.                             *
//***********************************************

double errorChecking2(double num)
{
    while (!(cin >> num))
    {
        // Explain Error
        cout << "\n\t\tError: A number must be entered. "
        << "\n\t\tWhat is the Celsius temperature? ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }
    return num;
}

//***********************************************
// The errorChecking3() function is used to     *
// check if the user has entered either a Y or  *
// an N. Failure on the users part to enter     *
// either will result in a prompt that will     *
// receive valid input.                         *
//***********************************************

char errorChecking3(char letter)
{
    while(!(letter == 'y' || letter == 'Y' || letter == 'n' || letter == 'N'))
    {
        cout << "\n\t\tError: choose either Y or N.";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
        // Re-enter input
        cin >> letter;
    }
    return letter;
}
