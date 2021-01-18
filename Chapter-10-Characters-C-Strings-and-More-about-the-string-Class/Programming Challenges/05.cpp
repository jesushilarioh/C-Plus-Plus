/**
 * 5. Sentence Capitalizer
 * 
 * Write a function that accepts a pointer to a 
 * C-string as an argument and capitalizes the first 
 * character of each sentence in the string. For 
 * instance, if the string argument is “hello. my 
 * name is Joe. what is your name?” the function should 
 * manipulate the string so it contains “Hello. 
 * My name is Joe. What is your name?”
 * 
 * Demonstrate the function in a program that asks the 
 * user to input a string and then passes it to the 
 * function. The modified string should be displayed on 
 * the screen. Optional Exercise: Write an overloaded 
 * version of this function that accepts a string class 
 * object as its argument.
 */

/**
 * Write a function that accepts a pointer to a 
 * C-string as an argument and capitalizes the first 
 * character of each sentence in the string.
 */
#include <iostream>
#include <cctype>
using namespace std;

void cap1stLetterOfEachSentence(char []);

int main()
{
    char name[] = "Jesus is a. Grand person. Hello.";

    cap1stLetterOfEachSentence(name);

    return 0;
}

void cap1stLetterOfEachSentence(char c_string[])
{
    int count = 0;
    // char letter;

    while (c_string[count] != '\0')
    {
        if (c_string[count] == '.' && c_string[count + 1] == ' ')
        {
            // letter = toupper(*(c_string + count));
            cout << c_string[count] << endl;
        }
        count++;
    }
    
}