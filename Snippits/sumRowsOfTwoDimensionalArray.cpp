// Sometimes you may need to calculate the sum of each row in 
// a two-dimensional array. For example, suppose a 
// two-dimensional array is used to hold a set of 
// test scores for a set of students. Each row in the 
// array is a set of test scores for one student. To get the 
// sum of a student’s test scores (perhaps so an average may 
// be calculated), you use a loop to add all the elements 
// in one row. The following code shows an example.
//
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

    for (int row = 0; row < NUMBER_OF_STUDENTS; row++)
    {
        total = 0;
        
        for (int column = 0; column < NUMBER_OF_SCORES; column++)
            total += scores[row][column];
        
        average = total / NUMBER_OF_SCORES;

        cout << "Score average for student "
             << (row + 1) << " is " 
             << average 
             << endl;
    }

    return 0;
}