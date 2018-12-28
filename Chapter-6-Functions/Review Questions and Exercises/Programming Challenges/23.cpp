/************************************************************
 *
 *   23. Prime Number List
 * 
 *      Use the isPrime function that you wrote in Programming 
 *      Challenge 22 in a program that stores a list of all 
 *      the prime numbers from 1 through 100 in a file.
 *
 * 	Jesus Hilario Hernandez
 * 	December 27, 2018 --> "Merry Christmas!"
 *
 *************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

// Function Prototypes
bool isPrime(int);

int main()
{
    ofstream outputFile;

    outputFile.open("primeNumbers.txt");

    if (outputFile)
    {
        for (int i = 0; i <= 100; i++)
        {
            if(isPrime(i))
                outputFile << i << endl;
        }

        outputFile.close();
    }
    else
    {
        cout << "Error opening the file.\n";
    }

    return 0;
}

/****************************************************
 * Definition for isPrime():                  `     *
 * isPrime takes a integer as an argument and       *
 * returns true if the argument is a prime number,  *
 * or false otherwise.                              *
 ****************************************************/
bool isPrime(int number)
{
    int isPrime = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            isPrime++;
    }
    
    return isPrime == 2 ? 1 : 0;
    
}