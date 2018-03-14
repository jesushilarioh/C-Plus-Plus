// This program gets a series of test scores and
// calculates the average of the scores with the
// lowest score dropped.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
   const int SIZE = 4;      // Array size
   double testScores[SIZE], // Array of test scores
          total,            // Total of the scores
          lowestScore,      // Lowest test score
          average;          // Average test score

   // Set up numeric output formatting.
   cout << fixed << showpoint << setprecision(1);

   // Get the test scores from the user.
   getTestScores(testScores, SIZE);

   // Get the total of the test scores.
   total = getTotal(testScores, SIZE);

   // Get the lowest test score.
   lowestScore = getLowest(testScores, SIZE);

   // Subtract the lowest score from the total.
   total -= lowestScore;

   // Calculate the average. Divide by 3 because
   // the lowest test score was dropped.
   average = total / (SIZE - 1);

   // Display the average.
   cout << "The average with the lowest score "
       << "dropped is " << average << ".\n";

   return 0;
}

//************************************************************
// The getTestScores function accepts an array and its size  *
// as arguments. It prompts the user to enter test scores,   *
// which are stored in the array.                            *
//************************************************************

void getTestScores(double scores[], int size)
{
   // Loop counter
   int index;
   
   // Get each test score.
   for(index = 0; index <= size - 1; index++)
   {
      cout << "Enter test score number " 
           << (index + 1) << ": ";
      cin >> scores[index];
   }
}

//****************************************************
// The getTotal function accepts a double array      *
// and its size as arguments. The sum of the array's *
// elements is returned as a double.                 *
//****************************************************

double getTotal(const double array[], int size)
{
   double total = 0; // Accumulator

   // Add each element to total.
   for (int count = 0; count < size; count++)
      total += array[count];

   // Return the total.
   return total;
}

//****************************************************
// The getLowest function accepts a double array and *
// its size as arguments. The lowest value in the    *
// array is returned as a double.                    *
//****************************************************

double getLowest(const double array[], int size)
{
   double lowest;  // To hold the lowest value

   // Get the first array's first element.
   lowest = array[0];

   // Step through the rest of the array. When a
   // value less than lowest is found, assign it
   // to lowest.
   for (int count = 1; count < size; count++)
   {
      if (array[count] < lowest)
         lowest = array[count];
   }

   // Return the lowest value.
   return lowest;
}