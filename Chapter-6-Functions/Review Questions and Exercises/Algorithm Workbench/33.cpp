/********************************************************************
*
*	  33. The following statement calls a function named half. 
*         The half function returns a value that is half that of 
*         the argument. Write the function.
*
*         result = half(number);
*
* 	Jesus Hilario Hernandez
* 	December 3, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

// ANSWER:
double half(double x)
{
    return x / 2.0;
}

int main()
{
    double number = 9,
           result;
           
    result = half(number);

    cout << result << endl;
    return 0;
}

