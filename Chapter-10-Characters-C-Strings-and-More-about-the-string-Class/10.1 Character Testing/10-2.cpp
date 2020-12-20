// This program tests a customer number to determine whether 
// it is in the proper format
#include <iostream>
#include <cctype>
using namespace std;

// Function prototype
bool testNum(char[], int);

int main()
{
    const int SIZE = 8;
    char customer[SIZE];

    // Get the customer number.
    cout << "Enter a customer number in the form ";
    cout << "LLLNNNN\n";
    cout << "(LLL = letters and NNNN = number): ";
    cin.getline(customer, SIZE);
    
    // Determine whether it is valid.
    if (testNum(customer, SIZE))
        cout << "That's a valid customer number.\n";
    else
    {
        cout << "That is not the proper format of the "
             << "customer number.\nHere is an example:\n"
             << "    ABC1234\n";
    }
    return 0;
}
bool testNum(char custNum[], int size)
{
    int count;

    for (count = 0; count < 3; count++)
    {
        if (!isalpha(custNum[count]))
            return false;
    }

    for (count = 3; count < size - 1; count++)
    {
        if (!isdigit(custNum[count]))
            return false;
    }
    
    return true;
}