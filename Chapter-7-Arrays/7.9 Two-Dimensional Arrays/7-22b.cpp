//***********************************************************
// This program sums all the elements of a two-dimensional
// array.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 11, 2016
//***********************************************************
#include <iostream>
using namespace std;

int main()
{
    const int NUM_STUDENTS = 3;     // Number of students
    const int NUM_SCORES = 5;       // Number of test scores
    double total;                   // Accumulator is set in the loops
    double average;                 // To hold each score's class average
    double scores[NUM_STUDENTS][NUM_SCORES] = {{88, 97, 79, 86, 94},
                                               {86, 91, 78, 79, 84},
                                               {82, 73, 77, 82, 89}};

    // Get the class average for each score.
    for (int col = 0; col < NUM_SCORES; col++)
    {
        // Reset the accumulator.
        total = 0;

        // Sum a column.
        for (int row = 0; row < NUM_STUDENTS; row++)
        {
            total += scores[row][col];
        }

        // Get the average.
        average = total / NUM_STUDENTS;

        // Display the class average.
        cout << "Class average for test " << (col + 1)
             << " is " << average << endl;
    }
    return 0;
}
