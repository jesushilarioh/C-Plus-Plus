// This program demonstrates how the getline function can
// be used for all of a program's input.
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
   const int INPUT_SIZE = 81;    // Size of input array
   const int NAME_SIZE = 30;     // Size of name array
   char input[INPUT_SIZE];       // To hold a line of input
   char name[NAME_SIZE];         // To hold a name
   int idNumber;                 // To hold an ID number.
   int age;                      // To hold an age
   double income;                // To hold income
   
   // Get the user's ID number.
   cout << "What is your ID number? ";
   cin.getline(input, INPUT_SIZE); // Read as a string
   idNumber = atoi(input);         // Convert to int
   
   // Get the user's name. No conversion necessary.
   cout << "What is your name? ";
   cin.getline(name, NAME_SIZE);
   
   // Get the user's age.
   cout << "How old are you? ";
   cin.getline(input, INPUT_SIZE); // Read as a string
   age = atoi(input);              // Convert to int

   // Get the user's income.
   cout << "What is your annual income? ";
   cin.getline(input, INPUT_SIZE); // Read as a string
   income = atof(input);           // Convert to double

   // Show the resulting data.
   cout << setprecision(2) << fixed << showpoint;
   cout << "Your name is " << name
        <<", you are " << age 
        << " years old,\nand you make $" 
        << income << " per year.\n";

   return 0;
} 