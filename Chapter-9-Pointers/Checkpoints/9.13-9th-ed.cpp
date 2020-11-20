#include <iostream>
using namespace std;
int main()
{
    int *ip = nullptr;
    ip = new int;

    int number = 89;

    cout << "ip = " << ip << endl;
    ip = &number;
    cout << "ip = " << ip << endl;
    cout << "number = " << number << endl;
    cout << "number @ ip = " << *ip << endl;

    delete ip;
    ip = nullptr;
    
    cout << "ip = " << ip << endl;

    return 0;
}