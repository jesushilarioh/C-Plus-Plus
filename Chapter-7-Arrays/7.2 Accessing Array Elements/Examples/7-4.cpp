// This program write the contents of an array to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int count;
    ofstream outputFile;

    for (count = 0; count < ARRAY_SIZE; count++)
        numbers[count] = count;

    outputFile.open("SavedNumbers.txt");

    for (count = 0; count < ARRAY_SIZE; count++)
        outputFile << numbers[count] << endl;

    outputFile.close();

    cout << "The numbers were saved to the file.\n";

    return 0;
}
