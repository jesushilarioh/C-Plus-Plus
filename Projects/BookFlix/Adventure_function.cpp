#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <cstdlib>      //for rand and srand
#include <ctime>        // for the time
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

void Adventure();
void clearScreen();         // clear screen
char errorCheckYorN(char);  // Error Check for Y or N.

int main()
{
    int menu_choice;

    cout << "Please choose from the menu.\n";
    cin >> menu_choice;

    if (menu_choice == 1)
    {
        cout << "You have chosen the Adventure genre.\n" << endl;
        Adventure();
        cout << "\n\nHave a nice day!";
        return 0;
    }
}

void Adventure()
{
    // Input Stream Objects
    ifstream inputAuthors;      // For Authors.txt
    ifstream inputTitle;        // For Books.txt
    ifstream inputDates;        // For Date.txt
    ifstream inputDescription;  // For Discription.txt

    // Output Stream Objects
    ofstream keptBooks;         // Output Stream Object

    // Constants
    const int SIZE = 4,
    SELECT_BOOK_1  = 0,
    SELECT_BOOK_2  = 1,
    SELECT_BOOK_3  = 2,
    SELECT_BOOK_4  = 3,
    SELECT_BOOK_5  = 4;

    // Variables
    string author[SIZE];        //author names
    string title[SIZE];          // book titles
    string date[SIZE];          // book dates
    string description[SIZE];   // book descriptions

    int selectBook;             // book selection
    char keepBook,              // Holds Y or N
         anotherSelection;      // Holds Y or N to return to adventure menu or not

    // Open input/ouput files
    inputAuthors.open("Adventure_authors.txt");
    inputTitle.open("Adventure_titles.txt");
    inputDates.open("Adventure_date.txt");
    inputDescription.open("Adventure_descriptions.txt");
    keptBooks.open("KeptAdventureBooks.txt", ios::out | ios::app);


    // Select Book from a list
    do
    {

        clearScreen();
        // Display list of music books
        cout << "Here are the available adventure books: \n" << endl;
        // Fill arrays with external file data and display contents
        for (int count = 0; count < SIZE; count++)
        {
            getline(inputAuthors, author[count]);
            getline(inputTitle, title[count]);
            getline(inputDates, date[count]);
            getline(inputDescription, description[count], '$');
            cout << '\t' << (count + 1) << ". "
            << title[count] << endl;
        }

        // Close inputFiles
        inputAuthors.close();
        inputTitle.close();
        inputDates.close();
        inputDescription.close();

        // Ask your to select a book
        cout << "Select a book: ";

        // Receive into selectBook variable
        // Error check for input validation
        while (!(cin >> selectBook) || (selectBook < 1 || selectBook > SIZE))   // Error Check for valid input
        {
            // Describe error
            cout << "ERROR: you must choose a number between 1 and 4.\n";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }

        switch (selectBook)
        {
            case (SELECT_BOOK_1 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl;
                cout << '\t'    << title[SELECT_BOOK_1] << ", by ";
                cout << author[SELECT_BOOK_1] << endl << endl;
                cout << "    "  << description[SELECT_BOOK_1]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_2 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl;
                cout << "'\t'"    << title[SELECT_BOOK_2] << ", by ";
                cout << author[SELECT_BOOK_2] << endl << endl;
                cout << "    "  << description[SELECT_BOOK_2]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_3 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl;
                cout << '\t'    << title[SELECT_BOOK_3] << ", by ";
                cout << author[SELECT_BOOK_3] << endl << endl;
                cout << "    "  << description[SELECT_BOOK_3]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_4 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl;
                cout << '\t'    << title[SELECT_BOOK_4] << ", by ";
                cout << author[SELECT_BOOK_4] << endl << endl;
                cout << "    "  << description[SELECT_BOOK_4]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            default:
                cout << "No book selected." << endl;
        }

        // If no. Say ok.
        if (keepBook == 'N' || keepBook == 'n')
        {
            cout << "Ok.\n" << endl;
        }
        // If yes. Say awesome!
        else if (keepBook == 'y' || keepBook == 'Y')
        {
            cout << "That's Great!\n" << endl;
            // Write to output file books kept by user
            keptBooks << title[selectBook - 1] << ", "
            << author[selectBook -1] << ", "
            << date [selectBook -1] << endl;
        }

        // Clear screen
        clearScreen();

        // Ask if would like to make another music selection
        cout << "Would you like to make another "
        << "Adventure genre selection? (Y/N)";
        cin >> anotherSelection;
        anotherSelection = errorCheckYorN(anotherSelection);

    } while(anotherSelection == 'y' || anotherSelection == 'Y');// End Do While

    //Close output File
    keptBooks.close();
}

void clearScreen()
{
    system(clearVar);
}

char errorCheckYorN(char letter)
{
    while (!(letter == 'y' || letter == 'Y' || letter == 'n' || letter == 'N'))
    {
        // Explain error
        cout << "ERROR: you must choose either Y or N." << endl
        << "Y for Yes or\n"
        << "N for No...\n";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
        // Receive input again
        cin >> letter;
    }
    return letter;
}
