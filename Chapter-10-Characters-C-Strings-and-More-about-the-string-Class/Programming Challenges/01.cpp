/**
 * 1. String Length
 * Write a function that returns an integer and 
 * accepts a pointer to a C-string as an argument. 
 * The function should count the number of characters 
 * in the string and return that number. Demonstrate 
 * the function in a simple program that asks the user 
 * to input a string, passes it to the function, and 
 * then displays the function’s return value.
 */
#include <iostream>
using namespace std;

int characterCount(const char *);

int main()
{
    const int STRING_SIZE = 80;
    char user_input[STRING_SIZE];

    cout << "Enter a sentence of no more than "
         << (STRING_SIZE - 1)
         << " characters:"
         << endl;
    cin.getline(user_input, STRING_SIZE);

    int number_of_characters = characterCount(user_input);

    cout << "Your input contains "
         << number_of_characters
         << " number of characters."
         << endl;

    return 0;
}
int characterCount(const char *c_string)
{
    int count = 0;

    while (c_string[count] != '\0')
        count++;

    return count;
}