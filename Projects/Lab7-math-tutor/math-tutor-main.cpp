//******************************************************************
//
// JESUS HILARIO HERNANDEZ
// Course: COSC 1436.001 Programming Fundamentals 1
// Lab # 7 Math Tutor
// Due Date: November 6, 2016
// Instructor: Korinne Caruso
//
// PURPOSE: This program functions as a math tutor to students in
// the elementary - middle school range. This program will have
// a menu selection to choose from that will include: addition
// practice, subtraction practice, multiplication practice, division
// practice, calculating the area of a triangle, the area of a circle,
// and the area of a rectangle.
//
// INPUT: Input for calculating the area selections will require the
// user to input information through the cin object. Input will then
// be checked to be sure that valid data is input at the keyboard.
//
// OUTPUT: For the practice selctions, random numbers will be
// displayed, answered, and sent to an exeternal file. For the
// calculation selections the area of an object will be calculated,
// displayed, and then sent to an external file.
//
//******************************************************************
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>      // For rand and srand
#include <ctime>        // For the time function
using namespace std;

// Directives for clearing the screen
#ifdef _WIN32
char buffer[4] = "cls";
const char* clearVar = buffer;
    #ifdef _WIN64
    char buffer[4] = "cls";
    const char* clearVar = buffer;
    #endif
#else
char buffer[6] = "clear";
const char* clearVar = buffer;
#endif

// Global Constants for menu selection.
const int CHOICE_1 = 1,
          CHOICE_2 = 2,
          CHOICE_3 = 3,
          CHOICE_4 = 4,
          CHOICE_5 = 5,
          CHOICE_6 = 6,
          CHOICE_7 = 7,
          CHOICE_8 = 8;

// Function Prototypes
bool inputVal(bool);                // Error Checking
int menu(int);                      // Menu
bool additionPractice();            // Addition Practice
bool subtractionPractice();         // Subtraction Practice
bool multiplicationPractice();      // Multiplication practice
bool divisionPractice();            // Division practice
bool calculateAreaOfRectangle();    // Calculate area of rectangle
bool calculateAreaOfCircle();       // Calculate area of circle
bool calculateAreaOfTriangle();     // Calculate area of triangle
void clearScreen();                 // Clear screen
int inputVal(int);                  // Error Checking
double inputVal(double);            // Error Checking

int main()
{
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    // Constant
    const string SHUTDOWN = "CarusoShutDown";   // To shutdown program

    // Variables
    int menuSelection;                          // Holds Menu Selection
    string teacherPass;                         // Holds Shudown Password

    // Do While used to iterate menu
    do
    {
        clearScreen();
        // Display Menu, receive user input
        menuSelection = menu(menuSelection);
        cout << endl << endl;

        // Switch used as menu
        switch (menuSelection)
        {
            case CHOICE_1:
                additionPractice();         // Calling additionPractice function
                break;
            case CHOICE_2:
                subtractionPractice();      // Calling subtractionPractice function
                break;
            case CHOICE_3:
                multiplicationPractice();   // Calling multiplicationPractice function
                break;
            case CHOICE_4:
                divisionPractice();         // Calling divisionPractice function
                break;
            case CHOICE_5:
                calculateAreaOfRectangle(); // Calling calculateAreaOfRectangle function
                break;
            case CHOICE_6:
                calculateAreaOfCircle();    // Calling acalculateAreaOfCircle function
                break;
            case CHOICE_7:
                calculateAreaOfTriangle();  // Calling calculateAreaOfTriangle function
                break;
            case CHOICE_8:

            // Clear Screen
            clearScreen();

            // Ask for password, recieve password
            cout << "Password please: ";
            cin >> teacherPass;

            // If statement checks for valid password.
            if (teacherPass != SHUTDOWN)
            {
                int tries = 4;
                for (int num = 0; num < 4; num++)
                {
                    cout << "I'm sorry wrong password." << endl
                         << "You have " << tries << " more tries: ";
                    cin >> teacherPass;
                    tries--;
                    if (teacherPass == SHUTDOWN)
                    {
                        break;
                    }
                }
            }
        }
    } while (!(teacherPass == SHUTDOWN));

    // End program valediction
    cout << "Ending Program...\n";
    cout << "Program ended." << endl << endl;

    return 0;
}

//*******************************************************
// The inputVal Function check for valid input. In      *
// this case a boolean must be enter as valid input.    *
// The user will be promted to enter valid data if      *
// they've entered invalid data.                        *
//*******************************************************

bool inputVal(bool num)
{
    while (!(cin >> num))
    {
        cout << "\nI'm sorry either a 1 or a 0 \n"
             << "must be entered to proceed: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

//*******************************************************************
// Function menu displays the main menu, receives user selection,   *
// and checks for valid input.                                      *
//*******************************************************************

int menu(int num)
{
    cout << "\t-----------------------------------------------------\n"
         << "\t\t\tWelcome to Math Tutor!\n"
         << "\t-----------------------------------------------------\n\n"
         << "\tChoose from the menu to continue: \n\n"
         << "\t\t1. Practice Addition \n"
         << "\t\t2. Practice Subtraction \n"
         << "\t\t3. Practice Multiplication\n"
         << "\t\t4. Practice Division\n"
         << "\t\t5. Calculate the Area of a Rectangle\n"
         << "\t\t6. Calculate the Area of a Circle\n"
         << "\t\t7. Calculate the Area of a Triangle\n"
         << "\t\t8. Program Shutdown ";

    while (!(cin >> num && num <= CHOICE_8 && num >= CHOICE_1))
    {
        cout << "I'm sorry, choose a number from the menu: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

//***************************************************************
// The additionPractice function shows a random addition        *
// problem, asks for user input, and returns a boolean value.   *
//***************************************************************

bool additionPractice()
{
    // File object
    ofstream outputFile;
    // Open outputFile
    outputFile.open("MathTutorRecord.txt");

    //Varable
    bool anotherProb;

    // Another problem? Do While
    do
    {
        // Constants
        const int MIN_VALUE = 0;    // Minimum value
        const int MAX_VALUE = 9;    // Maximum value

        // Variables
        int num1;                   // Holds a value
        int num2;                   // Holds a value
        int sum, answer;

        // Assigning a random number to num1
        num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        // Assigning a random number to num2
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        // Summing random num1 and num2
        sum = num1 + num2;

        // Clear Screen
        clearScreen();

        // Display problem
        cout << num1 << " + " << num2 << endl;
        cout << "\nType in your answer: ";
        // Receive answer
        answer = inputVal(answer);

        // Process answer
        do
        {
            // If right answer
            if (answer == sum)
            {
                cout << "\nGreat work!\n" << endl;
            }
            // Else wrong answer
            else
            {
                cout << "\nNot correct, hopefully this will help...\n" << endl;

                cout << "\tIf I have " << num1 ;

                // If num1 is 1, use singular
                if (num1 == 1)
                {
                    cout << " pencil";
                }

                // Else use plural
                else
                {
                    cout << " pencils";
                }
                cout << " and " << num2;

                // If num2 is 1 use singular
                if (num2 == 1)
                {
                    cout << " pen";
                }

                // Else use plural
                else
                {
                    cout << " pens";
                }
                cout << endl

                // Ask for answer to problem
                     << "\thow many pens and pencils do I have altogether? ";

                // Error Check answer
                answer = inputVal(answer);

                // If answer correct
                if (answer == sum)
                {
                    cout << "\nGreat work!\n" << endl;
                }
            }
        // End Process answeer Do While
        } while (answer != sum);

        // Write to outputFile
        outputFile << num1 << " + " << num2 << " = " << sum << endl;

        // Ask if would like another problem
        cout << "\nWould you like another addition problem?\n"
             << "1. Yes.\n"
             << "0. No. Return to main menu ";

        // Error Check
        anotherProb = inputVal(anotherProb);
        cout << endl;

    // Clear Screen
    clearScreen();

    // End of Another problem? Do While
    } while (anotherProb == true);

    // Close outputfile
    outputFile.close();

    // Return boolean value either to
    // main menu or another problem.
    return anotherProb;
}

//***************************************************************
// The subtractionPractice function shows a random subtraction  *
// problem, asks for user input, and returns a boolean value.   *
//***************************************************************

bool subtractionPractice()
{
    // Output file stream object
    ofstream outputFile;
    // Open outputFile
    outputFile.open("MathTutorRecord.txt");

    // Variable
    bool anotherProb;

    // Another problem? Do While
    do
    {
        const int MIN_VALUE = 0;    // Minimum value
        const int MAX_VALUE = 9;    // Maximum value

        // Variables
        int num1;    // Holds a value
        int num2;    // Holds a value
        int sum, answer;

        // Assign random value to num1
        num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        // Assign random value to num2
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        // Sum of num1 and num2
        sum = num1 - num2;

        // Clear Screen
        clearScreen();

        // Display problem
        cout << num1 << " - " << num2 << endl;
        // Ask for a receive answer
        cout << "\nType in your answer: ";
        // Error Check answer
        answer = inputVal(answer);

        // Process answer
        do
        {
            // If right answer
            if (answer == sum)
            {
                cout << "\nGreat work!\n" << endl;
            }

            // Else wrong answer
            else
            {
                cout << "\nSorry, hopefully this will help...\n" << endl;
                cout << "\tIf I have " << num1 ;

                // If num1 is 1, use singular
                if (num1 == 1)
                {
                    cout << " pencil";
                }

                // Else use plural
                else
                {
                    cout << " pencils";
                }
                cout << " and " << num2;

                // If num2 is 1, use singular
                if (num2 == 1)
                {
                    cout << " pen";
                }

                // Else use plural
                else
                {
                    cout << " pens";
                }

                // Ask for answer to problem
                cout << endl
                     << "\tand subtract them from each other,\n"
                     << "\thow many do I have? ";
                // Error Check answer
                answer = inputVal(answer);

                // If answer correct
                if (answer == sum)
                {
                    cout << "\nGreat work!\n" << endl;
                }
            }

        // End Process answeer Do While
        } while (answer != sum);

        // Write data to outputFile
        outputFile << num1 << " - " << num2 << " = "<< sum << endl;

        // Ask if would like another problem
        cout << "\nWould you like another subtraction problem?\n"
             << "1. Yes.\n"
             << "0. No. Return to main menu ";
        // Error check
        anotherProb = inputVal(anotherProb);
        cout << endl;

    // End of Another problem? Do While
    } while (anotherProb == true);

    // Close outputFile
    outputFile.close();

    // Return boolean value either to
    // main menu or another problem.
    return anotherProb;
}

//***************************************************************
// The multiplicationPractice function shows a random           *
// multiplication problem, asks for user input, and returns a   *
// boolean value.                                               *
//***************************************************************

bool multiplicationPractice()
{
    // Output stream object
    ofstream outputFile;
    // Open file
    outputFile.open("MathTutorRecord.txt");

    // Variable
    bool anotherProb;

    // Another problem? Do While
    do
    {
        // Constants
        const int MIN_VALUE = 0;    // Minimum value
        const int MAX_VALUE = 9;    // Maximum value

        // Variables
        int num1;                    // Holds a value
        int num2;                    // Holds a value
        int sum, answer;

        // Assign random number to num1
        num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        // Assign random number to num2
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        // Sum of num1 and num2
        sum = num1 * num2;

        // Clear screen
        clearScreen();

        // Display problem and receive answer.
        cout << num1 << " * " << num2 << endl;
        cout << "\nType in your answer: ";
        // Error Check answer
        answer = inputVal(answer);

        // Process answer
        do
        {
            // If right answer
            if (answer == sum)
            {
                cout << "\nGreat work!\n" << endl;
            }

            // Else wrong answer
            else
            {
                // Explain how to solve problem and
                // ask for new answer.
                cout << "\nNot correct, hopefully this will help...\n" << endl;
                cout << "\tIf I have " << num1 << " sets of "
                << num2 << " swans, how many do I have "
                << "altogether? ";
                // Error check answer
                answer = inputVal(answer);

                // If answer right
                if (answer == sum)
                {
                    cout << "\nGreat work!\n" << endl;
                }
            }
        // End of Processing answer.
        } while (answer != sum);

        // Write data to outputFile
        outputFile << num1 << " x " << num2 << " = " << sum << endl;

        // Ask if would like another problem
        cout << "\nWould you like another multiplication problem?\n"
             << "1. Yes.\n"
             << "0. No. Return to main menu ";
        // Error check anotherProb
        anotherProb = inputVal(anotherProb);
        cout << endl;

    // End of Another problem? Do While
    } while(anotherProb == true);

    // Close outputFile
    outputFile.close();

    // Return boolean value either to
    // main menu or another problem.
    return anotherProb;
}

//***************************************************************
// The divisionPractice function shows a random division        *
// problem, asks for user input, and returns a boolean value.   *
//***************************************************************

bool divisionPractice()
{
    // Output stream object
    ofstream outputFile;
    // Open file
    outputFile.open("MathTutorRecord.txt");

    // Variable
    bool anotherProb;

    // Another Problem?
    do
    {
        // Constants
        const int MIN_VALUE = 1;    // Minimum value
        const int MAX_VALUE = 9;    // Maximum value

        // Variables
        int num1;                   // Holds a value
        int num2;                    // Holds a value
        int sum, answer, remain;

        // Assign random number to num1
        num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        // Assign random number to num2
        num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
        // Sum of num1 and num2
        sum = num1 / num2;
        // Calculate the remainded or num1 and num2
        remain = num1 % num2;

        // Clear the screen
        clearScreen();

        // Display problem
        cout << num1 << " / " << num2 << endl;

        // Ask to press enter to continue
        cout << "\nPress [ENTER] to see answer: ";
        // Clear previous input
        cin.clear();
        cin.ignore(123, '\n');
        cin.get();

        // Discribe now to solve problem
        cout << endl << sum << " remainder " << remain << endl;
        cout << "\n\tIf I take " << num1 << " and divide it by " << num2
             << ", \n\t" << "I will get " << sum << " with a remainder of "
             << remain << endl;

        // Write data to file
        outputFile << num1 << " / " << num2 << " = " << sum << " remainder " << remain << endl;

        // Ask to press enter to continue
        cout << "\nPress [ENTER] twice to continue: ";
        // Clear previous input
        cin.clear();
        cin.ignore(123, '\n');
        cin.get();

        // Ask if would like another problem
        cout << "\nWould you like another addition problem?\n"
             << "1. Yes.\n"
             << "0. No. Return to main menu ";
        // Error check anotherProb input
        anotherProb = inputVal(anotherProb);
        cout << endl;

    // End of Another Problem? do while loop
    } while(anotherProb == true);

    // Close outputFile
    outputFile.close();

    // Return boolean value either to
    // main menu or another problem.
    return anotherProb;
}

//***************************************************************
// The calculateAreaOfRectangle function receives the length and*
// width from the user, calculates the area of a rectangle, and *
// prints that calculation to screen.                           *
//***************************************************************

bool calculateAreaOfRectangle()
{
    // Output stream object
    ofstream outputFile;
    // Open file
    outputFile.open("MathTutorRecord.txt");

    // Variable
    bool anotherCal;

    // Another problem? do while loop
    do
    {
        // Variables: Hold length, width, and area.
        double area, length, width;

        clearScreen();

        // Ask for length
        cout << "What is the length of the rectangle? ";
        length = inputVal(length);

        // Get width
        cout << "What is the width? ";
        width = inputVal(width);

        // Calculate and display
        area = length * width;
        cout << "\nMultiplying the length by the width " << endl
             << "determines the area of a rectangle. \n" << endl;

        // Ask to pree enter ton continue
        cout << "Type [ENTER] to continue: ";
        // Clear previous input
        cin.clear();
        cin.ignore(123, '\n');
        cin.get();

        // Discribe how to solve the problem
        cout << "\nThe area of the rectangle is " << area << endl << endl;

        // Write data to file
        outputFile << "The area of the rectangle is " << area << endl;

        // Ask if would like another problem.
        cout << "\nWould you like to make another calculation?\n"
             << "1. Yes.\n"
             << "0. No. Return to main menu ";
        // Error check anotherCal
        anotherCal = inputVal(anotherCal);
        cout << endl;

    // End of Another probelm? do while loop
    } while(anotherCal == true);

    // CLose outputFile
    outputFile.close();

    // Return boolean value either to
    // main menu or another problem.
    return anotherCal;
}

//*******************************************************************
// The calculateAreaOfCircle function receives the radius of a      *
// circle from the user, calculates the area, and prints the        *
// calculation to screen.                                           *
//*******************************************************************

bool calculateAreaOfCircle()
{
    // Output stream object
    ofstream outputFile;
    // Open file
    outputFile.open("MathTutorRecord.txt");

    // Variable
    bool anotherCal;

    // Another problem? do while loop
    do
    {
        // Variables: Hold area, radius, PI.
        const double PI = 3.14;
        double area, radius, radSquare;

        // Clear Screen
        clearScreen();

        // Ask for radius
        cout << "What is the radius of the circle? ";
        radius = inputVal(radius);

        // Calculate and display
        radSquare = (radius * radius);
        area = PI * (radius * radius);

        // Explain how to solve for area
        cout << "\nSquaring the radius and then multiplying" << endl
             << "it's sum by PI determines the area of a circle.\n" << endl;

        // Ask to press enter to proceed
        cout << "Type [ENTER] to continue: " << endl;
        // Clear previous input
        cin.clear();
        cin.ignore(123, '\n');
        cin.get();

        // Display area of circle
        cout << "The area of the circle is: " << area << endl << endl;

        // Write data to file
        outputFile << "The area of the circle is: " << area << endl;

        // Ask if would like to make another calculation
        cout << "\nWould you like to make another calculation?\n"
             << "1. Yes.\n"
             << "0. No. Return to main menu ";
        anotherCal = inputVal(anotherCal);
        cout << endl;

    // End of Another problem? do while loop
    } while(anotherCal == true);

    // Close outputFile
    outputFile.close();

    // Return boolean value either to
    // main menu or another problem.
    return anotherCal;
}

//*******************************************************************
// The calculateAreaOfTriangle function receives the height and base*
// of a triangle from the user, calculates the area, and prints the *
// calculation to screen.                                           *
//*******************************************************************

bool calculateAreaOfTriangle()
{
    // Output stream object
    ofstream outputFile;
    // Open file
    outputFile.open("MathTutorRecord.txt");

    // Variable
    bool anotherCal;

    // Another Problem? Do while loop
    do
    {
        // Variables: Hold length, width, and area.
        double area, height, base;

        clearScreen();        // Explain program, then get length
        cout << "What is the height of the triangle? ";
        height = inputVal(height);

        // Get width
        cout << "What is the base? ";
        base = inputVal(base);


        // Calculate and display
        area = (height * base) / 2;
        // Explain how to solve for area
        cout << "\nMultiplying the base by the height and dividing\n"
             << "their sum by 2 determines the area of a triangle.\n"  << endl;

        // Ask to press enter to proceed
        cout << "Type [ENTER] to continue: " << endl;
        // Clear previous input
        cin.clear();
        cin.ignore(123, '\n');
        cin.get();

        // Dipslay area
        cout << "The area of the triangle is " << area << endl << endl;

        // Write data to a file
        outputFile << "The area of the triangle is " << area << endl;

        // Ask if would like to make another calculation
        cout << "\nWould you like to make another calculation?\n"
             << "1. Yes.\n"
             << "0. No. Return to main menu ";
        // Error check anotherCal
        anotherCal = inputVal(anotherCal);
        cout << endl;

    // End of Another problem? do while loop
    } while(anotherCal == true);

    // Close outputFile
    outputFile.close();

    // Return boolean value either to
    // main menu or another problem.
    return anotherCal;
}

//***************************************************
// function to clear screen, using variable         *
// created in PPD statement                         *
//***************************************************
void clearScreen()
{
system(clearVar);
}

//***************************************************************
// Function inputVal (int) check for valid input.               *
// If the user types in anything other than the int data type,  *
// they will be promted to enter the valid input.               *
//***************************************************************

int inputVal(int num)
{
    while (!(cin >> num))
    {
        cout << "\n\tI'm sorry a whole number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

//***************************************************************
// Function inputVal (double) check for valid input.            *
// If the user types in anything other than double data type,   *
// they will be promted to enter the valid data type.           *
//***************************************************************

double inputVal(double num)
{
    while (!(cin >> num))
    {
        cout << "\n\tI'm sorry a whole number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
