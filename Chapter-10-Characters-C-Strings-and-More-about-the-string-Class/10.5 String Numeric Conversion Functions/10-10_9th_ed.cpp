#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string input;
    int total = 0;
    int count = 0;
    double average;

    cout << "This program will average a series of numbers.\n"
         << "Enter the first number of Q to quit: ";
    getline(cin, input);

    while (tolower(input[0]) != 'q')
    {
        total += stoi(input);
        count++;

        cout << "Enter the next number or Q to quit: ";
        getline(cin, input);
    }

    if (count != 0)
    {
        average = static_cast<double>(total) / count;
        cout << "Average: " << average << endl;
    }

    return 0;
}