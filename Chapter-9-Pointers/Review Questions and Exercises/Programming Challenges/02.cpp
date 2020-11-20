/**
 * 2. Test Scores #1
 * Write a program that dynamically allocates an array 
 * large enough to hold a user- defined number of test 
 * scores. Once all the scores are entered, the array 
 * should be passed to a function that sorts them in ascending 
 * order. Another function should be called that calculates 
 * the average score. The program should display the sorted 
 * list of scores and averages with appropriate headings. 
 * Use pointer notation rather than array notation whenever 
 * possible.
 * 
 * Input Validation: Do not accept negative numbers for test scores.
 */
#include <iostream>
using namespace std;

void getArrayElements(double *, const int);
void displayArray(double *, const int);
void selectionSort(double *, const int);
double averageArrayElements(double *, const int);

int main()
{
    int number_of_test_scores;

    cout << "Enter number of test scores: ";
    cin >> number_of_test_scores;

    // unique_ptr<double[]> test_scores( new double[number_of_test_scores] );
    double *test_scores = new double[number_of_test_scores];

    cout << "Enter each test score: " << endl;
    getArrayElements(test_scores, number_of_test_scores);
    // cout << endl;
    // displayArray(test_scores, number_of_test_scores);

    // the array 
    // * should be passed to a function that sorts them in ascending 
    // * order.
    selectionSort(test_scores, number_of_test_scores);
    // cout << endl;
    // displayArray(test_scores, number_of_test_scores);

    double average = averageArrayElements(test_scores, number_of_test_scores);
    
    cout << "\nSorted test scores:" << endl;
    displayArray(test_scores, number_of_test_scores);

    delete [] test_scores;
    test_scores = nullptr;

    cout << "\nAverage = " << average << endl;

    return 0;
} 

void getArrayElements(double *array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "#" << (i + 1) << ": ";
        cin >> *(array + i);

    }
    
}
void displayArray(double *array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << "#" << (i + 1) << ": " << *(array + i) << endl;

}
void selectionSort(double *array, const int SIZE)
{
    int startScan, minIndex, minValue;

    for (startScan = 0; startScan < (SIZE - 1); startScan++)
    {
        minIndex = startScan;
        minValue = *(array + startScan);

        for (int index = startScan + 1; index < SIZE; index++)
        {
            if (*(array + index) < minValue)
            {
                minValue = *(array + index);
                minIndex = index;
            }
        }
        *(array + minIndex) = *(array + startScan);
        *(array + startScan) = minValue;
    }
}
double averageArrayElements(double *array, const int SIZE)
{
    double sum = 0;

    for (int i = 0; i < SIZE; i++)
        sum += *(array + i);

    return sum / SIZE;
}