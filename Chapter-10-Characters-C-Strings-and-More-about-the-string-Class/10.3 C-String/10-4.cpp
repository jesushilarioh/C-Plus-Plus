#include <iostream>
using namespace std;
int main()
{
    char again;

    do
    {
        cout << "C++ programming is great fun!" << endl
             << "Do you want to see the message again? ";
        cin >> again;
        
    } while (again == 'Y' || again == 'y');
    
    return 0;
}