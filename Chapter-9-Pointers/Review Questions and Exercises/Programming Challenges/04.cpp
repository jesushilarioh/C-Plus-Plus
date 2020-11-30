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
#include <string>
using namespace std;

// Added string *
void getArrayElements(double *, string *, const int);
// Added student_names
void displayArray(double *, string *, const int);
// Added student_names
void selectionSort(double *, string *, const int);
double averageArrayElements(double *, const int);
// Added swap for a string
void swap(string *, string *);
void swap(double *, double *);
int inputValidate(int);
double inputValidate(double);

int main()
{
    int number_of_test_scores;

    cout << "Enter the number of test scores: ";
    number_of_test_scores = inputValidate(number_of_test_scores);

    double *test_scores = new double[number_of_test_scores];

    // Added student_names array
    string *student_names = new string[number_of_test_scores];

    cout << "Enter each test score: " << endl;
    
    // Added student_names
    getArrayElements(test_scores, student_names, number_of_test_scores);
    // Added student_names
    selectionSort(test_scores, student_names, number_of_test_scores);

    double average = averageArrayElements(test_scores, number_of_test_scores);

    cout << "\nSorted test scores:" << endl;
    // Added student_names
    displayArray(test_scores, student_names, number_of_test_scores);

    delete [] test_scores;
    test_scores = nullptr; // 0x0
    delete [] student_names;
    student_names = nullptr;

    cout << "\nAverage = " << average << endl;

    return 0;
}
int inputValidate(int number)
{
    while (!(cin >> number))
    {
        cout << "Error. Enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}
double inputValidate(double number)
{
    while (!(cin >> number))
    {
        cout << "Error. Enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}
// Added student_names
void getArrayElements(double *array, string *student_names, const int SIZE)
{
    // Added cout statement
    cout << "Enter student names & test scores." << endl;
    for (int i = 0; i < SIZE; i++)
    {
        // Changed...
        cout << "Student #" << (i + 1) << " name      : ";
        cin >> *(student_names + i);
        // Changed...
        cout << "Student #" << (i + 1) << " test score: ";
        *(array + i) = inputValidate(*(array + i));
    }
    
}
// Added student_names
void selectionSort(double *array, string *student_names, const int SIZE)
{
    int start_index,
        minIndex;
    // Changed to min_test_score and to a double
    double min_test_score;
    // Added min_test_score_name
    string min_test_score_name;
    
    for (start_index = 0; start_index < (SIZE - 1); start_index++)
    {
        minIndex = start_index;
        min_test_score = *(array + start_index);
         // Added min_test_score_name
        min_test_score_name = *(student_names + start_index);

        for (int index = start_index + 1; index < SIZE; index++)
        {
            if (*(array + index) < min_test_score)
            {
                min_test_score = *(array + index);
                 // Added min_test_score_name
                min_test_score_name = *(student_names + index);
                minIndex = index;
            }
            
        }
        swap(*(array + minIndex), *(array + start_index));
        // Added swap for a string
        swap(*(student_names + minIndex), *(student_names + start_index));
    }
}
// Added swap for string
void swap(string *a, string *b)
{
    string *temp = a;
    a = b; 
    b = temp;
}
void swap(double *a, double *b)
{
    double *temp = a;
    a = b;
    b = temp;
}
double averageArrayElements(double *array, const int SIZE)
{
    double sum = 0;

    for (int i = 0; i < SIZE; i++)
        sum += *(array + i);
    
    return sum / SIZE;
}
// Added student_names
void displayArray(double *array, string *student_names, const int SIZE)
{
    // Changed scope of for loop, added student_names
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Student #" << (i + 1) << " name      : " << *(student_names + i) << endl;
        cout << "Student #" << (i + 1) << " test score: " << *(array + i)         << endl;
    }
        
    
}