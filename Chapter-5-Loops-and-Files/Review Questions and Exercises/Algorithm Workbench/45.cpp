/********************************************************************
*
*	  45. Write code that does the following: Opens the Numbers.txt
*         file that was created by the code you wrote in question 44,
*         reads all of the numbers from the file and displays them,
*         and then closes the file.
*
* 	Jesus Hilario Hernandez
* 	March 10th 2018
*
********************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // Create file stream object (input_file)
    ifstream input_file;

    // Open "Numbers.txt" through file stream object (input_file)
    input_file.open("Numbers.txt");

    // Process information in "Numbers.txt", through file
    // stream object (input_file), with a pretest, condition controlled,
    // (while loop).
    int i;
    while (input_file >> i)
    {
        cout << i << endl;
    }

    // Close "Numbers.txt" file through file stream object (input_file)
    // with .close() function.
    input_file.close();

    // Terminate program
    return 0;
}
