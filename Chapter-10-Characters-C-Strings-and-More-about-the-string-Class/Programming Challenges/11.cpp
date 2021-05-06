/**
 * Case Manipulator
 * 
 * Write a program with three functions: upper, lower, 
 * and reverse. The upper function should accept a 
 * pointer to a C-string as an argument. It should 
 * step through each char- acter in the string, converting 
 * it to uppercase. The lower function, too, should accept 
 * a pointer to a C-string as an argument. It should step 
 * through each character in the string, converting it to 
 * lowercase. Like upper and lower, reverse should also 
 * accept a pointer to a string. As it steps through the 
 * string, it should test each character to determine 
 * whether it is upper- or lowercase. If a character is 
 * uppercase, it should be converted to lowercase. Likewise, 
 * if a character is lowercase, it should be converted to 
 * uppercase.
 * 
 * Test the functions by asking for a string in function 
 * main, then passing it to them in the following order: 
 * reverse, lower, and upper.
 * 
 */
#include <iostream>
#include <cctype>   // toupper(), tolower(), isupper(), islower()
#include <cstring>  // strlen()

using namespace std;

void displayCString(const char *);
void upper(char *);
void lower(char *);
void reverse(char *);

int main()
{
    const int ARRAY_SIZE = 25;
    char c_string[ARRAY_SIZE] = "aJiEjFigt";

    cout << "Enter at string with no more that "
         << ARRAY_SIZE - 1
         << " characters: ";
    cin.getline(c_string, ARRAY_SIZE);

    // cout << "sizeof()    : " << sizeof(c_string) << endl;
    // cout << "strlen() + 1: " << strlen(c_string) + 1 << endl;

    cout << endl
         << "original: ";
    displayCString(c_string);
    cout << endl;

    reverse(c_string);
    
    cout << endl
         << "reverse : ";
    displayCString(c_string);
    cout << endl;
    
    upper(c_string);

    cout << endl
         << "upper   : ";
    displayCString(c_string);
    cout << endl;

    lower(c_string);
    
    cout << endl
         << "lower   : ";
    displayCString(c_string);
    cout << endl << endl;


    return 0;
}
// The upper function should accept a 
// pointer to a C-string as an argument. It should 
// step through each char- acter in the string, converting 
// it to uppercase.
void upper(char *c_string)
{
    while(*c_string != '\0')
    {
        *c_string = toupper(*c_string);
        c_string++;
    }
        
}
// The lower function, too, should accept 
// a pointer to a C-string as an argument. It should step 
// through each character in the string, converting it to 
// lowercase.
void lower(char *c_string)
{
    while (*c_string != '\0')
    {
        *c_string = tolower(*c_string);
        c_string++;
    }
}
// reverse should also 
// accept a pointer to a string. As it steps through the 
// string, it should test each character to determine 
// whether it is upper- or lowercase. If a character is 
// uppercase, it should be converted to lowercase. Likewise, 
// if a character is lowercase, it should be converted to 
// uppercase.
void reverse(char *c_string)
{
    while(*c_string != '\0')
    {
        if (islower(*c_string))
            *c_string = toupper(*c_string);
        else if (isupper(*c_string))
            *c_string = tolower(*c_string);

        c_string++;
    }
}
void displayCString(const char *c_string)
{
    while(*c_string != '\0')
    {
        cout << *c_string;
        c_string++;
    }
}