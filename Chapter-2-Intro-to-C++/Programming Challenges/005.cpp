#include <iostream>
using namespace std;

int main()
{
    const int FIVE = 5;
    int a = 28,
        b = 32,
        c = 37,
        d = 24,
        e = 33,
        sum = a + b + c + d + e,
        average = sum / FIVE;

    cout << endl;
    cout << "The average is " << average;
    cout << endl << endl;
    return 0;
}