/**
 * The arrays numberArray1 and numberArray2 have 100 elements. 
 * Write code that copies the values in numberArray1 to numberArray2.
 */
#include <iostream>
using namespace std;
int main()
{
    const int ARRAY_SIZE = 100;
    int numberArray1[ARRAY_SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                                    10,11,12,13,14,15,16,17,18,19,
                                    20,21,22,23,24,25,26,27,28,29,
                                    30,31,32,33,34,35,36,37,38,39,
                                    40,41,42,43,44,45,46,47,48,49,
                                    50,51,52,53,54,55,56,57,58,59,
                                    60,61,62,63,64,65,66,67,68,69,
                                    70,71,72,73,74,75,76,77,78,79,
                                    80,81,82,83,84,85,86,87,88,89,
                                    90,91,92,93,94,95,96,97,98,99};
    int numberArray2[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numberArray2[i] = numberArray1[i];

        cout << numberArray2[i] << ", ";
        if (i % 10 == 0 && i != 0)
            cout << endl;
    }
    cout << endl;
    
        
    return 0;
}