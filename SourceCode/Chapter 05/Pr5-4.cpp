// This program assists a technician in the process
// of checking a substance's temperature.
#include <iostream>
using namespace std;

int main()
{
   const double MAX_TEMP = 102.5;  // Maximum temperature
   double temperature;             // To hold the temperature

   // Get the current temperature.
   cout << "Enter the substance's Celsius temperature: ";
   cin >> temperature;

   // As long as necessary, instruct the technician
   // to adjust the thermostat.
   while (temperature > MAX_TEMP)
   {
      cout << "The temperature is too high. Turn the\n";
      cout << "thermostat down and wait 5 minutes.\n";
      cout << "Then take the Celsius temperature again\n";
      cout << "and enter it here: ";
      cin >> temperature;
   }

   // Remind the technician to check the temperature
   // again in 15 minutes.
   cout << "The temperature is acceptable.\n";
   cout << "Chek it again in 15 minutes.\n";

   return 0;
}