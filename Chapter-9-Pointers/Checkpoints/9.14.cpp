#include <iostream>
using namespace std;
int main()
{
    /**
     * 9.14 Assume ip is a pointer to an int. Then, write a 
     * statement that will dynamically allocate an array of 
     * 500 integers and store its address in ip. Write a 
     * statement that will free the memory allocated in the 
     * statement you just wrote.
     */

    int *ip = nullptr;

    ip = new int[500];

    delete [] ip;

    ip = nullptr;

    return 0;
}