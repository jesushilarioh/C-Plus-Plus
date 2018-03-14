// This program demonstrates the vector's empty member function.
#include <iostream>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<int>);

int main()
{
   vector<int> values;  // A vector to hold values
   int numValues;       // The number of values
   double average;      // To hold the average

   // Get the number of values to averge.
   cout << "How many values do you wish to average? ";
   cin >> numValues;
   
   // Get the values and store them in the vector.
   for (int count = 0; count < numValues; count++)
   {
      int tempValue;
      cout << "Enter a value: ";
      cin >> tempValue;
      values.push_back(tempValue);
   }
   
   // Get the average of the values and display it.
   average = avgVector(values);
   cout << "Average: " << average << endl;
   return 0;
}

//*************************************************************
// Definition of function avgVector.                          *
// This function accepts an int vector as its argument. If    *
// the vector contains values, the function returns the       *
// average of those values. Otherwise, an error message is    *
// displayed and the function returns 0.0.                    *
//*************************************************************

double avgVector(vector<int> vect)
{
   int total = 0;    // accumulator
   double avg;       // average

   if (vect.empty()) // Determine if the vector is empty
   {
      cout << "No values to average.\n";
      avg = 0.0;
   }
   else
   {
      for (int count = 0; count < vect.size(); count++)
         total += vect[count];
      avg = total / vect.size();
   }
   return avg;
}