/************************************************************
 *
 *   13. Grade Book Modification
 * 
 *  Modify the grade book application in Programming 
 *  Challenge 13 so it drops each student’s lowest 
 *  score when determining the test score averages and 
 *  letter grades.
 *
 *************************************************************/
#include <iostream>

using namespace std;

const int NUMBER_OF_TESTS = 4;

double inputValidate(double);
void getStudentTestScores(double[], int = NUMBER_OF_TESTS);
double calculateAverageOfArray(double[], int);
char getAverageLetterGrade(double);
double findLowest(double[], int);

int main()
{
    const int NUMBER_OF_STUDENTS = 5;
    double average;
    char average_letter_grade;
    string studentNames[NUMBER_OF_STUDENTS];
    char letterGrades[NUMBER_OF_STUDENTS];
    double student1TestScores[NUMBER_OF_TESTS];
    double student2TestScores[NUMBER_OF_TESTS];
    double student3TestScores[NUMBER_OF_TESTS];
    double student4TestScores[NUMBER_OF_TESTS];
    double student5TestScores[NUMBER_OF_TESTS];

    cout << "Enter student names: " << endl;
    for(int i = 0; i < NUMBER_OF_STUDENTS; i++)
    {
        cout << "Student " << (i + 1) << " name: ";
        getline(cin, studentNames[i]);
    }

    cout << "\nEnter test scores for " << studentNames[0] << endl;
    getStudentTestScores(student1TestScores);

    cout << "\nEnter test scores for " << studentNames[1] << endl;
    getStudentTestScores(student2TestScores);

    cout << "\nEnter test scores for " << studentNames[2] << endl;
    getStudentTestScores(student3TestScores);

    cout << "\nEnter test scores for " << studentNames[3] << endl;
    getStudentTestScores(student4TestScores);

    cout << "\nEnter test scores for " << studentNames[4] << endl;
    getStudentTestScores(student5TestScores);

    // Student #1
    average = calculateAverageOfArray(student1TestScores, NUMBER_OF_TESTS);
    cout << "\nAverage test score for " << studentNames[0] << " = " << average << endl;

    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;

    // Student #2
    average = calculateAverageOfArray(student2TestScores, NUMBER_OF_TESTS);
    cout << "Average test score for " << studentNames[1] << " = " << average << endl;

    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;

    // Student #3
    average = calculateAverageOfArray(student3TestScores, NUMBER_OF_TESTS);
    cout << "Average test score for " << studentNames[2] << " = " << average << endl;

    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;

    // Student #4
    average = calculateAverageOfArray(student4TestScores, NUMBER_OF_TESTS);
    cout << "Average test score for " << studentNames[3] << " = " << average << endl;

    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;

    // Student #5
    average = calculateAverageOfArray(student5TestScores, NUMBER_OF_TESTS);
    cout << "Average test score for " << studentNames[4] << " = " << average << endl;

    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;
    

    return 0;
}

// 6. Input Validation: Do not accept test scores less than 0 or greater than 100.
double inputValidate(double number)
{
    while(!(cin >> number) || (number < 0 || number > 100))
    {
        cout << "Error. A number from 0 thru 100 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return number;
}

// This function gets student test scores. 2 arguments: array
// and ARRAY_SIZE
void getStudentTestScores(double array[], int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Test #" << (i + 1) << ": ";
        array[i] = inputValidate(array[i]);
    }
}

double calculateAverageOfArray(double array[], int ARRAY_SIZE)
{
    double sum = 0, 
           lowest_grade;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum += array[i];
    }

    lowest_grade = findLowest(array, ARRAY_SIZE);
    sum -= lowest_grade;

    return sum / (ARRAY_SIZE - 1);
}

char getAverageLetterGrade(double average)
{
    char letter;

    if (average <= 100 && average >= 90)
        letter = 'A';
    else if (average <= 89 && average >= 80)
        letter = 'B';
    else if (average <= 79 && average >= 70)
        letter = 'C';
    else if (average <= 69 && average >= 60)
        letter = 'D';
    else if (average <= 59 && average >= 0)
        letter = 'F';
    
    return letter;
}

double findLowest(double array[], int ARRAY_SIZE)
{
    double lowest_number = array[0];
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[i] <= lowest_number)
            lowest_number = array[i];
        
    }
    return lowest_number;
}