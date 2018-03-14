//***********************************************************
// This program sums all the rows of a two-dimensional
// array.
//
// By: Jesus Hilario Hernandez
// Last Updated: April 29, 2017
//***********************************************************
#include <iostream>
using namespace std;

int main()
{
    const int NUM_STUDENTS = 3; // Number of students
    const int NUM_SCORES = 5;    // Numver of scores
    double total, average;
    double scores[NUM_STUDENTS][NUM_SCORES] = {{88, 97, 79, 86, 94},
                                               {86, 91, 78, 79, 84},
                                               {82, 73, 77, 82, 89}};
    // Get each student's average score.
    for (int row = 0; row < NUM_STUDENTS; row++)
    {
        // Set the accumulator
        total = 0;
        // Sum a row.
        for (int col = 0; col < NUM_SCORES; col++)
        {
            total += scores[row][col];
        }
        // Get the average.
        average = total / NUM_SCORES;
        // Display the average.
        cout << "Score average for student "
             << (row + 1) << " is " << average << endl;
    }
    return 0;
}
