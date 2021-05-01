/**
 * 
 * 12. Password Verifier
 * 
 * Imagine you are developing a software package that 
 * requires users to enter their own passwords. Your 
 * software requires that users’ passwords meet the 
 * following criteria:
 * 
 * • The password should be at least six characters long.
 * • The password should contain at least one uppercase 
 *      and at least one lowercase letter.
 * • The password should have at least one digit.
 * 
 * Write a program that asks for a password and then verifies 
 * that it meets the stated criteria. If it doesn’t, the 
 * program should display a message telling the user why.
 * 
 */
#include <iostream>
#include <string>
using namespace std;

bool validatePassword(const string);

int main()
{
    string user_password;
    cout << "Enter a password (must be at least 6" << endl
         << "characters long, and contain 1 uppercase" << endl
         << "letter, 1 lowercase letter, and have at" << endl
         << "least one digit): ";
    getline(cin, user_password);

    while(!validatePassword(user_password))
    {
        cout << "Invalid password. Please try again: ";
        getline(cin, user_password);
    }
    
    return 0;
}
bool validatePassword(const string user_password)
{
    string message = "";
    bool upper  = false,
         lower  = false,
         number = false,
         length = false,
         valid  = false;

    if (user_password.length() < 6)
        length = false;
    else
        length = true;

    for (int i = 0; i < user_password.length(); i++)
    {
        if (isupper(user_password[i]))
            upper = true;
        if (islower(user_password[i]))
            lower = true;
        if (isdigit(user_password[i]))
            number = true;
    }

    if  (!length || !upper || !lower || !number)
    {
        if (user_password.length() < 6)
            message += "password must be at least 6 charaters\n";
        if (upper == false)
            message += "password must contain at least 1 uppercase letter\n";
        if (lower == false)
            message += "password must contain at least 1 lowercase letter\n";
        if (number == false)
            message += "password must contain at least 1 number letter\n";
        cout << message << endl;

        return false;
    }
    
    cout << "\nPassword valid.\nProgram ended.\n" << endl;
    return true;
}