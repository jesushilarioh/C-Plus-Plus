//***********************************************************
// This program utilizes passing arrays as arguments
// to print ASCII characters.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: May 5th, 2017
//***********************************************************
#include <iostream>
using namespace std;

// Function Prototypes
void fillArray(char [], int);
void showArray(const char [], int);

int main()
{
    const int SIZE = 8;
    char prodCode[SIZE];
    fillArray(prodCode, SIZE);
    showArray(prodCode, SIZE);
    return 0;
}

//***********************************************************
// The fillArray function fills the passed array with ASCII
// characters. (Hint: 65 is the ASCII code for 'A')
//***********************************************************
void fillArray(char arr[], int size)
{
    char code = 65;
    for (int k = 0; k < size; code++, k++)
    {
        arr[k] = code;
    }
}
//***********************************************************
// The showArray function prints the passed array of ASCII
// characters.
//***********************************************************
void showArray(const char codes[], int size)
{
    for (int k = 0; k < size; k++)
    {
        cout << codes[k];
    }
    cout << endl;
}
