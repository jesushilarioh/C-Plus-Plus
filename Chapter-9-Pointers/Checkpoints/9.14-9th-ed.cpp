#include <iostream>
using namespace std;
int main()
{
    int *ip = nullptr; // Or NULL if earlier than C++11
    cout << "value in ip = " 
         << ip
         << endl;
    ip = new int;

    cout << "value in ip = " 
         << *ip 
         << " at address "
         << ip
         << endl;
    *ip = 500;
    cout << "value in ip = " 
         << *ip 
         << " at address "
         << ip
         << endl;

    delete ip;
    ip = nullptr;

    return 0;
}