//*************************************
// This program displays the number 1
// through 10 and their squares.
//
// By: Jesus Hilario Hernandez
// Last Updated: January 1, 2017
// Used from Gaddis, "Starting out with C++",
//  8th Edition, Pg 249
//*************************************
#include <iostream>
 using namespace std;

 int main()
 {
     const int MIN_NUMBER = 1,  // Starting value
               MAX_NUMBER = 10; // Ending value
     int num;

     cout << "Number Number Squared\n";
     cout << "------------------------\n";

     for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
     {
         cout << num << "\t\t" << (num * num) << endl;
     }
     return 0;
 }
