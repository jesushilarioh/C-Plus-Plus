#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 100;
    int numbers[SIZE];
    int count = 0;
    int num;

    cout << "Enter a number or -1 to quit: ";
    cin >> num;

    while(num != -1 && count <SIZE)
    {
        count++;
        numbers[count - 1] = num;
        cout << "Enter a number of -1 to quit: ";
        cin >> num;
    }

    for (auto val : numbers)
        cout << val << endl;
        
    return 0;
}