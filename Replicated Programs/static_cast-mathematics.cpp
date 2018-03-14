//This program uses static_cast expressions
// with mathematical expressions

//JESUS HILARIO HERNANDEZ

//Last modified: 9/27/2016

#include <iostream>       //for input output

using namespace std;

int main()
{
    int a = 5, b = 12;
    double x = 3.4, z = 9.1;


    cout << b / a << endl;
    cout << x * a << endl;
    cout << static_cast<double>(b / a) << endl;
    cout << static_cast<double>(b) / a << endl;
    cout << b / static_cast<double>(a) << endl;
    cout << static_cast<double>(b) / static_cast<double>(a) << endl;
    cout << b / static_cast<int>(x)<< endl;
    cout << static_cast<int>(x) * static_cast<int>(z) << endl;
    cout << static_cast<int>(x * z)<< endl;
    cout << static_cast<double>(static_cast<int>(x) * static_cast<int>(z))<< endl;

    return 0;
}
