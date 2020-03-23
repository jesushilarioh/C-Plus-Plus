/************************************************************
 *
 *   17. Name Search
 * 
 *  If you have downloaded this book’s source code from the 
 *  companion Web site, you will find the following files in 
 *  this chapter’s folder:
 *  
 *  • GirlNames.txt—This file contains a list of the 200 
 *      most popular names given to girls born in the United 
 *      States from 2000 to 2009.
 * 
 *  • BoyNames.txt—This file contains a list of the 200 most 
 *      popular names given to boys born in the United States 
 *      from 2000 to 2009.
 * 
 *  Write a program that reads the contents of the two files 
 *  into two separate arrays or vectors. The user should be 
 *  able to enter a boy’s name, a girl’s name, or both, and 
 *  the application should display messages indicating whether 
 *  the names were among the most popular.
 *
 *************************************************************/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void readFileContentsIntoVector(vector<string> &, string);
void showMenu();
bool checkIfValueInVector(vector<string>, string);
void displayIfAmongMostPopular(vector<string>, string);
int inputValidate(int);

int main()
{
    vector<string> boy_names;
    vector<string> girl_names;
    // 1. reads the contents of the two files 
    //      into two separate arrays or vectors.
    readFileContentsIntoVector(boy_names, "BoyNames.txt");
    readFileContentsIntoVector(girl_names, "GirlNames.txt");

    // if(boy_names.empty())
    //     cout << "Vector empty. " << endl;
    // else
    //     cout << "Vector not empty. " << endl;
    
    // 2. The user should be able to enter a boy’s name, 
    //      a girl’s name, or both, and the application 
    //      should display messages indicating whether 
    //      the names were among the most popular.
    const int BOYS_NAME_CHOICE = 1,
              GIRLS_NAME_CHOICE = 2, 
              BOYS_AND_GIRLS_NAME_CHOICE = 3,
              QUIT_PROGRAM_CHOICE = 4;

    int user_menu_choice;

    string users_boy_name, users_girl_name;

    do
    {
        showMenu();

        user_menu_choice = inputValidate(user_menu_choice);

        cout << endl;

        if(user_menu_choice == BOYS_NAME_CHOICE)
        {
            cout << "Enter a boy's name: ";
            cin >> users_boy_name;

            displayIfAmongMostPopular(boy_names, users_boy_name);

        }
        else if(user_menu_choice == GIRLS_NAME_CHOICE)
        {
            cout << "Enter a girl's name: ";
            cin >> users_girl_name;

            displayIfAmongMostPopular(girl_names, users_girl_name);

        }
        else if (user_menu_choice == BOYS_AND_GIRLS_NAME_CHOICE)
        {
            cout << "First, enter a boy's name: ";
            cin >> users_boy_name;

            displayIfAmongMostPopular(boy_names, users_boy_name);

            cout << "Next, enter a girl's name: ";
            cin >> users_girl_name;

            displayIfAmongMostPopular(girl_names, users_girl_name);
        }
        cout << endl;

    } while(user_menu_choice != QUIT_PROGRAM_CHOICE);


    return 0;
}

int inputValidate(int number)
{
    while (!(cin >> number) || (number < 1 || number > 4))
    {
        cout << "Error. Enter an number 1 thru 4: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
    
}

void readFileContentsIntoVector(vector<string> &vector, string file_name)
{
    ifstream inputFile;

    inputFile.open(file_name);

    if (inputFile.fail())
    {
        cout << "Error opening file." << endl; 
        exit(EXIT_SUCCESS);
    }
    else
    {
        string content;

        while (inputFile >> content)
            vector.push_back(content);
                
        inputFile.close();

    }
    
}

void showMenu()
{
    cout 
         << "Would you like to enter a boy's name, a girl's name, or both?\n" << endl
         << "Press 1 for a boy's name." << endl
         << "Press 2 for a girl's name." << endl
         << "Press 3 for both a boy's name and a girl's name." << endl
         << "Press 4 to quit program." 
         << 
            endl;

}

bool checkIfValueInVector(vector<string> vector, string value)
{
    bool value_exists = false;
    for(int i = 0; i < vector.size(); i++)
    {
        if (value == vector[i])
            value_exists = true;

    }
    return value_exists;
}

void displayIfAmongMostPopular(vector<string> vector, string name)
{
    cout << endl
         << name 
         << (checkIfValueInVector(vector, name) ? " IS" : " IS NOT")
         << " among the most popular names." 
         << endl;
}