//***************************************************
// This program assists a technician in the process
// of checking a substance's temperature.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 29, 2016
//
// Used from: Gaddis, "Starting Out With C++",
//  8th Edition, Pg.238
//***************************************************
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
        cout << "The take the celsius temperature again\n";
        cout << "and enter it here: ";
        cin >> temperature;
    }

    // Remind the technician to check the temperature
    // again in 15 minutes.
    cout << "The temperature is acceptable.\n";
    cout << "Check it again in 15 minutes.\n";

    return 0;
}
