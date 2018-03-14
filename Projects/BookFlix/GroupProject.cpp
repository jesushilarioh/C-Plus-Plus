#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
//#include <windows.h>
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

//Function Prototypes
void Romance();             // Romance Genre
void RomanceDes();          // Romance Discriptions
void Adventure();           // Adventure Genre
void Mystery();             // Mystery Genre
void Music();               // Music Genre
void clearScreen();         // Mystery Genre
char errorCheckYorN(char);  // Error Check for Y or N.

int main()
{
    // Variables
    int menu_choice;    // Holds Menu Choice
    char repeat_menu;   // To Re-display the menu_choice

    // Clear Screen
    clearScreen();
    do
    {
        cout <<  "#     #                                                            "<< endl
             <<  "#  #  # ###### #       ####   ####  #    # ######    #####  ####   "<< endl
             <<  "#  #  # #      #      #    # #    # ##  ## #           #   #    #  "<< endl
             <<  "#  #  # #####  #      #      #    # # ## # #####       #   #    #  "<< endl
             <<  "#  #  # #      #      #      #    # #    # #           #   #    #  "<< endl
             <<  "#  #  # #      #      #    # #    # #    # #           #   #    #  "<< endl
             <<  " ## ##  ###### ######  ####   ####  #    # ######      #    ####   "<< endl
             <<  "######                       #######                               "<< endl
             <<  "#     #  ####   ####  #    # #       #      # #    #               "<< endl
             <<  "#     # #    # #    # #   #  #       #      #  #  #                "<< endl
             <<  "######  #    # #    # ####   #####   #      #   ##                 "<< endl
             <<  "#     # #    # #    # #  #   #       #      #   ##                 "<< endl
             <<  "#     # #    # #    # #   #  #       #      #  #  #                "<< endl
             <<  "######   ####   ####  #    # #       ###### # #    #               "<< endl;

        cout << "\nChoose a genre to begin" << endl;
        cout << "\n1. Music " << endl;
        cout << "\n2. Romance" << endl;
        cout << "\n3. Adventure" << endl;
        cout << "\n4. Mystery\n" << endl;

        // Receive into menu_choice
        // Error check for input validation
        while (!(cin >> menu_choice) || (menu_choice < 1 || menu_choice > 4))   // Error Check for valid input
        {
            // Describe error
            cout << "ERROR: you must choose a number from 1 to 10.";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(123, '\n');
        }

        switch (menu_choice)
        {

                // 1. Music Genre
            case 1:
                Music();
                break;

                // 2. Romance Genre
            case 2:
                Romance();
                break;

                // 3. Adventure Genre
            case 3:
                Adventure();
                break;

                // 4. Mystery Genre
            case 4:
                Mystery();
                break;

            default:
                break;

        }

        // Clear Screen
        cout << "\nWould you like to return to the main menu? (Y/N)" << endl;

        cin >> repeat_menu;

    } while (repeat_menu == 'Y' || repeat_menu == 'y');

    cout << "\nHave a nice day!" << endl;
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
        cout << "ERROR: you must choose either Y or N." << endl
        << "Y for Yes or\n"
        << "N for No...";
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

//***************************************************
// Romance Function.                                *
//***************************************************
void Romance()
{
    // Variables
    const int SIZE = 4;                   // Holds array size
    int position = 0;
    char repeat_romancemenu;        // Holds Y or N to return to Romance menu or not
    int menu_romancechoice;         // Holds romance book selection

    // Arrays
    string romanceBookInfo[SIZE];   // Holds Romance Book info: author, title, date

    // Input Files
    ifstream file;

    do
    {

        // Clear the screen
        clearScreen();

        cout <<   "######                                            "<< endl
             <<   "#     #  ####  #    #   ##   #    #  ####  ###### "<< endl
             <<   "#     # #    # ##  ##  #  #  ##   # #    # #      "<< endl
             <<   "######  #    # # ## # #    # # #  # #      #####  "<< endl
             <<   "#   #   #    # #    # ###### #  # # #      #      "<< endl
             <<   "#    #  #    # #    # #    # #   ## #    # #      "<< endl
             <<   "#     #  ####  #    # #    # #    #  ####  ###### ";

        // Open input file.
        file.open("RomanceBooksAshley.txt");

        // Display book selection
        cout << "\n\n" << endl;
        cout << " Author             Title               Date" << endl << endl;

        // This For loop get contents from the external file
        // and Displays the to screen.
        for (int count = 0; count < SIZE; count++)
        {
            // getting from external file
            getline(file, romanceBookInfo[count]);
            // displays contents to screen
            cout << " " << romanceBookInfo[count] << endl;
        }

        // Close input file.
        file.close();

        cout << endl << " Choose a book to read the description: ";

        cin >> menu_romancechoice;
        cout << endl;

        switch(menu_romancechoice)
        {
            case 1:
            {
                // Clear the screen
                clearScreen();
                // Display Selction
                cout << endl << " " << romanceBookInfo[0] << endl << endl;
                // Display Description
                cout << "\tWould you risk it all to " << endl
                     << " change your destiny?" << endl << endl;

                cout << "\tThe last thing Kelsey Hayes thought she'd be" << endl
                     << " doing this summer was trying to break a 300-year" << endl
                     << " old Indian curse. With a mysterious white tiger " << endl
                     << " named Ren. Halfway around the world. But that's" << endl
                     << " exactly what happened." << endl << endl;

                cout << "\tFace-to-face with dark forces, spellbinding "<< endl
                     << " magic, and mystical worlds where nothing is " << endl
                     << " what it seems, Kelsey risks everything to piece " << endl
                     << " together an ancient prophecy that could break the " << endl
                     << " curse forever. Packed the epic with magic, " << endl
                     << " action-adventure, and romance, Tiger's Curse " << endl
                     << " series will keep you breathless and yearning for " << endl
                     << " more." << endl;
            }
                break;
            case 2:
            {
                // Clear the screen
                clearScreen();
                // Display Selection
                cout << endl << " " << romanceBookInfo[1] << endl << endl;
                // Display Description
                cout << "\tBack in Oregon, Kelsey tries to pick up the " << endl
                     << " pieces of her life and push aside her feelings " << endl
                     << " for Ren. Kelsey Hayes's eighteenth summer was" << endl
                     << " crazy. The kind of crazy nobody would ever" << endl
                     << " believe." << endl << endl;

                cout << "\tAside From battling immortal sea monkeys and " << endl
                     << " trekking the jungles of India, she fell in love " << endl
                     << " with Ren, a 300-year-old prince." << endl << endl;

                cout << "\tWhen danger suddenly forces Kelsey on another " << endl
                     << " Indian quest, with Ren's bad-boy brother, " << endl
                     << " Kishan, the unlikely duo begins to question their " << endl
                     << " true destiny. Ren's life hangs in the balance--" << endl
                     << " so does the truth within Kelsey's heart." << endl;

            }
                break;
            case 3:
            {
                // Clear the screen
                clearScreen();
                // Display Selection
                cout << endl << " " << romanceBookInfo[2] << endl << endl;
                // Display Description
                cout << "\tGalen, a Syrena prince, searches land for a " << endl
                     << " girl he's heard can communicate with fish. " << endl
                     << " It's while Emma is on  vacation at the beach" << endl
                     << " that she meets Galen. Although  their connection " << endl
                     << " is immediate and powerful, Galen's not fully convinced " << endl
                     << " that Emma's the one he's been looking for. That is," << endl
                     << " until a deadly encounter with a shark proves" << endl
                     << " that Emma and her Gift may be the only thing that " << endl
                     << " can save  his kingdom. He needs her help�no matter" << endl
                     << " what the risk." << endl;

            }
                break;
            case 4:
            {
                // Clear the screen
                clearScreen();
                // Display Selection
                cout << endl << " " << romanceBookInfo[3] << endl << endl;
                // Display Description
                cout << "\tEmma has just learned that her mother is a " << endl
                     << " long-lost Poseidon princess, and now struggles " << endl
                     << " with an identity crisis: As a Half-Breed, " << endl
                     << " she's a freak in the human  world and an abomination" << endl
                     << " in the Syrena realm. Syrena law states all " << endl
                     << " Half-Breeds should be put to death." << endl << endl;

                cout << "\tAs if that's not bad enough, her mother's " << endl
                     << " reappearance in the Syrena world turns the " << endl
                     << " two kingdoms�Poseidon and Triton�against one " << endl
                     << " another. Which leaves Emma with a decision to make:" << endl
                     << " Should she comply with Galen's request to keep" << endl
                     << " herself safe and just hope for the best? Or " << endl
                     << " should she risk it all and reveal herself�and" << endl
                     << " her Gift�to save a people she's never known?" << endl;

            }
                break;
            default:
            {
                cout << " Invalid answer. Please try again." << endl;
            }
                break;

        }
        cout << endl << " Would you like to return to the Romance menu? (Y/N)" << endl;

        cin >> repeat_romancemenu;
    }
    while (repeat_romancemenu == 'Y' || repeat_romancemenu == 'y');
}

//***************************************************
// RomanceDes Function.                             *
//***************************************************

void RomanceDes()
{

}


//***************************************************
// Adventure Function.                              *
//***************************************************

void Adventure()
{
    cout << "\nHere's a list of 3 Adventure books you'd might like to read.\n" << endl;
    //Sleep (1000);

    fstream inFile;
    const int SIZE = 10;        //array size
    const int min_value = 0;    //min random value
    const int max_value = 5;    //max random value

    string book[SIZE];          //declare arrays
    string author[SIZE];
    string date[SIZE];

    int count = 0;
    int num = 1;
    int RNG;        //for random generator

    inFile.open ("AdventureBooksRegean.csv");       //open the file

    if (inFile.fail())             //if file did not open
    {
        cout << "Error! Could not open file." << endl;
    }
    if (inFile)
    {

        while (getline (inFile, book[count], ','))
        {
            getline (inFile, author[count], ',');
            getline (inFile, date[count], '\n');
            count++;
        }

        cout << "Title" << "\t\t" << setw(25) << "Author" << "\t" << setw(14) << "Date\n" << endl;

        for (int numloop = 0; numloop < 3; numloop++)
        {
            //get the system time
            unsigned seed = time(0);
            //seed the random num generator
            srand(seed);

            RNG = (rand() % (max_value - min_value + 1)) + min_value;
            cout << num << ". " << book[RNG] << setw(25) << right << author[RNG] << setw(10) << right << date[RNG] << endl << endl;
            num++;


            //Sleep (1000);
        }
    }


    inFile.close();     //close the file

}

//***************************************************
// Mystery Function.                                *
//***************************************************

void Mystery()
{
    cout << "\nHere's a list of  3 Mystery books you'd might like to read.\n" << endl;
    //Sleep (1000);

    fstream inFile;
    const int SIZE = 10;        //array size
    const int min_value = 0;    //min random value
    const int max_value = 5;    //max random value

    string book[SIZE];          //declare arrays
    string author[SIZE];
    string date[SIZE];

    int count = 0;
    int num = 1;
    int RNG;        //for random generator

    inFile.open ("MysteryBooksRegean.csv");       //open the file

    if (inFile.fail())             //if file did not open
    {
        cout << "Error! Could not open file." << endl;
    }
    if (inFile)
    {

        while (getline (inFile, book[count], ','))
        {
            getline (inFile, author[count], ',');
            getline (inFile, date[count], '\n');
            count++;
        }

        cout << "Title" << "\t\t" << setw(25) << "Author" << "\t" << setw(14) << "Date\n" << endl;

        for (int numloop = 0; numloop < 3; numloop++)
        {
            //get the system time
            unsigned seed = time(0);
            //seed the random num generator
            srand(seed);

            RNG = (rand() % (max_value - min_value + 1)) + min_value;
            cout << num << ". " << book[RNG] << setw(25) << right << author[RNG] << setw(10) << right << date[RNG] << endl << endl;
            num++;


            //Sleep (1000);
        }
    }


    inFile.close();     //close the file
}

//***********************************************************
// The Music function displays a list of music books for    *
// the user to choose from. The user will be asked if they  *
// would like to keep the book they've selected. If yes,    *
// The book information will be written to an external file.*
// Then, the user will be asked if they would like to make  *
// another music selection. If yes, the program will display*
// the menu again. If no, the program will then exit this   *
// function.                                                *
//***********************************************************
void Music()
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
    inputAuthors.open("MusicAuthorsJesus.txt");
    inputBooks.open("MusicBooksJesus.txt");
    inputDates.open("MusicDateJesus.txt");
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
            cout << "ERROR: you must choose a number between 1 and 10.";
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
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
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
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
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

        // Clear screen
        clearScreen();

        // Ask if would like to make another music selection
        cout << "Would you like to make another "
        << "music genre selection? (Y/N)";
        cin >> anotherSelection;
        anotherSelection = errorCheckYorN(anotherSelection);

    } while(anotherSelection == 'y' || anotherSelection == 'Y');// End Do While

    //Close output File
    keptBooks.close();
}
