/**
 * 2. Backward String
 * Write a function that accepts a pointer 
 * to a C-string as an argument and displays 
 * its contents backward. For instance, if the 
 * string argument is “Gravity” the function should 
 * display “ytivarG”. Demonstrate the function in 
 * a program that asks the user to input a string 
 * and then passes it to the function.
 */
#include <iostream>
#include <cstring> // for strlen()
using namespace std;

void reverseContents(const char *);

int main()
{
    const int SIZE = 15;
    char user_string[SIZE];

    cout << "Enter a word of " 
         << (SIZE - 1)
         << " or less: ";
    cin.getline(user_string, SIZE);

    reverseContents(user_string);
    cout << endl;

    return 0;
}
void reverseContents(const char *c_string)
{
    const int SIZE = strlen(c_string);
    for (int i = SIZE; i >= 0; i--)
        cout << c_string[i];
}