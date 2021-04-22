/**
 * 7. Name Arranger
 * 
 *  Write a program that asks for the user’s first, 
 *  middle, and last names. The names should be stored 
 *  in three different character arrays. The program 
 *  should then store, in a fourth array, the name arranged 
 *  in the following manner: the last name followed by a 
 *  comma and a space, followed by the first name and a space, 
 *  followed by the middle name. For example, if the user 
 *  entered “Carol Lynn Smith”, it should store “Smith, Carol Lynn” 
 *  in the fourth array. Display the contents of the fourth array 
 *  on the screen.
 * 
 */
#include <iostream>
#include <cctype>

using namespace std;
int main()
{
    const int ARRAY_SIZE = 80;
    int max_chars;
    char full_name[ARRAY_SIZE],
         first_name[ARRAY_SIZE],
         middle_name[ARRAY_SIZE],
         last_name[ARRAY_SIZE],
         comma_and_space[] = ", ",
         space[] = " ";

    // asks for the user’s first, middle, and last names.
    // The names should be stored in three different character arrays.
    cout << "Enter first name: ";
    cin.getline(first_name, ARRAY_SIZE);
    max_chars = sizeof(first_name) - (strlen(first_name) + 1);
    strncat(first_name, space, max_chars);
    // first_name[strlen(first_name)] = ' ';

    cout << "Enter middle name: ";
    cin.getline(middle_name, ARRAY_SIZE);

    cout << "Enter last name: ";
    cin.getline(last_name, ARRAY_SIZE);

    /** 
     * The program should then store, in a fourth array, the name 
     * arranged in the following manner: the last name followed by 
     * a comma and a space, followed by the first name and a space, 
     * followed by the middle name.
     */ 
    
    max_chars = sizeof(full_name) - (strlen(full_name) + 1);
    strncat(full_name, last_name, max_chars);
    cout << "maxChars = " << max_chars << endl;

    max_chars = sizeof(full_name) - (strlen(full_name) + 1);
    strncat(full_name, comma_and_space, max_chars);
    cout << "maxChars = " << max_chars << endl;

    max_chars = sizeof(full_name) - (strlen(full_name) + 1);
    strncat(full_name, first_name, max_chars);
    cout << "maxChars = " << max_chars << endl;

    max_chars = sizeof(full_name) - (strlen(full_name) + 1);
    strncat(full_name, middle_name, max_chars);
    cout << "maxChars = " << max_chars << endl;


    cout << "full_name = " << full_name << endl;
    // cout << "first_name = " << first_name << endl;
    // cout << "middle_name = " << middle_name << endl;
    // cout << "last_name = " << last_name << endl;

    return 0;
}