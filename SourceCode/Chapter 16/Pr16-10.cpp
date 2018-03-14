// This program demonstrates an overloaded function template.
#include <iostream>
using namespace std;

template <class T>
T sum(T val1, T val2)
{
   return val1 + val2;
}

template <class T>
T sum(T val1, T val2, T val3)
{
   return val1 + val2 + val3;
}

int main()
{
   double num1, num2, num3;

   // Get two values and display their sum.
   cout << "Enter two values: ";
   cin >> num1 >> num2;
   cout << "Their sum is " << sum(num1, num2) << endl;
   
   // Get three values and display their sum.
   cout << "Enter three values: ";
   cin >> num1 >> num2 >> num3;
   cout << "Their sum is " << sum(num1, num2, num3) << endl;
   return 0;
}