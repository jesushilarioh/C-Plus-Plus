// This program calculates the volume (in cubic feet),
// cost, customer price, and profit of any crate that
// is built.

//JESUS HILARIO HERNANDEZ

//Last modified: 9/26/2016

#include <iostream>       //for input output. This is the only library needed.
#include <iomanip>      // for setprecision() and formatting.
using namespace std;

int main()
{
    const double COST_PER_CUBIC_FOOT = 0.23;    //2 const double integers
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    double  length, //7 double integers TBD
            width,
            height,
            volume,
            cost,
            charge,
            profit;

    //Set the desired output formatting for numbers
    cout << setprecision(2) << fixed << showpoint;

    //Ask and receive crate's length from user
    cout << "Enter the crate's length: ";
    cin >> length;

    //Ask and receive crate's width from user
    cout << "Enter the crate's width: ";
    cin >> width;

    //Ask and receive crate's height from user
    cout << "Enter the crate's height: ";
    cin >> height;



    //Calculates and displays the volume of the crate.
    volume = length * width * height;
    cout << "\nThe crate's volume is: " << volume << " cubic feet." << endl;

    //Calculates and displays the cost of building the crate.
    cost = volume * COST_PER_CUBIC_FOOT;
    cout << "The cost to make the crate is: $" << cost << endl;

    //Calculates and displays the customer's charge.
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    cout << "Your charge is: $" << charge << endl;

    //Calculates and displays the profit made.
    profit = charge - cost;
    cout << "The profit made is: $" << profit << endl << endl;


    return 0;
}
