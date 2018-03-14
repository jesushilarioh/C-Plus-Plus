// This program uses reference variables as function parameters.
#include <iostream>
using namespace std;

// Function prototypes. Both functions use reference variables
// as parameters.
void doubleNum(int &);
void getNum(int &);

int main()
{
   int value;
   
   // Get a number and store it in value.
   getNum(value);
   
   // Double the number stored in value.
   doubleNum(value);
   
   // Display the resulting number.
   cout << "That value doubled is " << value << endl;
   return 0;
}

//*************************************************************
// Definition of getNum.                                      *
// The parameter userNum is a reference variable. The user is *
// asked to enter a number, which is stored in userNum.       *
//*************************************************************

void getNum(int &userNum)
{
   cout << "Enter a number: ";
   cin >> userNum;
}

//**********************************************************
// Definition of doubleNum.                                *
// The parameter refVar is a reference variable. The value *
// in refVar is doubled.                                   *
//**********************************************************

void doubleNum (int &refVar)
{
   refVar *= 2;
}