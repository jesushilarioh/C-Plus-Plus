#include <iostream>
using namespace std;
int main()
{
    // 9.13 Assume ip is a pointer to an int. Write a statement 
    //  that will dynamically allocate an integer variable and 
    //  store its address in ip. Write a statement that will 
    //  free the memory allocated in the statement you wrote above.
    int *ip = nullptr;
    ip = new int;


    *ip = 86;

    cout << "ip = " << ip << endl;
    cout << "ip = " << *ip << endl;

    *ip = 901;

    cout << "ip = " << ip << endl;
    cout << "ip = " << *ip << endl;

    *ip = 10099;

    cout << "ip = " << ip << endl;
    cout << "ip = " << *ip << endl;

    delete ip;
    ip = nullptr;

    cout << "ip = " << ip << endl;
    cout << "ip = " << *ip << endl;

    return 0;
}