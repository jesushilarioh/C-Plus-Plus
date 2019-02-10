#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int count = 0;
    ifstream inputFile;

    inputFile.open("numbers.txt");

    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    inputFile.close();

    cout << "The numbers are: ";
    for (count = 0; count < ARRAY_SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;

    return 0;
}