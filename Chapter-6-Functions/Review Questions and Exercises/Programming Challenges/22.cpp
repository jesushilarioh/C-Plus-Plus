/************************************************************
 *
 *   22. isPrime Function
 * 
 *      A prime number is a number that is only evenly 
 *      divisible by itself and 1. For example, the number 5 
 *      is prime because it can only be evenly divided by 1 
 *      and 5. The number 6, however, is not prime because it 
 *      can be divided evenly by 1, 2, 3, and 6.
 * 
 *      Write a function name isPrime, which takes an integer 
 *      as an argument and returns true if the argument is a 
 *      prime number, or false otherwise. Demonstrate the 
 *      function in a complete program.
 * 
 *      TIP: Recall that the % operator divides one number by 
 *           another, and returns the remainder of the division. 
 *           In an expression such as num1 % num2, the % 
 *           operator will return 0 if num1 is evenly divisible 
 *           by num2.
 *
 * 	Jesus Hilario Hernandez
 * 	December 27, 2018 --> "Merry Christmas!"
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Function Prototypes
int inputValidate(int);
bool isPrime(int);

int main()
{
    int number;

    cout << "Enter a number: ";
    number = inputValidate(number);

    cout << "Your number is "
         << (isPrime(number) ? "PRIME." : "NOT PRIME.")
         << endl;

    return 0;
}

/****************************************************
 * Definition for inputValidate():                  *
 * inputValidate checks user input for a double.    *
 * If a double is NOT found, a                      *
 * while loop displays an error, clears and ignores *
 * previous input, and prompts the user to try      *
 * again.                                           *
 ****************************************************/
int inputValidate(int num1)
{
    
    while(!(cin >> num1))
    {
        cout << "Error. Number must not be "
             << " 0 or greater:";
        cin.clear();
        cin.ignore(1234, '\n');
    }

    return num1;
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