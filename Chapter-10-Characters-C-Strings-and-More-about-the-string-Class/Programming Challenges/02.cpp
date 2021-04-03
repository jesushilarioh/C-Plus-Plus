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
void displayCString(const char *);
void getUserInfo(char *, const int);

int main()
{
    const int SIZE = 8;
    char user_c_string[SIZE];
    int count = 0;

    getUserInfo(user_c_string, SIZE);

    cout << endl;
    displayCString(user_c_string);
    cout << "\nsizeof() = " << sizeof(user_c_string);

    cout << endl;
    reverseArray(user_c_string);
    cout << endl << endl;

    return 0;
}
void getUserInfo(char *user_c_string, const int SIZE)
{
    cout << "\nEnter a string with no more than " << (SIZE - 1) << " characters: ";
    cin.getline(user_c_string, SIZE);
}

void reverseArray(const char *c_string)
{
    for (int i = strlen(c_string); i >= 0; i--)
        cout << *(c_string + i);
    cout << "\nsizeof() = " << sizeof(c_string);

}

void displayCString(const char *c_string)
{
    while(*c_string != '\0')
    {
        cout << *c_string;
        c_string++;
    }
}