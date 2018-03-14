// This program uses a type cast to avoid integer division.
#include <iostream>
using namespace std;

int main()
{
   int books;        // Number of books to read
   int months;       // Number of months spent reading
   double perMonth;  // Average number of books per month

   cout << "How many books do you plan to read? ";
   cin >> books;
   cout << "How many months will it take you to read them? ";
   cin >> months;
   perMonth = static_cast<double>(books) / months;
   cout << "That is " << perMonth << " books per month.\n";
   return 0;
} 