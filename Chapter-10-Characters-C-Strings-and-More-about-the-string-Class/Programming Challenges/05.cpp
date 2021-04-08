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
#include <iostream>
using namespace std;

void displayCString(char *);
void capitalizeFirstWordInSentences(char *);

int main()
{
    const int SIZE = 80;
    char user_c_string[SIZE];

    cout << "Enter a string: ";
    cin.getline(user_c_string, SIZE);

    cout << endl;
    displayCString(user_c_string);
    cout << endl;
    capitalizeFirstWordInSentences(user_c_string);
    cout << endl;
    displayCString(user_c_string);
    cout << endl 
         << endl;

    return 0;
}
void displayCString(char *c_string)
{
    while(*c_string != '\0')
    {
        cout << *c_string;
        c_string++;
    }
}
/**
 * Write a function that accepts a pointer to a 
 * C-string as an argument and capitalizes the first 
 * character of each sentence in the string.
 */
void capitalizeFirstWordInSentences(char *c_string)
{
    // while(*c_string != '\0')
    for (int i = 0; i < strlen(c_string); i++)
    {
        // if(i == 0)
            *(c_string + i) = toupper(*c_string + i);
            cout << *c_string;
            c_string++;
    }
    

}