#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int menu_choice;        //declare variables
char repeat_menu;

void Mystery();
void MysteryDes();
void Romance();
void RomanceDes();       //function prototypes
void Adventure();


int main()
{

        cout << "This program allows you to find a book you would like to read\n" <<
        cout << "based on which genre you would prefer to read." << endl;

        do
        {

        cout << "\nChoose a genre from the list below\n" << endl;

        cout << "\n1. Sheet Music " << endl;
        cout << "\n2. Romance" << endl;
        cout << "\n3. Adventure" << endl;
        cout << "\n4. Mystery" << endl << endl;

        cin >> menu_choice;
        cout << endl;

        switch (menu_choice)
            {

            case 1:
                {

                }
                break;

            case 2:
                {

            cout << "You have chosen Romance as your genre." << endl << endl;
            Romance();

                }
            break;

            case 3:
                {

                }
                break;

            case 4:
                {

            cout << "You have chosen Romance as your genre." << endl << endl;
            Mystery();

                }
            break;

            default:
                {
                    cout << "Invalid answer. Please try again." << endl;
                }
            break;

            }

            cout << endl << "Would you like to return to the main menu? (Y/N)" << endl;

            cin >> repeat_menu;

        } while (repeat_menu == 'Y' || repeat_menu == 'y');

        cout << "Have a nice day!" << endl;
return 0;
}

void Romance()
{
    int SIZE = 1024;
    int position = 0;
    char * array = new char [SIZE];

    ifstream file("RomanceBooks.txt");


    if(file.is_open())
    {
        cout << "File opened" << endl << endl;
        cout << "Author              Title        Date" << endl;

        while (!file.eof() && position < SIZE)
        {
            file.get(array[position]);
            position++;
        }
        array [position-1] = '\0';

        for (int i = 0; array[i] != '\0'; i++)
        {

            cout << array[i];

        }

    }
    else
    {
    cout << "File could not be opened." << endl;
    }
file.close();

RomanceDes();
}



void RomanceDes()
{
    char repeat_romancemenu;
    int menu_romancechoice;
     do
        {
            cout << endl << "Chose a book to read the description" << endl << endl;

            cin >> menu_romancechoice;
            cout << endl;

            switch(menu_romancechoice)
            {
            case 1:
                {
                cout << "Would you risk it all to change your destiny?" << endl << endl;

                cout << "The last thing Kelsey Hayes thought she'd be doing" << endl
                << "this summer was trying to" << endl
                << "break a 300-year old Indian curse." << endl
                << "With a mysterious white tiger named Ren." << endl
                << "Halfway around the world." << endl
                << "But that's exactly what happened." << endl << endl;

                cout << "Face-to-face with dark forces, spellbinding magic,"<< endl
                << "and mystical worlds where nothing is what it seems," << endl
                << "Kelsey risks everything to piece together an ancient prophecy" << endl
                << "that could break the curse forever." << endl
                << "Packed with magic, action-adventure, and romance," << endl
                << "the epic Tiger's Curse series will keep you breathless" << endl
                << "and yearning for more." << endl;

                }
                break;
            case 2:
                {
                cout << "Back in Oregon, Kelsey tries to pick up the pieces of her life" << endl
                << "and push aside her feelings for Ren." << endl
                << "Kelsey Hayes's eighteenth summer was crazy." << endl
                << "The kind of crazy nobody would ever believe." << endl;

                cout << "Aside From battling immortal sea monkeys and" << endl
                << "trekking the jungles of India, she fell in love with Ren," << endl
                << "a 300-year-old prince." << endl;

                cout << "When danger suddenly forces Kelsey on another Indian quest," << endl
                << "with Ren's bad-boy brother, Kishan," << endl
                << "the unlikely duo begins to question their true destiny." << endl
                << "Ren's life hangs in the balance--so does the truth within Kelsey's heart." << endl;

                }
                break;
            case 3:
                {
                cout << "Galen, a Syrena prince, searches land for a girl he's heard can communicate with fish." << endl
                << "It's while Emma is on vacation at the beach that she meets Galen." << endl
                << "Although their connection is immediate and powerful," << endl
                << "Galen's not fully convinced that Emma's the one he's been looking for." << endl
                << "That is, until a deadly encounter with a shark proves that Emma" << endl
                << "and her Gift may be the only thing that can save his kingdom." << endl
                << "He needs her help�no matter what the risk." << endl;

                }
                break;
            case 4:
                {
                cout << "Emma has just learned that her mother is a long-lost Poseidon princess," << endl
                << "and now struggles with an identity crisis:" << endl
                << "As a Half-Breed, she's a freak in the human world and an abomination" <<endl
                << "in the Syrena realm. Syrena law states all Half-Breeds should be put to death." << endl;

                cout << "As if that's not bad enough, her mother's reappearance in the Syrena world" << endl
                << "turns the two kingdoms�Poseidon and Triton�against one another." << endl
                << "Which leaves Emma with a decision to make:" << endl
                << "Should she comply with Galen's request to keep herself safe and" << endl
                << "just hope for the best? Or should she risk it all and reveal herself�and" << endl
                << "her Gift�to save a people she's never known?" << endl;

                }
                break;
            default:
                {
                    cout << "Invalid answer. Please try again." << endl;
                }
                break;

            }
            cout << endl << "Would you like to return to the Romance menu? (Y/N)" << endl;

            cin >> repeat_romancemenu;
        }
            while (repeat_romancemenu == 'Y' || repeat_romancemenu == 'y');
}

void Mystery()
{
       int SIZE = 1024;
    int position = 0;
    char * array = new char [SIZE];

    ifstream file("MysteryBooksAshley.txt");


    if(file.is_open())
    {
        cout << "File opened" << endl << endl;
        cout << "Author              Title               Date" << endl;

        while (!file.eof() && position < SIZE)
        {
            file.get(array[position]);
            position++;
        }
        array [position-1] = '\0';

        for (int i = 0; array[i] != '\0'; i++)
        {

            cout << array[i];

        }

    }
    else
    {
    cout << "File could not be opened." << endl;
    }
file.close();

MysteryDes();
}

void MysteryDes()
{
    char repeat_mysterymenu;
    int menu_mysterychoice;
     do
        {
            cout << endl << "Chose a book to read the description" << endl << endl;

            cin >> menu_mysterychoice;
            cout << endl;

            switch(menu_mysterychoice)
            {
            case 1:
                {

                cout << "The classic and terrifying story of one of the most famous supernatural events" << endl
                << "--the infamous possessed house on Long Island from which" << endl
                << "the Lutz family fled in 1975." << endl;

                }
                break;
            case 2:
                {

                cout << "Harriet Vanger, a scion of one of Sweden's wealthiest families disappeared" << endl
                << "over forty years ago. All these years later, her aged uncle continues to seek the truth." << endl
                << "He hires Mikael Blomkvist, a crusading journalist recently trapped by a libel conviction," << endl
                << "to investigate. He is aided by the pierced and tattooed punk prodigy Lisbeth Salander." << endl
                << "Together they tap into a vein of unfathomable iniquity and astonishing corruption." << endl;

                }
                break;
            case 3:
                {
                cout << "An ingenious code hidden in the works of Leonardo da Vinci." << endl
                << "A desperate race through the cathedrals and castles of Europe." << endl
                << "An astonishing truth concealed for centuries . . . unveiled at last." << endl;

                cout << "While in Paris, Harvard symbologist Robert Langdon is awakened" << endl
                << "by a phone call in the dead of the night." << endl
                << "The elderly curator of the Louvre has been murdered inside the museum," << endl
                << "his body covered in baffling symbols." << endl
                << "As Langdon and gifted French cryptologist Sophie Neveu sort through the bizarre riddles," << endl
                << "they are stunned to discover a trail of clues hidden in the works of Leonardo da Vinci�clues" << endl
                << "visible for all to see and yet ingeniously disguised by the painter." << endl;

                }
                break;
            case 4:
                {

                cout << "In the spring of 1998, Kouichi Sakakibara transfers to Yomiyama North Middle School." << endl
                << "In class, he develops a sense of unease as he notices that the people around him act like they're walking on eggshells," << endl
                << "and students and teachers alike seem frightened." << endl
                << "As a chain of horrific deaths begin to unfold around him," << endl
                << "he comes to discover that he has been placed in the cursed Class 3" << endl
                << "in which the student body head count is always one more than expected." << endl
                << "Class 3 is haunted by a vengeful spirit responsible for gruesome deaths in an effort to satisfy its spite." << endl
                << "To stop the vicious cycle gripping his new school, Kouichi decides to get to the bottom of the curse," << endl
                << "but is he prepared for the horror that lies ahead...?" << endl;
                }
                break;
            default:
                {
                    cout << "Invalid answer. Please try again." << endl;
                }
                break;

            }
            cout << endl << "Would you like to return to the Mystery menu? (Y/N)" << endl;

            cin >> repeat_mysterymenu;
        }
            while (repeat_mysterymenu == 'Y' || repeat_mysterymenu == 'y');
}
