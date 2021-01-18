/**
 * 3. Word Counter
 * 
 * Write a function that accepts a pointer to 
 * a C-string as an argument and returns the number 
 * of words contained in the string. For instance, 
 * if the string argument is “Four score and seven 
 * years ago” the function should return the number 
 * 6. Demonstrate the function in a program that 
 * asks the user to input a string and then passes 
 * it to the function. The number of words in the 
 * string should be displayed on the screen. 
 * Optional Exercise: Write an overloaded version of this 
 * function that accepts a string class object as its 
 * argument.
 * 
 */
#include <iostream>
using namespace std;

int numbersOfWords(const char *);

int main()
{
    const int SIZE = 100;
    char user_input[SIZE];

    cout << "Enter a string no longer that "
         << SIZE - 1
         << " characters: ";
    cin.getline(user_input, SIZE);

    int number_of_words = numbersOfWords(user_input);

    cout << "There are " 
         << number_of_words
         << " words in user_input: "
         << endl;

    return 0;
}
int numbersOfWords(const char *c_string)
{
    int number_of_words = 0,
        length = 0;
    
    while(*c_string != '\0') // while(*c_string)
    {
        if(*c_string == ' ')
            length = 0;
        else if (++length == 1)
            number_of_words++;

        c_string++;
    }
    
    return number_of_words;
}