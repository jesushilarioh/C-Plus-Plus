// 7.17 What is the output of the following program? 
//      (You may need to consult the ASCII table in 
//      Appendix B.)
//
// Answer: ABCDEFGH
//

#include <iostream> 
using namespace std;

void fillArray(char [], int); 
void showArray(const char [], int);

int main () 
{
    const int SIZE = 8;
    char prodCode[SIZE] = {'0', '0', '0', '0', '0', '0', '0', '0'};
    fillArray(prodCode, SIZE);
    showArray(prodCode, SIZE);
    return 0;
}
// Definition of function fillArray.
// (Hint: 65 is the ASCII code for 'A')
void fillArray(char arr[], int size)
{
    char code = 65;
    for(int k = 0; k < size; code++, k++)
    arr[k] = code;
}

// Definition of function showArray.
void showArray(const char codes[], int size)
{
    for(int k = 0; k < size; k++)
        cout << codes[k];
    cout << endl;
}