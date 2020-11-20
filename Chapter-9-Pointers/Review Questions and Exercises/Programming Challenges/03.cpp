/**
 * 3. Drop Lowest Score
 * 
 * Modify Problem 2 above so the lowest test score is 
 * dropped. This score should not be included in the 
 * calculation of the average.
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
    double lowest_value = *(array + 0),
           sum = lowest_value;

    for (int i = 1; i < SIZE; i++)
    {
        if (*(array + i) < lowest_value)
            lowest_value = *(array + i);

        sum += *(array + i);
    }        

    sum -= lowest_value;

    return sum / (SIZE - 1);
}