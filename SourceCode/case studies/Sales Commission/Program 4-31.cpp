// This program is used by Crazy Al's Computer Emporium
// to calculate the monthly pay of commissioned sales people.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
   double sales,        // Monthly Sales
          rate,         // Rate of Commission
          commission,   // Amount of Commission
          advance,      // Advanced Pay Drawn
          pay;          // Pay remaining to be paid

   // Ask user for the salesperson's sales and the
   // amount of advanced pay.
   cout << "Enter the salesperson's monthly sales: ";
   cin >> sales;
   cout << "Enter the amount of advanced pay for this ";
   cout << "salesperson: ";
   cin >> advance;
   
   // Determine the commission rate.
   if (sales < 10000)
      rate = 0.05;
   else if (sales < 14999)
      rate = 0.1;
   else if (sales < 17999)
      rate = 0.12;
   else if (sales < 21999)
      rate = 0.14;
   else
      rate = 0.16;

   // Calculate the sales commission.
   commission = sales * rate;

   // Calculate the salesperson's pay.
   pay = commission - advance;

   // Display the results.
   cout << fixed << showpoint << setprecision(2);
   cout << "\nPay Results\n";
   cout << "-----------\n";
   cout << "Sales: $" << sales << endl;
   cout << "Commission Rate: " << rate << endl;
   cout << "Commission: $" << commission << endl;
   cout << "Advanced Pay: $" << advance << endl;
   cout << "Remaining Pay: $" << pay << endl;
   return 0;
}