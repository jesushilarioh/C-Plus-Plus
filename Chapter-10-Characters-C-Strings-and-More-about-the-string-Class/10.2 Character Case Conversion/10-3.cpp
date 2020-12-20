#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double radius;
    char goAgain;

    cout << "This program calculates the area of a circle.\n";
    cout << fixed << setprecision(2);

    do
    {
        cout << "Enter the circle's radius: ";
        cin >> radius;
        cout << "The area is " << (PI * radius * radius);
        cout << endl;

        cout << "Calculate another? (Y or N) ";
        cin >> goAgain;

        while (toupper(goAgain) != 'Y' && toupper(goAgain) != 'N')
        {
            cout << "Please enter Y or N: ";
            cin >> goAgain;
        }

    } while (toupper(goAgain) == 'Y');
    
    return 0;
}