// This program reads data from a file into an array.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 100;
    int numbers[ARRAY_SIZE];
    int count = 0;
    ifstream inputFile;

    inputFile.open("numbers.txt");

    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count ++;

    inputFile.close();

    cout << "The numbers are: ";
    for (int index = 0; index < count; index++)
        cout << numbers[index] << "\n";
    cout << endl;

    return 0;
}