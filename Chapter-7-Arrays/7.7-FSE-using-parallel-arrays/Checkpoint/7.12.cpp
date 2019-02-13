// What is the output of the following code? (You may need to use a calculator.)
// double balance[5] = {100.0, 250.0, 325.0, 500.0, 1100.0}; 
// const double INTRATE = 0.1;
// cout << fixed << showpoint << setprecision(2); 
// for (int count = 0; count < 5; count++)
// cout << (balance[count] * INTRATE) << endl;

// 10.00
// 25.00
// 32.50
// 50.00
// 110.00

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double balance[5] = {100.0, 250.0, 325.0, 500.0, 1100.0}; 
    const double INTRATE = 0.1;

    cout << fixed << showpoint << setprecision(2);

    for (int count = 0; count < 5; count++)
        cout << (balance[count] * INTRATE) << endl;

    return 0;
}

