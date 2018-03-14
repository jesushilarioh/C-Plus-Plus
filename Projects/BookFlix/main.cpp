//******************************************************************
// Project name: BookFlix
// Team name:
// Members:
//      ASHLEY GUZMAN,
//      REAGEN HAMMITT,
//      JESUS HERNANDEZ

// Course: COSC 1436.001 Programming Fundamentals 1
// Group Project
// Due Date: December 4, 2016
// Instructor: Korinne Caruso
//
// PURPOSE: This program displays a book menu selection for the user
// to choose from. The user then searches through the progam for a
// book or books that they would like to read.
//
// INPUT: The input in this program comes either from the user or from
// an input file. The user selects from a initial menu, a book genre
// menu, and must enter a Y or N for either keep a book or to continue
// to make another seletion. And then, the user must type
// a Y or an N to redisplay they menu or to end the program.
//
// OUTPUT: Output, in this program, is sent either to the screen
// or to an output file. The user is displayed an initial menu,
// a genre menu, asked to select a book, if they would like to keep
// a book, if they would like to select another book, and if they
// would like to see the inital menu. The output file receives
// data from the program, if the user decides to keep a book. The
// title, date, and author of the book is written to an output file.
//
//******************************************************************
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
void Music();               // Music Genre
void Romance();             // Romance Genre
void Adventure();           // Adventure Genre
void Mystery();             // Mystery Genre
void clearScreen();         // Mystery Genre
char errorCheckYorN(char);  // Error Check for Y or N.
int errorCheckInts1_4(int); // Error Check range 1-4 and integers

int main()
{
    // Variables
    int menu_choice;    // Holds Menu Choice
    char repeat_menu;   // To Re-display the menu_choice

    do
    {
        // Clear Screen
        clearScreen();

        cout << "\nChoose a genre to begin" << endl;
        cout << "\n1. Music " << endl;
        cout << "\n2. Romance" << endl;
        cout << "\n3. Adventure" << endl;
        cout << "\n4. Mystery\n" << endl;

        // Receive user input into menu_choice
        // Error check for valid input
        menu_choice = errorCheckInts1_4(menu_choice);

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

        cout << "\nWould you like to return to the main menu? (Y/N)" << endl;
        // Receive user input into repeat_menu
        cin >> repeat_menu;
        // Error check for valid input (Y/N)
        repeat_menu = errorCheckYorN(repeat_menu);

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

//***********************************************************
// Function errorCheckInt1-4 checks for valid input.        *
// In this case the user must enter and integer or choose   *
// a number between 1 and 4.                                *
//***********************************************************

int errorCheckInts1_4(int num)
{
    while (!(cin >> num) || (num < 1 || num > 4))
    {
        // Explain the Error
        cout << "ERROR: you must choose a number from 1 to 4.";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}

//***************************************************
// function to clear screen, using variable         *
// created in PPD statement                         *
//***************************************************

void clearScreen()
{
    system(clearVar);
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
    ifstream inputAuthors,      // For MusicAuthors.txt
    inputBooks,        // For MusicBooks.txt
    inputDates;        // For MusicDate.txt

    // Output Stream Objects
    ofstream keptBooks;         // Output Stream Object

    // Constants
    const int SIZE = 4,
    SELECT_BOOK_1  = 0,
    SELECT_BOOK_2  = 1,
    SELECT_BOOK_3  = 2,
    SELECT_BOOK_4  = 3;

    // Variables
    string author[SIZE],        // Holds author names
    book[SIZE],          // Holds book names
    date[SIZE];          // Holds book dates

    int selectBook;             // Holds book selection
    char keepBook,              // Holds Y or N
         anotherSelection;      // Holds Y or N to return to music menu or not

    // Select Book from a list
    do
    {
        // Open input/ouput files
        inputAuthors.open("MusicAuthorsJesus.txt");
        inputBooks.open("MusicTitleJesus.txt");
        inputDates.open("MusicDateJesus.txt");
        keptBooks.open("RememberedBooks.txt", ios::out | ios::app);

        clearScreen();
        // Display list of music books
        cout << "Here are the available music books: \n" << endl;
        // Fill arrays with external file data and display contents
        for (int count = 0; count < SIZE; count++)
        {
            getline(inputAuthors, author[count]);
            getline(inputBooks, book[count]);
            getline(inputDates, date[count]);
            cout << '\t' << (count + 1) << ". "
                 << book[count] << ", " << endl;
        }

        // Close inputFiles
        inputAuthors.close();
        inputBooks.close();
        inputDates.close();

        // Ask your to select a book
        cout << "\nSelect a book: ";

        // Receive into selectBook variable
        // Error check for input validation
        selectBook = errorCheckInts1_4(selectBook);

        switch (selectBook)
        {
            case (SELECT_BOOK_1 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                << '\t'    << book[SELECT_BOOK_1] << ", by "  << endl
                << "\t\t"  << author[SELECT_BOOK_1] << endl << endl;

                // Display Description
                cout << "\tWith the same trademark compassion " << endl
                     << "and erudition he brought to The Man Who Mistook " << endl
                     << "His Wife for a Hat, Oliver Sacks explores the place music " << endl
                     << "occupies in the brain and how it affects the human condition. " << endl
                     << "In Musicophilia, he shows us a variety of what he calls “musical " << endl
                     << "misalignments.” Among them: a man struck by lightning who suddenly " << endl
                     << "desires to become a pianist at the age of forty-two; an entire group " << endl
                     << "of children with Williams syndrome, who are hypermusical from birth; " << endl
                     << "people with “amusia,” to whom a symphony sounds like the clattering of " << endl
                     << "pots and pans; and a man whose memory spans only seven seconds-for everything " << endl
                     << "but music. Illuminating, inspiring, and utterly unforgettable, Musicophilia " << endl
                     << "is Oliver Sacks' latest masterpiece." << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                // Receive user input into keepBook
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_2 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                << '\t'    << book[SELECT_BOOK_2] << ", by "  << endl
                << "\t\t"  << author[SELECT_BOOK_2] << endl << endl;

                // Display description
                cout << "\tIn this sweeping and dramatic narrative, " << endl
                     << "Alex Ross, music critic for The New Yorker, weaves " << endl
                     << "together the histories of the twentieth century and its music," << endl
                     << "from Vienna before the First World War to Paris in the twenties; " << endl
                     << "from Hitler's Germany and Stalin's Russia to downtown New York " << endl
                     << "in the sixties and seventies up to the present. Taking readers into the " << endl
                     << "labyrinth of modern style, Ross draws revelatory connections " << endl
                     << "between the century's most influential composers and the wider " << endl
                     << "culture. The Rest Is Noise is an astonishing history of the twentieth " << endl
                     << "century as told through its music." << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                // Receive user input into keepBook
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_3 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                << '\t'    << book[SELECT_BOOK_3] << ", by "  << endl
                << "\t\t"  << author[SELECT_BOOK_3] << endl << endl;

                // Display Book 3 description
                cout << "\tThis bible of the piano marketplace " << endl
                     << "is indispensable to buyers and owners of pianos, " << endl
                     << "amateur and professional players alike. Hundreds of thousands " << endl
                     << "of pianos are bought and sold each year, yet most people buy a" << endl
                     << "piano with only the vaguest idea of what to look for as they make this" << endl
                     << "major purchase. The Piano Book evaluates and compares every brand and " << endl
                     << "style of piano sold in the United States. There is information on piano " << endl
                     << "moving and storage, inspecting individual new and used pianos, the special" << endl
                     << "market for Steinways, and sales gimmicks to watch out for. An annual supplement, " << endl
                     << "sold separately, lists current prices for more than 2,500 new piano models." << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                // Receive user input into keepBook
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_4 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl
                << '\t'    << book[SELECT_BOOK_4] << ", by "  << endl
                << "\t\t"  << author[SELECT_BOOK_4] << endl << endl;

                // Display Book 4 Description
                cout << "How Music Works is David Byrne's buoyant " << endl
                     << "celebration of a subject he has spent a lifetime thinking " << endl
                     << "about. Equal parts historian and anthropologist, raconteur " << endl
                     << "and social scientist, Byrne draws on his own work over the " << endl
                     << "years with Talking Heads, Brian Eno, and his myriad collaborators - " << endl
                     << "along with journeys to Wagnerian opera houses, African villages, " << endl
                     << "and anywhere music exisits - to show that music - making is not " << endl
                     << "just the act of a solitary composer in a studio, but rather a logical, " << endl
                     << "populist, and beautiful result of cultural circumstance. " << endl
                     << "A brainy, irresistible adventure, How Music Works is an impassioned " << endl
                     << "argument about music's liberating, life - affirming power." << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                // Receive user input into keepBook
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

        // Ask if would like to make another music selection
        cout << "Would you like to make another "
        << "music genre selection? (Y/N)";
        // Receive user input into anotherSelection
        cin >> anotherSelection;
        // Error check anotherSelection
        anotherSelection = errorCheckYorN(anotherSelection);

    } while(anotherSelection == 'y' || anotherSelection == 'Y');// End Do While

    //Close output File
    keptBooks.close();
}


//***************************************************************
// The romance function displays a menu with romance books to   *
// choose from. The user is asked to choose a book. A description
// of the book is then displayed to the user. The user is asked *
// if they would like to keep the book. If yes, the book info is*
// then displayed to an output file. If they would not like to  *
// keep the book, the user will be asked if they would like     *
// to choose another book from the romance menu.                *
//***************************************************************

void Romance()
{
    // Variables
    const int SIZE = 4;                   // Holds array size
    int position = 0;
    char repeat_romancemenu;        // Holds Y or N to return to Romance menu or not
    int menu_romancechoice;         // Holds romance book selection

    // Arrays
    string romanceBookInfo[SIZE];   // Holds Romance Book info: author, title, date

    // Input / Output Files
    ifstream file;
    ofstream outputfile;

    do
    {

        // Clear the screen
        clearScreen();

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

        // Receive into menu_romancechoice variable
        // Error check for input validation
        menu_romancechoice = errorCheckInts1_4(menu_romancechoice);
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
                // Ask is user would like to keep book
                //cout << "\nWould you like to keep this book?";
                //cout << " (Y/N)";
                // Receive user input into keepBook
                //cin >> keepBook;
                // Error check keepBook
                //keepBook = errorCheckYorN(keepBook);
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
                     << " can save  his kingdom. He needs her help no matter" << endl
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
                     << " two kingdoms Poseidon and Triton against one " << endl
                     << " another. Which leaves Emma with a decision to make:" << endl
                     << " Should she comply with Galen's request to keep" << endl
                     << " herself safe and just hope for the best? Or " << endl
                     << " should she risk it all and reveal herself and" << endl
                     << " her Gift to save a people she's never known?" << endl;

            }
                break;
            default:
            {
                cout << " Invalid answer. Please try again." << endl;
            }
                break;

        }
        cout << endl << " Would you like to return to the Romance menu? (Y/N)" << endl;

        // Receive into repeat_romancemenu variable
        cin >> repeat_romancemenu;
        // Error check for input validation
        repeat_romancemenu = errorCheckYorN(repeat_romancemenu);
    }
    while (repeat_romancemenu == 'Y' || repeat_romancemenu == 'y');
}

/*
 *************************************************************************
 * This is the Adventure function. This function call from the files the *
 * title, author, and date. It will then allow the user to select a book *
 * which will then display a description of the book. The user is then   *
 * asked if they would like to keep the book. If they chose 'yes', the   *
 * book information will be sent to another file. They the user will be  *
 * asked if they would like to select another book. If they select 'no', *
 * the adventure function will end.                                      *
 *************************************************************************
 */

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
    SELECT_BOOK_4  = 3;

    // Variables
    string author[SIZE];        //author names
    string title[SIZE];          // book titles
    string date[SIZE];          // book dates
    string description[SIZE];   // book descriptions

    int selectBook;             // book selection
    char keepBook,              // Holds Y or N
         anotherSelection;      // Holds Y or N to return to adventure menu or not




    // Select Book from a list
    do
    {
        // Open input/ouput files
        inputAuthors.open("Adventure_authors.txt");
        inputTitle.open("Adventure_titles.txt");
        inputDates.open("Adventure_date.txt");
        inputDescription.open("Adventure_descriptions.txt");
        keptBooks.open("KeptAdventureBooks.txt", ios::out | ios::app);

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
        cout << "\nSelect a book: ";

        // Receive into selectBook variable
        // Error check for input validation
        selectBook = errorCheckInts1_4(selectBook);

        switch (selectBook)
        {
            case (SELECT_BOOK_1 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl;
                cout << "\t"    << title[SELECT_BOOK_1] << ", by ";
                cout << author[SELECT_BOOK_1] << endl << endl;
                cout << "    "  << description[SELECT_BOOK_1]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                // Receive user input into keepBook
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_2 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl;
                cout << "\t"    << title[SELECT_BOOK_2] << ", by ";
                cout << author[SELECT_BOOK_2] << endl << endl;
                cout << "    "  << description[SELECT_BOOK_2]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                // Receive user input into keepBook
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_3 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl;
                cout << "\t"    << title[SELECT_BOOK_3] << ", by ";
                cout << author[SELECT_BOOK_3] << endl << endl;
                cout << "    "  << description[SELECT_BOOK_3]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                // Receive user input into keepBook
                cin >> keepBook;
                // Error check keepBook
                keepBook = errorCheckYorN(keepBook);
                break;

            case (SELECT_BOOK_4 + 1):
                clearScreen();
                cout << "\nYou've selected:"                << endl;
                cout << "\t"    << title[SELECT_BOOK_4] << ", by ";
                cout << author[SELECT_BOOK_4] << endl << endl;
                cout << "    "  << description[SELECT_BOOK_4]    << endl;

                // Ask is user would like to keep book
                cout << "\nWould you like to keep this book?";
                cout << " (Y/N)";
                // Receive user input into keepBook
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
                      << author[selectBook - 1] << ", "
                      << date [selectBook - 1] << endl;
        }

        // Clear screen
        clearScreen();

        // Ask if would like to make another music selection
        cout << "Would you like to make another "
        << "Adventure genre selection? (Y/N)";
        // Receive user input into anotherSelection
        cin >> anotherSelection;
        // Error chek anotherSelection for (Y/N)
        anotherSelection = errorCheckYorN(anotherSelection);

    } while(anotherSelection == 'y' || anotherSelection == 'Y');// End Do While

    //Close output File
    keptBooks.close();
}

//***************************************************************
// The mystery function displays a menu with mystery books to   *
// choose from. The user is asked to choose a book. A description
// of the book is then displayed to the user. The user is asked *
// if they would like to keep the book. If yes, the book info is*
// then displayed to an output file. If they would not like to  *
// keep the book, the user will be asked if they would like     *
// to choose another book from the mystery menu.                *
//***************************************************************

void Mystery()
{
    // Variables
    const int SIZE = 4;             // Holds array size
    int position = 0;
    char repeat_mysterymenu;        // Holds Y or N to return to Romance menu or not
    int menu_mysterychoice;         // Holds romance book selection

    // Arrays
    string mysteryBookInfo[SIZE];   // Holds Romance Book into: author, title, date

    // Input Files
    ifstream file;

    do
    {
        // Clear the screen
        clearScreen();

        // Open input file.
        file.open("MysteryBooksAshley.txt");

        // Display book selection
        cout << "\n\n" << endl;
        cout << " Author             Title               Date" << endl << endl;

        // This For Loop gets contents from the external file
        // and Displays them to the screen.
        for (int count = 0; count < SIZE; count++)
        {
            // getting from external file
            getline(file, mysteryBookInfo[count]);
            // displays contents to screen
            cout << " " << mysteryBookInfo[count] << endl;
        }

        // Close input file.
        file.close();

        cout << endl << " Choose a book to read the discription: ";

        // Receive user input into menu_mysterychoice
        // and error check with errorCheckInts1_4 function
        menu_mysterychoice = errorCheckInts1_4(menu_mysterychoice);

        cout << endl;

        switch(menu_mysterychoice)
        {
            case 1:
            {
                // Clear the screen
                clearScreen();
                // Display Selection
                cout << endl << " " << mysteryBookInfo[0] << endl << endl;
                // Diplay Description
                cout << "\tThe classic and terrifying story " << endl
                     << "of one of the most famous supernatural events" << endl
                     << "--the infamous possessed house on Long Island from " << endl
                     << "which the Lutz family fled in 1975." << endl;
            }
                break;

            case 2:
            {
                // Clear the screen
                clearScreen();
                // Display Selection
                cout << endl << " " << mysteryBookInfo[0] << endl << endl;
                // Diplay Description
                cout << "\tHarriet Vanger, a scion of one of Sweden's " << endl
                     << "wealthiest families disappeared over forty years ago. " << endl
                     << "All these years later, her aged uncle continues to seek " << endl
                     << "the truth. He hires Mikael Blomkvist, a crusading " << endl
                     << "journalist recently trapped by a libel conviction, to investigate." << endl
                     << "He is aided by the pierced and tattooed punk prodigy Lisbeth " << endl
                     << "Salander. Together they tap into a vein of unfathomable " << endl
                     << "iniquity and astonishing corruption." << endl;
            }
                break;

            case 3:
            {
                // Clear the screen
                clearScreen();
                // Display Selection
                cout << endl << " " << mysteryBookInfo[0] << endl << endl;
                // Diplay Description
                cout << "\tAn ingenious code hidden in " << endl
                     << "the works of Leonardo da Vinci. A desperate race " << endl
                     << "through the cathedrals and castles of Europe." << endl
                     << "An astonishing truth concealed for centuries...unveiled " << endl
                     << "at last." << endl << endl;

                cout << "\tWhile in Paris, Harvard symbologist " << endl
                     << "Robert Langdon is awakened by a phone call in " << endl
                     << "the dead of the night. The elderly curator of the " << endl
                     << "Louvre has been murdered inside the museum, his body covered " << endl
                     << "in baffling symbols. As Langdon and gifted French cryptologist" << endl
                     << "Sophie Neveu sort through the bizarre riddles, they are stunned " << endl
                     << "to  discover a trail of clues hidden in the works of Leonardo da" << endl
                     << "Vinci clues visible for all to see and yet ingeniously disguised " << endl
                     << "by the painter." << endl;
            }
                break;

            case 4:
            {
                // Clear the screen
                clearScreen();
                // Display Selection
                cout << endl << " " << mysteryBookInfo[0] << endl << endl;
                // Diplay Description
                cout << "\tIn the spring of 1998, Kouichi " << endl
                     << "Sakakibara transfers to Yomiyama North Middle School." << endl
                     << "In class, he develops a sense of unease as he notices that " << endl
                     << "the people around him act like they're walking on eggshells," << endl
                     << "and students and teachers alike seem frightened." << endl
                     << "As a chain of horrific deaths begin to unfold around him," << endl
                     << "he comes to discover that he has been placed in the cursed Class 3" << endl
                     << "in which the student body head count is always one more than expected." << endl
                     << "Class 3 is haunted by a vengeful spirit responsible for gruesome deaths " << endl
                     << "in an effort to satisfy its spite. To stop the vicious cycle gripping " << endl
                     << "his new school, Kouichi decides to get to the bottom of the curse," << endl
                     << "but is he prepared for the horror that lies ahead...?" << endl;
            }
                break;
            default:
            {
                cout << " Invalid answer. Please try again." << endl;
            }
                break;
        }
        cout << endl << "Would you like to return to the Mystery menu? (Y/N)" << endl;

        // Receive user input into repeat_mysterymenu
        cin >> repeat_mysterymenu;
        // Error check repeat_mysterymenu
        repeat_mysterymenu = errorCheckYorN(repeat_mysterymenu);

    } while (repeat_mysterymenu == 'Y' || repeat_mysterymenu == 'y'); // End do while loop
}
