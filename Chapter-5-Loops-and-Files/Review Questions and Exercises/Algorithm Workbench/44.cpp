/********************************************************************
*
*	  44. Write code that does the following: Opens an output file
*         with the filename Numbers.txt, uses a loop to write the
*         numbers 1 through 100 to the file, and then closes the file.
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
    // Define file stream object for outputting data
    ofstream output_file;

    // Open file "Numbers.txt" through file stream object (output_file)
    output_file.open("Numbers.txt");

    // (for loop), count controlled loop, pretest loop (1 - 100)
    for (int i = 1; i <= 100; i++)
    {
        output_file << i << endl;
    }

    // Close file "Numbers.txt" through file stream object (output_file)
    output_file.close();

    // Terminate program
    return 0;
}
