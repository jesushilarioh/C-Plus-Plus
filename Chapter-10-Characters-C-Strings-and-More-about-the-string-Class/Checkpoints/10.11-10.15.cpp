/**
 * 10.11 Write a short description of 
 *   each of the following functions:
 * 
 * atoi = converts a C-string to an integer and returns that value.
 * atol = converts a C-string to a long integer and returns that value.
 * atof = converts a C-string to a double and returns that value.
 * itoa = converts an integer to a C-string and returns that value.
 * stoi = returns a string argument converted to an int
 * stol = returns a string argument converted to a long
 * stof = returns a string argument converted to a float
 * stod = returns a string argument converted to a double
 **/ 
#include <iostream>
#include <string>   // stoi(), stol(), stod(), to_string()
using namespace std;
int main()
{
    // 10.12 Write a statement that will convert the string "10"
    // to an integer and store the result in the variable num.
    string string_number = "10";
    int num = stoi(string_number);
    cout << "string_number = " << string_number << endl;
    cout << "num           = " << num << endl;

    // 10.13 Write a statement that will convert the string "100000"
    // to a long and store the result in the variable num.
    string_number = "100000";
    num = stol(string_number);
    cout << "string_number = " << string_number << endl;
    cout << "num           = " << num << endl;

    // 10.14 Write a statement that will convert the string "7.2389"
    // to a double and store the result in the variable num.
    string_number = "7.2389";
    double num_double = stod(string_number);
    cout << "string_number = " << string_number << endl;
    cout << "num_double    = " << num_double << endl;

    // 10.15 Write a statement that will convert the integer 127
    // to a string, and assign the result to a string object
    // named str.
    num = 127;
    string_number = to_string(num);
    cout << "num           = " << num << endl;
    cout << "string_number = " << string_number << endl;
    
    return 0;
}