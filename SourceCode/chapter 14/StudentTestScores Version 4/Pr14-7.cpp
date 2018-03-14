// This program demonstrates the overloaded = operator returning a value.
#include <iostream>
#include "StudentTestScores.h"
using namespace std;

// Function prototype
void displayStudent(StudentTestScores);

int main()
{
	// Create a StudentTestScores object.
    StudentTestScores student1("Kelly Thorton", 3);
    student1.setTestScore(100.0, 0);
    student1.setTestScore(95.0, 1);
    student1.setTestScore(80, 2);

	// Create two more StudentTestScores objects.
    StudentTestScores student2("Jimmy Griffin", 5);
    StudentTestScores student3("Kristen Lee", 10);
    
	// Assign student1 to student2 and student3.
    student3 = student2 = student1;	
    
    // Display the objects.
    displayStudent(student1);
    displayStudent(student2);
    displayStudent(student3);
    return 0;
}

// displayStudent function
void displayStudent(StudentTestScores s)
{
     cout << "Name: " << s.getStudentName() << endl;
     cout << "Test Scores: ";
     for (int i = 0; i < s.getNumTestScores(); i++)
        cout << s.getTestScore(i) << " ";
	 cout << endl;
}