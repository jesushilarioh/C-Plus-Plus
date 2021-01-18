#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    // 10.2
    char big = 'Z',
         little = tolower(big);

    cout << "Big    = " << big    << endl
         << "Little = " << little << endl;

    // 10.3
    char ch = 'y';

    if (isdigit(ch))
        cout << "Digit." << endl;
    else
        cout << "Not a digit." << endl;

    // 10.4
    cout << toupper(tolower('A')) << endl; // 65

    // 10.5
    char repeat;
    do
    {
        cout << "Do you want to repeat the program or quit? (R/Q)" << endl;
        cin >> repeat;

        while(toupper(repeat) != 'R' && toupper(repeat) != 'Q')
        {
            cout << "Please enter R or Q: ";
            cin >> repeat;
        }
    } while (toupper(repeat) == 'R');
    

    return 0;
}