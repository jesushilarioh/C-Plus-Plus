// This program calculates the average
// of three test scores.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double test1, test2, test3;  // To hold the scores
    double average;              // To hold the average

    // Get the three test scores.
    cout << "Enter the first test score: ";
    cin >> test1;
    cout << "Enter the second test score: ";
    cin >> test2;
    cout << "Enter the third test score: ";
    cin >> test3;
    
    // Calculate the average of the scores.
    average = (test1 + test2 + test3) / 3.0;
    
    // Display the average.
    cout << "The average score is: " << average << endl;
    return 0;
}