//*********************************************************
// This function is sent from a switch statement
// The menu selection is sheet music case 1
// Display Author, Book, and date. Save file as csv
//
// By: Jesus Hilario Hernandez
// Last Updated: November 8, 2016
//*********************************************************
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
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

//Function Prototypes
void clearScreen();
char errorCheckYorN(char);

// Main Function
int main()
{
    // Input Stream Objects
    ifstream inputAuthors,      // For Authors.txt
             inputBooks,        // For Books.txt
             inputDates,        // For Date.txt
             inputDiscription;  // For Discription.txt

    // Output Stream Objects
    ofstream keptBooks;         // Output Stream Object

    // Constants
    const int SIZE = 10,
              SELECT_BOOK_1  = 0,
              SELECT_BOOK_2  = 1,
              SELECT_BOOK_3  = 2,
              SELECT_BOOK_4  = 3,
              SELECT_BOOK_5  = 4,
              SELECT_BOOK_6  = 5,
              SELECT_BOOK_7  = 6,
              SELECT_BOOK_8  = 7,
              SELECT_BOOK_9  = 8,
              SELECT_BOOK_10 = 9;

    // Variables
    string author[SIZE],        // Holds author names
           book[SIZE],          // Holds book names
           date[SIZE],          // Holds book dates
           discription[SIZE];   // Holds book discriptions

    int selectBook;             // Holds book selection
    char keepBook,              // Holds Y or N
         anotherSelection;      // Holds Y or N to return to music menu or not

    // Open input/ouput files
    inputAuthors.open("Authors.txt");
    inputBooks.open("Books.txt");
    inputDates.open("Date.txt");
    inputDiscription.open("Discriptions.txt");
    keptBooks.open("RememberedBooks.txt", ios::out | ios::app);


    // Select Book from a list
    do
    {

        clearScreen();
        // Display list of music books
        cout << "Here are the available music books: \n" << endl;
        // Fill arrays with external file data and display contents
        for (int count = 0; count < SIZE; count++)
        {
            getline(inputAuthors, author[count]);
            getline(inputBooks, book[count]);
            getline(inputDates, date[count]);
            getline(inputDiscription, discription[count]);
            cout << '\t' << (count + 1) << ". "
                         << book[count] << ", " << endl;
        }

        // Close inputFiles
        inputAuthors.close();
        inputBooks.close();
        inputDates.close();
        inputDiscription.close();

        // Ask your to select a book
        cout << "Select a book: ";

        // Receive into selectBook variable
        // Error check for input validation
        while (!(cin >> selectBook) || (selectBook < 1 || selectBook > 10))   // Error Check for valid input
        {
            // Describe error
            cout << "ERROR: you must choose a number from 1 to 10.";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }

        switch (selectBook)
        {
            case (SELECT_BOOK_1 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_1] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_1] << endl << endl
                     << "    "  << discription[SELECT_BOOK_1]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);

                break;
            case (SELECT_BOOK_2 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_2] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_2] << endl << endl
                     << "    "  << discription[SELECT_BOOK_2]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);

                break;
            case (SELECT_BOOK_3 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_3] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_3] << endl << endl
                     << "    "  << discription[SELECT_BOOK_3]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            case (SELECT_BOOK_4 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_4] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_4] << endl << endl
                     << "    "  << discription[SELECT_BOOK_4]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            case (SELECT_BOOK_5 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_5] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_5] << endl << endl
                     << "    "  << discription[SELECT_BOOK_5]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            case (SELECT_BOOK_6 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_6] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_6] << endl << endl
                     << "    "  << discription[SELECT_BOOK_6]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            case (SELECT_BOOK_7 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_7] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_7] << endl << endl
                     << "    "  << discription[SELECT_BOOK_7]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            case (SELECT_BOOK_8 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_8] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_8] << endl << endl
                     << "    "  << discription[SELECT_BOOK_8]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            case (SELECT_BOOK_9 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_9] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_9] << endl << endl
                     << "    "  << discription[SELECT_BOOK_9]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            case (SELECT_BOOK_10 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                     << '\t'    << book[SELECT_BOOK_10] << ", by "  << endl
                     << "\t\t"  << author[SELECT_BOOK_10] << endl << endl
                     << "    "  << discription[SELECT_BOOK_10]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                break;
            default:
                cout << "NO WORK." << endl;
        }

        // If no. Say ok.
        if (keepBook == 'N' || keepBook == 'n')
        {
            cout << "Ok.\n" << endl;
        }
        // If yes. Say awesome!
        else if (keepBook == 'y' || keepBook == 'Y')
        {
            cout << "Awesome!\n" << endl;
            // Write to output file books kept by user
            keptBooks << book[selectBook - 1] << ", "
                      << author[selectBook -1] << ", "
                      << date [selectBook -1] << endl;
        }

        // Ask if would like to make another music selection
        cout << "Would you like to make another music genre selection?";
        cin >> anotherSelection;

    } while(anotherSelection == 'y' || anotherSelection == 'Y');// End Do While

    //Close output File
    keptBooks.close();
    return 0;
}
//***************************************************
// function errorCheckYN check for valid input.     *
// In this case the user must enter a Y or and N.   *
//***************************************************
char errorCheckYorN(char letter)
{
    while (!(letter == 'y' || letter == 'Y' || letter == 'n' || letter == 'N'))
        {
            // Explain error
            cout << "ERROR: you must choose either Y or N.";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
            // Receive input again
            cin >> letter;
        }
    return letter;
}


//***************************************************
// function to clear screen, using variable         *
// created in PPD statement                         *
//***************************************************
void clearScreen()
{
    system(clearVar);
}
