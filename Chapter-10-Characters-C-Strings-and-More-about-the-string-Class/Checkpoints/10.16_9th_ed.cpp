#include <iostream>
using namespace std;

void mess(char[]);

int main()
{
    char stuff[] = "Tom Talbert Tried Trains";

    cout << stuff << endl;  // Tom Talbert Tried Trains
    mess(stuff);
    cout << stuff << endl;  // Dom Dalbert Dried Drains

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