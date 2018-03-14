//*********************************************************
// This program uses a type cast to avoid integer division.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 10, 2016
//*********************************************************
#include <iostream>
using namespace std;

int main()
{
    int books;              // Number of books to read
    int months;             // Number of months spent reading
    double perMonth;        // Average number of books per month

    cout << "How many books do you plan to read? ";
    // Error Checking
    while (!(cin >> books))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // clear input stream
        cin.clear();
        //discard previous input
        cin.ignore(123, '\n');
    }
    cout << "How many months will it take you to read them? ";
    // Error checking
    while (!(cin >> months))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // clear input stream
        cin.clear();
        //discard previous input
        cin.ignore(123, '\n');
    }
    perMonth = static_cast<double>(books) / months;
    cout << "That is " << perMonth << " books per month.\n";
    return 0;
}
