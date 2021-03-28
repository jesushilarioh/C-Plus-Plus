#include <iostream>
#include <string>

using namespace std;

int main()
{
    string greeting;
    // string name1 = "William Smith";
    // string name2("William Smith");
    // string name3(name2);
    // string name4(name3, 5);
    string name5('z', 3);
    // string name6(name4 + name5, 0, 7);

    cout << endl;
    // cout << "name1 = " << name1 << endl;
    // cout << "name2 = " << name2 << endl;
    // cout << "name3 = " << name3 << endl;
    // cout << "name4 = " << name4 << endl;
    cout << "name5 = " << name5 << endl;
    // cout << "name6 = " << name6 << endl;
    cout << endl;

    // greeting = "Hello ";
    // cout << greeting << name1 << endl;

    return 0;
}