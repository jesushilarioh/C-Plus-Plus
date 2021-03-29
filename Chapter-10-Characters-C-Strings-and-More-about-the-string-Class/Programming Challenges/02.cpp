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
using namespace std;

void reverseArray(const char *);

int main()
{
    const int SIZE = 8;
    char c_string[SIZE] = "Gravity";
    int count = 0;

    cout << endl;
    while (c_string[count] != '\0')
    {
        cout << c_string[count];
        count++;
    }


    cout << endl;
    reverseArray(c_string);
    cout << endl << endl;

    return 0;
}

void reverseArray(const char *c_string)
{
    for (int i = strlen(c_string); i >= 0; i--)
        cout << *(c_string + i);
}
