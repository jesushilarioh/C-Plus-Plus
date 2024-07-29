/**
 * In the student sample programs for this book, you will find a file named pbnumbers.txt,
 * containing the winning lottery numbers that were selected between February 3, 2010
 * and May 11, 2016 (the file contains 654 sets of winning numbers). Here is an example of the first
 * few lines of the file's contents:
 * 17 22 36 37 52 24
 * 14 22 52 54 59 04
 * 05 08 29 37 38 34
 * 10 14 30 40 51 01
 * 07 08 19 26 36 15
 * and so on...
 *
 * Each line in the file contains the set of six numbers that were selected on a given date.
 * The numbers are separated by a space, and the last number in each line is the PowerBall
 * number for the day. For example, the first line in the file shows the numbers for February 3, 2010,
 * which are 17, 22, 36, 37, 52, and the PowerBall number 24.
 *
 * Write one or more programs that work with this file to perform the following:
 *
 * - Display the 10 most common numbers, ordered by frequency.
 * - Display the 10 least common numbers, ordered by frequency.
 * - Display the 10 most overdue numbers (numbers that haven't been
 *      drawn in a long time), ordered from most overdue to least overdue.
 * - Display the frequency of each number 1-69, and the frequency of each Powerball
 *      number 1-26.
 *
 **/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    const int ROWS = 654,
              COLUMNS = 6;

    string array_from_file[ROWS][COLUMNS];

    ifstream input_file;

    input_file.open("pbnumbers.txt");

    if (input_file)
    {
        cout << "File open" << endl;

        // Display the 10 most common numbers, ordered by frequency.
        for (int row = 0; row < ROWS; row++)
        {
            for (int column = 0; column < COLUMNS; column++)
            {
                if (!(input_file >> array_from_file[row][column]))
                {
                    cout << "Invalid file. See line #" << __LINE__ << endl << endl;
                    exit(EXIT_FAILURE);
                }
                
            }
            
        }
        

        input_file.close();
        cout << "File closed." << endl;

    }
    else
    {
        cout << "Invalid file. See line #" << __LINE__ << endl << endl;
        exit(EXIT_FAILURE);
    }

    //  - Read contents of array
    for (int row = 0; row < ROWS; row++)
    {
        cout << row + 1 << ". ";

        for (int column = 0; column < COLUMNS; column++)
        {
            cout << array_from_file[row][column] << " ";
        }
        cout << endl;
    }

    //  - Display the 10 most common numbers, ordered by frequency.
    
    

    return 0;
}