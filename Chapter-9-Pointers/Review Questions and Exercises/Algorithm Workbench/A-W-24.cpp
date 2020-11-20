#include <iostream>
using namespace std;

void getNumber(int *);

int main()
{
    // 24. Look at the following code.
    double value = 29.7; 
    double *ptr = &value;
    // Write a cout statement that uses the ptr variable to display the contents of the value variable.
    cout << "ptr = " << *ptr << endl;




    // 25. Look at the following array definition.
    int set[10];
    // Write a statement using pointer notation that stores the value 99 in set[7];
    *(set + 7) = 99;
    cout << "set[7] = " << set[7] << endl;




    // 26. Write code that dynamically allocates an array of 20 integers, 
    // then uses a loop to allow the user to enter values for each element of the array.
    // const int ARRAY_SIZE = 20;
    // int *ptrArray = new int[ARRAY_SIZE];

    // cout << "Enter number for each array element: " << endl;
    // for (int i = 0; i < ARRAY_SIZE; i++)
    // {
    //     cout << "#" << (i + 1) << ": ";
    //     cin >> *(ptrArray + i);
    // }
    // for (int i = 0; i < ARRAY_SIZE; i++)
    //     cout << "#" << (i + 1) << ": " << *(ptrArray + i) << endl;
    
    // delete [] ptrArray;
    // ptrArray = nullptr;




    // 27. Assume that tempNumbers is a pointer that points to a dynamically allocated array. Write code that releases the memory used by the array.
    int *tempNumbers = new int[10];

    delete [] tempNumbers;
    tempNumbers = nullptr;


    // 28. Look at the following function definition.
    // In this function, the parameter n is a reference variable. Rewrite the function so that n is a pointer.
    int number = 10;
    int *numberPtr = &number;
    cout << "number    = " << number << endl;
    cout << "numberPtr = " << *numberPtr << endl;
    getNumber(numberPtr);
    cout << "number    = " << number << endl;
    cout << "numberPtr = " << *numberPtr << endl;




    // 29. Write the definition of ptr, a pointer to a constant int.
    const int NUMBER = 100;
    const int *constPtr = &NUMBER;
    // getNumber(constPtr); // Invalid. Parameter is int, not const int.




    // 30. Write the definition of ptr, a constant pointer to an int.
    int value2 = 22;
    int *const constPtr2 = &value2;
    cout << "value2    = " << value2 << endl;
    cout << "constPtr2 = " << *constPtr2 << endl;
    getNumber(constPtr2);
    cout << "value2    = " << value2 << endl;
    cout << "constPtr2 = " << *constPtr2 << endl;
    
    return 0;
}

void getNumber(int *n) 
{
    cout << "Enter a number: ";
    cin >> *n; 
}
// In this function, the parameter n is a reference variable. Rewrite the function so that n is a pointer.