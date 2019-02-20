// Sometimes you may need to calculate the sum of each 
// column in a two-dimensional array. In the previous 
// example a two-dimensional array is used to hold a 
// set of test scores for a set of students. Suppose you 
// wish to calculate the class average for each of the 
// test scores. To do this, you calculate the average of 
// each column in the array. This is accomplished with a 
// set of nested loops. The outer loop controls the column 
// subscript and the inner loop controls the row 
// subscript. The inner loop calculates the sum of a 
// column, which is stored in an accumulator. 
// The following code demonstrates.

// Excerpt taken from Tony Gaddis Book "Starting Out With
// C++ (8th Edition)" Page 424

#include <iostream>
using namespace std;
int main()
{
    const int NUMBER_OF_STUDENTS = 3,
              NUMBER_OF_SCORES   = 5;

    double total, 
           average,
           scores[NUMBER_OF_STUDENTS][NUMBER_OF_SCORES] = {{88, 97, 79, 86, 94},
                                                           {86, 91, 78, 79, 84},
                                                           {82, 73, 77, 82, 89}};
    
    for (int column = 0; column < NUMBER_OF_SCORES; column++)
    {
        total = 0;
        
        for (int row = 0; row < NUMBER_OF_STUDENTS; row++)
            total += scores[row][column];

        average = total / NUMBER_OF_STUDENTS;

        cout << "Class average for test " 
             << (column + 1) << " is " 
             << average 
             << endl;
    }
    return 0;
}