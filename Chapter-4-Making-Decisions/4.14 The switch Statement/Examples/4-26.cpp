//****************************************************************
// The switch statement in this program uses the "fall through"
// feature to catch both uppercase and lowercase letters entered
// by the user.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 21, 2016
// Used from : Gaddis, "Starting Out With C++",
//  8th Edition, Pg 206-207
//****************************************************************
#include <iostream>
using namespace std;

int main()
{
    char feedGrade;

    // Get the desired grade of feed.
    cout << "Our pet food is available in three grades:\n";
    cout << "A, B, or C. Which do you want pricing for? ";
    cin >> feedGrade;

    // Display the price.
    switch (feedGrade)
    {
        case 'a':
        case 'A': cout << "30 cents per pound.\n";
                  break;
        case 'b':
        case 'B': cout << "20 cents per pound.\n";
                  break;
        case 'c':
        case 'C': cout << "15 cents per pound.\n";
                  break;
        default : cout << "That is an invalid choice.\n";
    }
    return 0;
}
