// This program takes two numbers (pay rate & hours)
// and multiplies them to get grosspay
// it then calculates net pay by subtracting 15%

// JESUS HILARIO HERNANDEZ

#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void printDescription();
void computePaycheck(float, int, float&, float&);

int main()
{
	float payRate;
	float grossPay;
	float netPay;
	int hours;

	cout << setprecision(2) << fixed;

	cout << "Welcome to the Pay Roll Program" << endl;

	printDescription(); //Call to Description function

	cout << "Please input the pay per hour" << endl;
	cin >> payRate;

	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;
	cout << endl << endl;

	computePaycheck(payRate,hours,grossPay,netPay);

	//  Fill in the code to output grosspay
	cout << "The gross pay is $" << static_cast<int>(grossPay) << endl;
	cout << "The net pay is $" << static_cast<int>(netPay) << endl;
	cout << "We hoped you enjoyed this program" << endl;

	return 0;
}

//   ********************************************************************
//                         printDescription
//
//   task:     This function prints a program description
//   data in:  none
//   data out: none
//
//   ********************************************************************

void printDescription() //The function heading
{
    cout << "************************************************"  << endl << endl;
    cout << "This program takes two numbers (pay rate & hours)" << endl;
	cout << "and  multiplies them to get gross pay "            << endl;
    cout << "it then calculates net pay by subtracting 15%"     << endl;
	cout << "************************************************"  << endl << endl;
}

//  *********************************************************************
//                        computePaycheck
//
//   task:     This function takes rate and time and multiples them to
//             get gross pay and then finds net pay by subtracting 15%.
//   data in:  pay rate and time in hours worked
//   data out: the gross and net pay
//
//   ********************************************************************

void computePaycheck(float rate, int time, float& gross, float& net)
{
	//  Fill in the code to find grosspay and net pay
  gross = rate * time; net = (gross) - (gross * .15);
}
