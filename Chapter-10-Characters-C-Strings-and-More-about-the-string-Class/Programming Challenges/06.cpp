/**
 * 6. Vowels and Consonants
 * 
 * Write a function that accepts a pointer to a C-string as its argument. 
 * The function should count the number of vowels appearing in the string 
 * and return that number.
 * Write another function that accepts a pointer to a C-string as its 
 * argument. This func- tion should count the number of consonants 
 * appearing in the string and return that number.
 * 
 * Demonstrate these two functions in a program that performs the following steps:
 * 
 * 1. The user is asked to enter a string.
 * 
 * 2. The program displays the following menu:
 *  A) Count the number of vowels in the string
 *  B) Count the number of consonants in the string
 *  C) Count both the vowels and consonants in the string 
 *  D) Enter another string
 *  E) Exit the program
 * 
 * 3. The program performs the operation selected by the user and repeats until 
 * the user selects E to exit the program.
 * 
 **/
#include <iostream>
using namespace std;

int numberOfVowels(char *);
int numberOfConsonants(char *);

int main()
{
    const int C_STRING_SIZE = 80;
    char user_menu_choice;
    char user_string[C_STRING_SIZE];
    string message = "";

    do
    {
        if (strlen(user_string) != 0)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        cout << "\nEnter a string with no more than " << (C_STRING_SIZE - 1) << " characters: ";
        cin.getline(user_string, C_STRING_SIZE);

        cout << "\nChoose an option: " << endl
             << "A) Count the number of vowels in the string" << endl
             << "B) Count the number of consonants in the string" << endl
             << "C) Count both of vowels and consonants in the string" << endl
             << "D) Enter another string" << endl
             << "E) Exit the program" << endl
             << endl;

        cin >> user_menu_choice;

        while (toupper(user_menu_choice) < 'A' || toupper(user_menu_choice) > 'E')
        {
            cout << "Error. Enter a letter between A and E: ";
            cin >> user_menu_choice; 
        }

        if (toupper(user_menu_choice) != 'E')
        {

            if (toupper(user_menu_choice) == 'A')
                cout << "The number of vowels = " << numberOfVowels(user_string) << endl;

            else if (toupper(user_menu_choice) == 'B')
                cout << "The number of consonants = " << numberOfConsonants(user_string) << endl;

            else if (toupper(user_menu_choice) == 'C')
            {
                cout << "The number of vowels = " << numberOfVowels(user_string) << endl;
                cout << "The number of consonants = " << numberOfConsonants(user_string) << endl;
            }

            else if (toupper(user_menu_choice) == 'D')
                continue;

        }

    } while (toupper(user_menu_choice) != 'E');
    
    return 0;
}
int numberOfVowels(char *user_c_string)
{
    int count = 0;
    while (*user_c_string != '\0')
    {
        if 
        (
            isalpha(*user_c_string) && 
            (
                toupper(*user_c_string) == 'A' || 
                toupper(*user_c_string) == 'E' || 
                toupper(*user_c_string) == 'I' || 
                toupper(*user_c_string) == 'O' || 
                toupper(*user_c_string) == 'U'
            )

        )
            count++;
            
        user_c_string++;
    }

    return count;
}
int numberOfConsonants(char *user_c_string)
{
    int count = 0;
    while (*user_c_string != '\0')
    {
        if 
        (
            isalpha(*user_c_string) &&
            (
                toupper(*user_c_string) != 'A' &&
                toupper(*user_c_string) != 'E' &&
                toupper(*user_c_string) != 'I' &&
                toupper(*user_c_string) != 'O' &&
                toupper(*user_c_string) != 'U'
            )
        )
            count++;

        user_c_string++;
    }

    return count;
}
