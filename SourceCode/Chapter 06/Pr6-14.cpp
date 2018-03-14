// This program converts cups to fluid ounces.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void showIntro();
double getCups();
double cupsToOunces(double);

int main()
{
   // Variables for the cups and ounces.
   double cups, ounces;

   // Set up numeric output formatting.
   cout << fixed << showpoint << setprecision(1);

   // Display an intro screen.
   showIntro();

   // Get the number of cups.
   cups = getCups();

   // Convert cups to fluid ounces.
   ounces = cupsToOunces(cups);

   // Display the number of ounces.
   cout << cups << " cups equals " 
       << ounces << " ounces.\n";

   return 0;
}

//******************************************
// The showIntro function displays an      *
// introductory screen.                    *
//******************************************

void showIntro()
{
   cout << "This program converts measurements\n"
       << "in cups to fluid ounces. For your\n"
       << "reference the formula is:\n"
       << "    1 cup = 8 fluid ounces\n\n";
}

//******************************************
// The getCups function prompts the user   *
// to enter the number of cups and then    *
// returns that value as a double.         *
//******************************************

double getCups()
{
   double numCups;

   cout << "Enter the number of cups: ";
   cin >> numCups;
   return numCups;
}

//******************************************
// The cupsToOunces function accepts a     *
// number of cups as an argument and       *
// returns the equivalent number of fluid  *
// ounces as a double.                     *
//******************************************

double cupsToOunces(double numCups)
{
   return numCups * 8.0;
}