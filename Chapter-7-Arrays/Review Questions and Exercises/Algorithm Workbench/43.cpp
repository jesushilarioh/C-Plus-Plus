/**
 * In a program you need to store the identification numbers of 
 * 10 employees (as ints) and their weekly gross pay (as doubles).
 * 
 *      A) Define two arrays that may be used in parallel to store 
 *         the 10 employee identification numbers and gross pay amounts.
 * 
 *      B) Write a loop that uses these arrays to print each employee’s 
 *         identification number and weekly gross pay.
 */
#include <iostream>
using namespace std;
int main()
{
    const int ARRAY_SIZE = 10;

    int employees[ARRAY_SIZE] = {1234, 4321, 2345, 5432, 3456, 
                                 6543, 4567, 7654, 5678, 8765};

    double employees_gross_pay[ARRAY_SIZE] = {1500, 2000, 1750, 1800, 1000,
                                              3000, 1100, 1000, 1500, 1900};

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Employee #: "
             << employees[i]
             << ", weekly gross = $"
             << employees_gross_pay[i]
             << endl;
    }
    
    return 0;
} 