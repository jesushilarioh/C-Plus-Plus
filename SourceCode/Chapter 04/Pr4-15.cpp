// This program demonstrates the && logical operator.
#include <iostream>
using namespace std;

int main()
{
   char employed,    // Currently employed, Y or N
        recentGrad;  // Recent graduate, Y or N

   // Is the user employed and a recent graduate?
   cout << "Answer the following questions\n";
   cout << "with either Y for Yes or N for No.\n";

   cout << "Are you employed? ";
   cin >> employed;
   
   cout << "Have you graduated from college "
        << "in the past two years? ";
   cin >> recentGrad;

   // Determine the user's loan qualifications.
   if (employed == 'Y' && recentGrad == 'Y')
   {
      cout << "You qualify for the special "
           << "interest rate.\n";
   }
   else
   {
      cout << "You must be employed and have\n"
           << "graduated from college in the\n"
           << "past two years to qualify.\n";
   }
   return 0;
} 