/**
 * 
 * 8. Sum of Digits in a String
 * 
 * Write a program that asks the user to enter 
 * a series of single digit numbers with nothing 
 * separating them. Read the input as a C-string 
 * or a string object. The program should display 
 * the sum of all the single-digit numbers in the 
 * string. For example, if the user enters 2514, 
 * the program should display 12, which is the sum 
 * of 2, 5, 1, and 4. The program should also display 
 * the highest and lowest digits in the string.
 *
 */
#include <iostream>
#include <string>

using namespace std;

int getSum(string);
int getLowest(string);
int getHighest(string);

int main()
{
    string user_numbers;

    // asks the user to enter a series of single digit 
    // numbers with nothing separating them
    cout << "Enter a series of single digit " << endl
         << "numbers with nothing separating them: ";
    // Read the input as a C-string 
    // or a string object.
    getline(cin, user_numbers);

    int sum = getSum(user_numbers);
    int lowest = getLowest(user_numbers);
    int highest = getHighest(user_numbers);

    // display the sum of all the single-digit numbers 
    // in the string.
    cout << "sum        = "     << sum      << endl
         << "lowest     = "     << lowest   << endl
         << "highest    = "     << highest  
         << endl;

    return 0;
}
int getSum(string user_numbers)
{
    int sum = 0;
    string temp;

    for (int i = 0; i < user_numbers.length(); i++)
    {
        temp = user_numbers[i];
        sum += stoi(temp);
    }
        
    return sum;
}
int getLowest(string user_numbers)
{
    string temp;
    temp = user_numbers[0];

    int lowest = stoi(temp);

    for (int i = 1; i < user_numbers.length(); i++)
    {
        temp = user_numbers[i];
        if (stoi(temp) <= lowest)
            lowest = stoi(temp);

    }

    return lowest;
}

int getHighest(string user_numbers)
{
    string temp;
    temp = user_numbers[0];

    int highest = stoi(temp);

    for (int i = 1; i < user_numbers.length(); i++)
    {
        temp = user_numbers[i];
        if (stoi(temp) >= highest)
            highest = stoi(temp);
            
    }

    return highest;
}