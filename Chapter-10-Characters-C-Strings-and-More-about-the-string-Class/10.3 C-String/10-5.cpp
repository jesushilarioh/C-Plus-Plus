#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 80;
    char line[SIZE];
    int count = 0;

    cout << "Enter a sentence of no more than "
         << (SIZE - 1) << " characters:\n";
    cin.getline(line, SIZE);

    cout << "The sentence you entered is:\n";
    while (line[count] != '\0')
    {
        cout << line[count];
        count++;
    }
    
    return 0;
}