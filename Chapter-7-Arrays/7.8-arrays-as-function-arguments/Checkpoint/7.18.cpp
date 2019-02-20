// 7.18 The following program skeleton, when completed, will 
// ask the user to enter 10 integers, which are stored in an 
// array. The function avgArray, which you must write, 
// is to calculate and return the average of the numbers entered.
#include <iostream> 
using namespace std;

// Write your function prototype here
double avgArray(int[], int);

int main() 
{
    const int SIZE = 10;
    int userNums[SIZE];

    cout << "Enter 10 numbers:\n";
    for(int count = 0; count < SIZE; count++)
    {
        cout << "#" << (count + 1) << " ";
        cin >> userNums[count];
    }
    cout << "The average of those numbers is "
         << avgArray(userNums, SIZE) << endl; //ABCDEFGH
    
    return 0;
}
//
// Write the function avgArray here. 
//
double avgArray(int array[], int SIZE)
{
    double total;
    for(int i = 0; i < SIZE; i++)
    {
        total += array[i];
    }

    return total / static_cast<double>(SIZE);
}