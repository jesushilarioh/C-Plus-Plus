/**
 * 
 * 9. Most Frequent Character
 * 
 * Write a function that accepts either a 
 * pointer to a C-string, or a string object, 
 * as its argument. The function should return 
 * the character that appears most frequently in 
 * the string. Demonstrate the function in a 
 * complete program.
 * 
 */
#include <iostream>
#include <string>

using namespace std;

string mostFrequentCharacter(string);

int main()
{
    string user_string;

    cout << "Enter a string: ";
    getline(cin, user_string);

    string most_used_char = mostFrequentCharacter(user_string);

    cout << endl;
    if (most_used_char == "none")
        cout << "No characters repeat themselves." << endl;
    else
        cout << most_used_char << " is the most used character." << endl;
    cout << endl;

    return 0;
} 

string mostFrequentCharacter(string user_string)
{
    string most_frequent;
    int max_count = 0;
    int count;

    for (int i = 0; i < user_string.length(); i++)
    {
        count = 0;

        for(int j = 0; j < user_string.length(); j++)
        {
            if (toupper(user_string[j]) == toupper(user_string[i]))
                count++;

            if (count > max_count)
            {
                max_count = count;
                most_frequent = user_string[i];
            }
            else if (max_count == 1)
            {
                most_frequent = "none";
            }

        }

    }

    return most_frequent;
}