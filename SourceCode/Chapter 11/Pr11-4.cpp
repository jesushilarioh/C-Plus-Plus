// This program uses an array of structures.
#include <iostream>
#include <iomanip>
using namespace std;

struct PayInfo
{
   int hours;        // Hours Worked
   double payRate;   // Hourly Pay Rate
};

int main()
{
   const int NUM_WORKERS = 3;    // Number of workers
   PayInfo workers[NUM_WORKERS]; // Array of structures
   int index;                    // Loop counter

   // Get employee pay data.
   cout << "Enter the hours worked by " << NUM_WORKERS 
        << " employees and their hourly rates.\n";

   for (index = 0; index < NUM_WORKERS; index++)
   {
      // Get the hours worked by an employee.
      cout << "Hours worked by employee #" << (index + 1);
      cout << ": ";
      cin >> workers[index].hours;
      
      // Get the employee's hourly pay rate.
      cout << "Hourly pay rate for employee #";
      cout << (index + 1) << ": ";
      cin >> workers[index].payRate;
      cout << endl;
   }

   // Display each employee's gross pay.
   cout << "Here is the gross pay for each employee:\n";
   cout << fixed << showpoint << setprecision(2);
   for (index = 0; index < NUM_WORKERS; index++)
   {
      double gross;
      gross = workers[index].hours * workers[index].payRate;
      cout << "Employee #" << (index + 1);
      cout << ": $" << gross << endl;
   }
   return 0;
}