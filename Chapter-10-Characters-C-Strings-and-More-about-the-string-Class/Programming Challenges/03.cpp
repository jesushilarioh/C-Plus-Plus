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

int numberOfWords(const char *);

int main()
{
    const int SIZE = 80;
    char user_input[SIZE];

    cout << "\nEnter a sentence: ";
    cin.getline(user_input, SIZE);

    cout << "Your sentence has " << numberOfWords(user_input) 
         << " words.\n" 
         << endl;

    return 0;
}

int numberOfWords(const char *c_string)
{
    int count = 0;

    while (*c_string != '\0')
    {
        if (*c_string == ' ')
            count++;

        c_string++;
    }
    

    return (count + 1);
}
kosdlkflkdjflalsldkfjldkffjejfiejfreturn kdfkljint maind(0 dslfkfjeoiwef;lef)