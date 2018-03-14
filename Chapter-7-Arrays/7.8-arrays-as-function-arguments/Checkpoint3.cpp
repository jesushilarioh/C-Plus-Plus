#include <iostream>
using namespace std;

// Function Prototypes
void fillArray(char[], int);
void showArray(const char[], int);
int avgArray(int[], int);

int main()
{
    // 7.14
    double array1[4] = {1.2, 3.2, 4.2, 5.2};
    double array2[4] = {7.8, 6.7, 8.2, 5.2};

    for (int count = 0; count < 4; count++)
    {
        array1[count] = array2[count];
        cout << "array1 subscript " << count << " is: "
             << array1[count] << endl;
        cout << "array2 subscript " << count << " is: "
             << array2[count] << endl;
    }

    cout << "\nThis is what array1 looks like: ";
    for(double count : array1)
    {
        cout << count << " ";
    }

    cout << "\nThis is what array2 looks like: ";
    for(double count : array2)
    {
        cout << count << " ";
    }
    cout << endl << endl;


    // 7.17
    const int SIZE = 7;
    char prodCode[SIZE] = {'0','0','0','0','0','0','0',};
    fillArray(prodCode, SIZE);
    showArray(prodCode, SIZE);


    // 7.18
    const int SIZE1 = 10;
    int userNums[SIZE1];

    cout << "Enter 10 numbers: " << endl;
    for(int count = 0; count < SIZE1; count++)
    {
        cout << "#" << (count + 1) << " ";
        cin >> userNums[count];
    }

    cout << "The average of those numbers is ";
    cout << avgArray(userNums, SIZE1) << endl;

    return 0;
}

// **********************************************
// avgArray adds user entered number then       *
// calculates the average.                      *
//***********************************************

int avgArray(int arr[], int size)
{

    int average;
    int sum = 0;
    int numOfNumbers = 0;
    for(int total = 0, count = 0; count < size; total++, count++)
    {
        numOfNumbers++;
        sum += arr[count];
    }
    average = sum / numOfNumbers;
    return average;
}

//***********************************************
// Definition of function fillArray.            *
// (Hint: 65 is the ASCII code for 'A')         *
//***********************************************

void fillArray(char arr[], int size)
{
    char code = 65;
    for (int k = 0; k < size; code++, k++)
    {
        arr[k] = code;
    }
}

//***************************************
// Definition of function showArray.    *
//***************************************
void showArray(const char codes[], int size)
{
    for (int k = 0; k < size; k++)
    {
        cout << codes[k];
        for (int i = 0; i < size; i++)
        {
            cout << codes[i];
        }
        cout << endl;
    }
    cout << endl;
}
