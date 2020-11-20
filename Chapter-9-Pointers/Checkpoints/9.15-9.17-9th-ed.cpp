#include <iostream>
using namespace std;
// 9.15 What is a null pointer?
// ANSWER: a null pointer is a pointer that has an address of 0

// 9.16 returns correctly
int *returnPtr1(int *);

// 9.17 return incorrectly
int *returnPtr2(int *);

int main()
{
    int *ptr = nullptr;
    int number = 100;

    cout << "\nptr = " << ptr << endl;
    ptr = returnPtr1(&number);
    cout << "ptr = " << ptr << endl;
    ptr = returnPtr2(&number);
    cout << "ptr = " << ptr << endl;

    ptr = nullptr;
    cout << "ptr = " << ptr << endl;

    return 0;
}
// 9.16 returns correctly
int *returnPtr1(int *number)
{
    return number;
}
// 9.17 returns incorrectly
int *returnPtr2(int *number)
{
    return number;
}