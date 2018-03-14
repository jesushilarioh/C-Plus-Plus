// This program produces a loan amortization chart for the
// Central Mountain Credit Union.
#include <iostream>
#include <iomanip>
#include <cmath>	// For pow function
using namespace std;

int main()
{
	const int MONTHS = 12;	// Months per year
	double loan,			// Loan amount
		   rate,			// Annual interest rate
		   years,			// Years of loan
		   balance,			// Monthly balance
		   term,			// Used to calculate payment
		   payment;			// Monthly payment

	// Ask user for input.
	cout << "Loan amount: $";
	cin >> loan;
	cout << "Annual interest rate: ";
	cin >> rate;
	cout << "Years of loan: ";
	cin >> years;

	// Calculate monthly payment.
	term = pow((1 + rate / MONTHS), MONTHS * years);
	payment = (loan * rate / MONTHS * term) / (term - 1.0);

	// Display monthly payment.
	cout << fixed << showpoint << setprecision(2);
	cout << "Monthly payment: $" << payment << endl;

	// Display report header.
	cout << endl;
	cout << setw(5) << "Month";
	cout << setw(10) << "Interest";
	cout << setw(10) << "Principal";
	cout << setw(10) << "Balance" << endl;
	cout << "----------------------------------------\n";

	// Produce a listing for each month.
	balance = loan;
	int numPayments = MONTHS * years;
	for (int month = 1; month <= numPayments; month++)
	{
		double minterest, principal;
		// Calculate monthly interest
		minterest = rate / MONTHS * balance;
		if (month != numPayments)
			principal = payment - minterest;

		else // If this is the last month
		{
			principal = balance;
			payment = balance + minterest;
		}

		// Calculate the new loan balance.
		balance -= principal;

		// Display payment figures
		cout << setw(4) << month;
		cout << setw(10) << minterest;
		cout << setw(10) << principal;
		cout << setw(10) << balance << endl;
	}
	return 0;
}