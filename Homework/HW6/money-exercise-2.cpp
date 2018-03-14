#include <iostream>
#include <iomanip>
using namespace std;

//JESUS HILARIO HERNANDEZ

void normalizeMoney(float& dollars, int cents = 150);
// This function takes cents as an integer and converts it to dollars
// and cents.  The default value for cents is 150 which is converted
// to 1.50 and stored in dollars

int main()
{
    int cents;
    float dollars;

    cout << setprecision(2) << fixed << showpoint;

    cents = 95;
    cout << "\n We will now add 95 cents to our dollar total\n";

    //  Fill in the code to call normalizeMoney to add 95 cents
    normalizeMoney(dollars, cents);

    cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
    cout << "\n We will now add 193 cents to our dollar total\n";

    // Fill in the code to call normalizeMoney to add 193 cents
    cents = 193;
    normalizeMoney(dollars, cents);

    cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";
    cout << "\n We will now add the default value to our dollar total\n";

    // Fill in the code to call normalizeMoney to add the default value of cents
    normalizeMoney(dollars);

    cout << "Converting cents to dollars resulted in " << dollars << " dollars\n";

    return 0;
}

//  *******************************************************************************
//                               normalizeMoney
//
//   task:      This function is given a value in cents.  It will convert cents
//              to dollars and cents which is stored in a local variable called
//              total which is sent back to the calling function through the
//              parameter dollars.  It will keep a running total of all the money
//              processed in a local static variable called sum.
//
//   data in:   cents which is an integer
//   data out:  dollars  (which alters the corresponding actual parameter)
//
//   *********************************************************************************

void normalizeMoney(float& dollars, int cents)
{

    float total=0;

    // Fill in the definition of sum as a static local variable
    static float sum = 0.0;

    // Fill in the code to convert cents to dollars
    dollars = cents * .01;
    total = total + dollars;
    sum = sum + dollars;

    cout << "We have added another $" << dollars <<"  to our total" << endl;
    cout << "Our total so far is  $" << sum << endl;
    cout << "The value of our local variable total is $" << total << endl;
}
