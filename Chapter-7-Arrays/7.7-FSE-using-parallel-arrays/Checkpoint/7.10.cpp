// Given the following array definition:
// int values[] = {2, 6, 10, 14};
// What does each of the following display?
// A) cout << values[2];
// 10

// B) cout << ++values[0];
// 3

// C) cout << values[1]++;
// 6

// D) x = 2;
// cout << values[++x];
// 14

#include <iostream>
using namespace std;
int main()
{
    int values[] = {2, 6, 10, 14};

    cout << values[2] << endl;
    cout << ++values[0] << endl;
    cout << values[1]++ << endl;

    int x = 2;
    cout << values[++x] << endl;

    return 0;
}

