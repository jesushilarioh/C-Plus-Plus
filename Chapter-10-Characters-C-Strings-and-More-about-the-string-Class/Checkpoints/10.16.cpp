/**
 * 10.16 What is the output of the following program?
 */
#include <iostream>
using namespace std;

void mess(char[]);

int main()
{
    char stuff[] = "Tom Talbert Tried Trains";
    cout << stuff << endl;
    mess(stuff);
    cout << stuff << endl;

    return 0;
}

void mess(char str[])
{
    int step = 0;

    while (str[step] != '\0')
    {
        if (str[step] == 'T')
            str[step] = 'D';
        step++;
    }
}