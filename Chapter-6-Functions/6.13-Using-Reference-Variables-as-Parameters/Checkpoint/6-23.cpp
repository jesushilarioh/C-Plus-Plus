/************************************************************
*
*   6.23 The following program asks the user to enter two 
*        numbers. What is the output of the program if the 
*        user enters 12 and 14?
*
* 	Jesus Hilario Hernandez
* 	November 30th 2018
*
*************************************************************/
#include <iostream>
using namespace std;

void func1(int &, int &);
void func2(int &, int &, int &);
void func3(int, int, int);

int main()
{
    int x = 0, 
        y = 0, 
        z = 0;
    
    cout << x << " " << y << " " << z << endl;
    func1(x, y);
    cout << x << " " << y << " " << z << endl;
    func2(x, y, z);
    cout << x << " " << y << " " << z << endl;
    func3(x, y, z);
    cout << x << " " << y << " " << z << endl;

    return 0;
}

void func1(int &a, int &b)
{
    cout << "enter two numbers: ";
    cin >> a >> b;
}

void func2(int &a, int &b, int &c)
{
    b++;
    c--;
    a = b + c;
}

void func3(int a, int b, int c)
{
    a = b - c;
}

// OUTPUT:
// 0 0 0
// enter two numbers: 12 14
// 12 14 0
// 14 15 -1
// 14 15 -1
