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

        cin >> repeat_romancemenu;
    }
    while (repeat_romancemenu == 'Y' || repeat_romancemenu == 'y');
}
