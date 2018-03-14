//*************************************************************
//
// This program averages test scores. It asks the user for the
// number of students and the number of test scores per student.
//
// By: Jesus Hilario Hernandez
// Used from: Gaddis, "Starting Out With C++: From Control
//                     Structures Through Objects."
//
// Last modified: October 8, 2016.
//
//*************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int numStudents,    // Number of students
        numTests;       // Number of tests per student
    double total,       // Accumulator for total scores
           average;     // Average test score

    // Numeric output formatting
    cout << fixed << showpoint << setprecision(1);

    // Get number of students
    cout << "This program aveerages test scores.\n";
    cout << "For how many students do you have test scores? ";

    // Input Validation
        while(!(cin >> numStudents) || numStudents < 0)
        {
            // Explain the error
            cout << "\nERROR: You must have entered a positive number." << endl;
            cout << "For how many students do you have test scores? ";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(1200, '\n');
        }

    // Get number of test scores per student.
    cout << "\nHow many test scores does each student have? ";

    // Input validation
        while(!(cin >> numTests) || numTests < 0)
        {
            // Explain the error
            cout << "\nERROR: You must have entered a positive number." << endl;
            cout << "How many test scores does each student have? ";
            // Clear input stream
            cin.clear();
            // Discard previous input
            cin.ignore(1200, '\n');
        }


    // Determine each student's average score.
    for (int student = 1; student <= numStudents; student++)
    {
        total = 0;      // Initialize the accumulator
        for (int test = 1; test <= numTests; test++)
        {
            double score;
            cout << "\nEnter score " << test << " for ";
            cout << "student " << student << ": ";
            // Input validation
            while(!(cin >> score) || score < 0)
            {
                // Explain the error
                cout << "\nERROR: You must have entered a positive number." << endl;
                cout << "Enter score " << test << " for ";
                cout << "student " << student << ": ";
                // Clear input stream
                cin.clear();
                // Discard previous input
                cin.ignore(1200, '\n');
            }
            // Keeping a running total
            total += score;
        }
        // Calculate average test score
        average = total / numTests;
        cout << "\nThe average score for student " << student ;
        cout << " is " << average << ".\n\n";
    }




    return 0;
}
