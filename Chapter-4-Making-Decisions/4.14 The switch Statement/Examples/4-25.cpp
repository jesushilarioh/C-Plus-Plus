//***************************************************************
// This program is carefully constructed to use the "fall through"
// feature of the switch statement.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 21, 2016
// Used from : Gaddis, "Starting Out With C++",
//  8th Edition, Pg 205-206
//***************************************************************
#include <iostream>
using namespace std;

int main()
{
    int modelNum;   // Model numbers

    // Get a model number from the user.
    cout << "Our TVs come in three models:\n";
    cout << "The 100, 200, and 300. Which do you want? ";
    cin >> modelNum;

    // Display the model's features.
    cout << "That model has the following features:\n";
    switch (modelNum)
    {
        case 100: cout << "\tPicture-in-a-picture.\n";
        case 200: cout << "\tStereo sound.\n";
        case 300: cout << "\tRemote control.\n";
                  break;
        default:  cout << "You can only choose the 100,";
                  cout << "200, or 300.\n";
    }
    return 0;
}
