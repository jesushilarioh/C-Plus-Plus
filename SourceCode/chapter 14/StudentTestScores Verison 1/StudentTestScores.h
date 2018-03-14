#ifndef STUDENTTESTSCORES_H
#define STUDENTTESTSCORES_H
#include <string>
using namespace std;

const double DEFAULT_SCORE = 0.0;

class StudentTestScores
{
private:
   string studentName;  // The student's name
   double *testScores;  // Points to array of test scores
   int numTestScores;   // Number of test scores

    // Private member function to create an
    // array of test scores.
   void createTestScoresArray(int size)
   { numTestScores = size;
     testScores = new double[size]; 
     for (int i = 0; i < size; i++)
        testScores[i] = DEFAULT_SCORE; }
        
public:
    // Constructor
   StudentTestScores(string name, int numScores)
   { studentName = name;
     createTestScoresArray(numScores); }

    // Destructor
   ~StudentTestScores()
   { delete [] testScores; }

    // The setTestScore function sets a specific
    // test score's value.
   void setTestScore(double score, int index)
   { testScores[index] = score; }

    // Set the student's name.
   void setStudentName(string name)
   { studentName = name; }

    // Get the student's name.
   string getStudentName() const
   { return studentName; }
   
   // Get the number of test scores.
   int getNumTestScores()
   { return numTestScores; }

    // Get a specific test score.
   double getTestScore(int index) const
   { return testScores[index]; }
};
#endif