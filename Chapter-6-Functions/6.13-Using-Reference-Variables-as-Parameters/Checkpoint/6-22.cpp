/************************************************************
*
*   6.22 What is the output of the following program?
*
* 	Jesus Hilario Hernandez
* 	November 30th 2018
*
*************************************************************/
#include <iostream>
using namespace std;

void test(int= 2, int = 4, int = 6);

int main()
{
    test();
    test(6);
    test(3, 9);
    test(1, 5, 7);

    return 0;
}

void test (int first, int second, int third)
{
    first += 3;
    second += 6;
    third += 9;
    cout << first << " " << second << " " << third << endl;
}

// OUTPUT:
// 5 10 15
// 9 10 15
// 6 15 15
// 4 11 16