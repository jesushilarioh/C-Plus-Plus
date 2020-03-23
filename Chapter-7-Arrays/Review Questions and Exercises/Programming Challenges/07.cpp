/************************************************************
 *
 *   07. Number Analysis Program
 * 
 * Write a program that asks the user for a file name. 
 * Assume the file contains a series of numbers, each 
 * written on a separate line. The program should read 
 * the contents of the file into an array and then display 
 * the following data:
 * 
 * • The lowest number in the array
 * • The highest number in the array
 * • The total of the numbers in the array
 * • The average of the numbers in the array
 * 
 * If you have downloaded this book’s source code from 
 * the companion Web site, you will find a file named 
 * numbers.txt in the Chapter 07 folder. You can use the 
 * file to test the program. (The companion Web site 
 * is at www.pearsonhighered.com/gaddis.) 
 *
 *************************************************************/
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Global constants

// Function Prototypes

int main()
{
    vector<double> numbers;
    int file_number;
    ifstream inputFile;
    string user_file_name;

    // 1. asks the user for a file name
    cout << "What is the file name? ";
    cin >> user_file_name;

    inputFile.open(user_file_name);

    if(inputFile)
    {
        cout << "Valid file." << endl;

        // 2. read the contents of the file into an array
        while(inputFile >> file_number)
            numbers.push_back(file_number);
            
        // For testing:
        // cout << "Values: " << endl;
        // for (int val : numbers)
        //     cout << val << endl;

        inputFile.close();
    }
    else
        cout << "Invalid file." << endl;

    double lowest_number = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
        if (numbers[i] <= lowest_number)
            lowest_number = numbers[i];
    cout << "Lowest Number = " << lowest_number << endl;

    double highest_number = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
        if (numbers[i] >= highest_number)
            highest_number = numbers[i];
    cout << "Highest Number = " << highest_number << endl;
    
    double total;
    for (int i = 0; i < numbers.size(); i++)
        total += numbers[i];
    cout << "Total = " << total << endl;
    
    double average = total / numbers.size();
    cout << "Average = " << average << endl;


    return 0;
}

/********************************************************
 * function definitions                                 *
 ********************************************************/
