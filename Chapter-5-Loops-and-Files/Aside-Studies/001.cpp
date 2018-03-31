#include <iostream>
using namespace std;

void loop(int x, int y)
{
    for (int i = x; i < y; i++)
    {
        cout << i << endl;
    }
    cout << endl;
}

int main() {

    loop(1, 2);

    loop(2, 5);

    loop(5, 6);

    loop(6, 8);

    loop(8, 11);

    return 0;
}
