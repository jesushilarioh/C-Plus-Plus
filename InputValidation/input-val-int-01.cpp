#include <iostream>
using namespace std;
int main()
{
    // Variable
    int num;

    // Ask user to enter a number
    cout << "Enter a number: ";

    // Receive user input
    while(!(cin >> num))
    {
        // Explain the error
        cout << "Error: enter a number: ";
        // Clear the previous input
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }

    // Display user input
    cout << "Your number is: " << num << endl;
    return 0;
}
