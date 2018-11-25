/********************************************************************
*
*	6.3 What will the output of the following program be if the user 
*       enters 10?
*
* 	Jesus Hilario Hernandez
* 	February 28, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

void func1()
{
    cout << "Able was I\n";
}

void func2()
{
    cout << "I saw Elba\n";
}

int main()
{
    int input;
    cout << "Enter a number ";
    cin >> input;
    if (input < 10)
    {
        func1();
        func2();
    }
    else
    {
        func2();
        func1();
    }
    return 0;
}
/********************************************************************
*
*	Answer: The program will output:
*   
*   I saw Elba
*   Able was I
*
********************************************************************/