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

int countNumberOfChars(char *);

int main()
{
    const int SIZE = 18;
    char user_string[SIZE];

    cout << "\nEnter a string with " << SIZE - 1 << " characters: ";
    cin >> user_string;

    // passes it to the function, 
    int number_of_characters = countNumberOfChars(user_string);

    // and 
    //  then displays the function’s return value.
    cout << "user_sting has " << number_of_characters << " characters." << endl;
    cout << endl;

    return 0;
}

int countNumberOfChars(char *c_string)
{
    int count = 0;

    // while (*(c_string + count) != '\0')
    //     count++;
    while(c_string[count] != '\0')
        count++;

    return count;
}