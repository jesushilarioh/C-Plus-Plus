// This program calculates the area of a circle. It asks the user
// if he or she wishes to continue. A loop that demonstrates the
// toupper function repeats until the user enters 'y', 'Y',
// 'n', or 'N'.
#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
   const double PI = 3.14159;  // Constant for Pi
   double radius;              // The circle's radius
   char goAgain;               // To hold Y or N

   cout << "This program calculates the area of a circle.\n";
   cout << fixed << setprecision(2);

   do
   {
      // Get the radius and display the area.
      cout << "Enter the circle's radius: ";
      cin >> radius;
      cout << "The area is " << (PI * radius * radius);
      cout << endl;

      // Does the user want to do this again?
      cout << "Calculate another? (Y or N) ";
      cin >> goAgain;

      // Validate the input.
      while (toupper(goAgain) != 'Y' && toupper(goAgain) != 'N')
      {
         cout << "Please enter Y or N: ";
         cin >> goAgain;
      }

   } while (toupper(goAgain) == 'Y');
   return 0;
}