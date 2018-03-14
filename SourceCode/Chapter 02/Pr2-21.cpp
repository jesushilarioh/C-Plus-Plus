// This program calculates hourly wages, including overtime.
#include <iostream>
using namespace std;

int main()          
{
   double regularWages,            // To hold regular wages
          basePayRate = 18.25,     // Base pay rate
          regularHours = 40.0,     // Hours worked less overtime
          overtimeWages,           // To hold overtime wages
          overtimePayRate = 27.78, // Overtime pay rate
          overtimeHours = 10,      // Overtime hours worked
          totalWages;              // To hold total wages

   // Calculate the regular wages.
   regularWages = basePayRate * regularHours; 
   
   // Calculate the overtime wages.
   overtimeWages = overtimePayRate * overtimeHours;
   
   // Calculate the total wages.
   totalWages = regularWages + overtimeWages;
   
   // Display the total wages.
   cout << "Wages for this week are $" << totalWages << endl;
   return 0;
} 