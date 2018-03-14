/********************************************************************
*
*	  46. Modify the code that you wrote in question 45 so it adds
*         all of the numbers read from the file and displays their
*         total.
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
    // Define input stream object
    ifstream input_file;
    // Variables
    int number,     // number from file "Numbers.txt"
        total = 0;  // total of all numbers in "Numbers.txt"

    // Open "Numbers.txt" through input file stream object (input_file)
    input_file.open("Numbers.txt");

    // Process file using a while loop
    while (input_file >> number)
        total += number;

    // Display total
    cout << "\nTotal = " << total << '\n' << endl;

    // Close "Numbers.txt" file with .close() function
    input_file.close();

    // Terminate program
    return 0;
}
