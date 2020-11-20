/**
 * 4. Test Scores #2
 * Modify the program of Programming Challenge 2 to 
 * allow the user to enter name-score pairs. For each 
 * student taking a test, the user types the student’s 
 * name followed by the student’s integer test score. 
 * Modify the sorting function so it takes an array holding 
 * the student names and an array holding the student test 
 * scores. When the sorted list of scores is displayed, 
 * each student’s name should be displayed along with his 
 * or her score. In stepping through the arrays, use 
 * pointers rather than array subscripts.
 */
#include <iostream>
using namespace std;

void getTestScores(double *, string *, const int);
void displayTestScores(double *, string *, const int);
void duelSelectionSort(double *, string *, const int);
double averageArrayElements(double *, const int);

int main()
{
    int number_of_test_scores;

    cout << "Enter number of test scores: ";
    cin >> number_of_test_scores;

    // unique_ptr<double[]> test_scores( new double[number_of_test_scores] );
    double *test_scores = new double[number_of_test_scores];
    string *student_names = new string[number_of_test_scores];

    cout << "Enter each test score: " << endl;
    getTestScores(test_scores, student_names, number_of_test_scores);
    cout << endl;
    // displayTestScores(test_scores, student_names, number_of_test_scores);

    duelSelectionSort(test_scores, student_names, number_of_test_scores);
    // cout << endl;
    // displayTestScores(test_scores, student_names, number_of_test_scores);

    double average = averageArrayElements(test_scores, number_of_test_scores);
    
    cout << "\nSorted test scores:" << endl;
    displayTestScores(test_scores, student_names, number_of_test_scores);

    delete [] test_scores;
    test_scores = nullptr;

    delete [] student_names;
    student_names = nullptr;

    cout << "\nAverage = " << average << endl;

    return 0;
} 

void getTestScores(double *test_scores, string *student_names, const int SIZE)
{
    cout << "Enter student names & they're score: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Student #" << (i + 1) << " name      : ";
        cin >> *(student_names + i);
        cout << "Student #" << (i + 1) << " test score: ";
        cin >> *(test_scores + i);
    }
    
}
void displayTestScores(double *test_scores, string *student_names, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Student #" << (i + 1) << " name      : " << *(student_names + i) << endl;
        cout << "Student #" << (i + 1) << " test score: " << *(test_scores + i) << endl;
    
    }

}
void duelSelectionSort(double *test_scores, string *student_names, const int SIZE)
{
    int startScan, 
        minIndex;
    double min_test_score;
    string min_test_score_name;

    for (startScan = 0; startScan < (SIZE - 1); startScan++)
    {
        minIndex = startScan;
        min_test_score = *(test_scores + startScan);
        min_test_score_name = *(student_names + startScan);

        for (int index = startScan + 1; index < SIZE; index++)
        {
            if (*(test_scores + index) < min_test_score)
            {
                min_test_score = *(test_scores + index);
                min_test_score_name = *(student_names + index);
                minIndex = index;
            }
        }

        *(test_scores + minIndex) = *(test_scores + startScan);
        *(test_scores + startScan) = min_test_score;

        *(student_names + minIndex) = *(student_names + startScan);
        *(student_names + startScan) = min_test_score_name;
        
    }
}
double averageArrayElements(double *array, const int SIZE)
{
    double sum = 0;

    for (int i = 0; i < SIZE; i++)
        sum += *(array + i);

    return sum / SIZE;
}