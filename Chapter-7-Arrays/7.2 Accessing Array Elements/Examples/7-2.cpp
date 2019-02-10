// This program asks for the number of hours worked
// by six employees. It stores the values in an array.
#include <iostream>
using namespace std;
int main()
{
    const int NUM_EMPLOYESS = 6;
    int hours[NUM_EMPLOYESS];
    int count;

    for( count = 0; count < NUM_EMPLOYESS; count++)
    {
        cout << "Enter the hours worked by employee "
             << (count + 1) << ": ";
        cin >> hours[count];
    }

    cout << "The hours you entered are: ";
    for( count = 0; count < NUM_EMPLOYESS; count++)
        cout << " " << hours[count];
    cout << endl;
    
    return 0;
}