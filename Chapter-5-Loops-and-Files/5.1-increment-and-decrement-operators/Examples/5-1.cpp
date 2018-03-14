//*****************************************************
// This program demonstrates the ++ and -- operators
//
// By: Jesus Hilario Hernandez
// Last Updated: December 29, 2016
//
// Used from: Gaddis, "Starting Out With C++", 
//  8th Edition, Pg. 228
//*****************************************************
#include <iostream>
using namespace std;

int main()
{
    int num = 4;    // num startes out with 4.

    // Display the value in num.
    cout << "The variable num is " << num << endl;
    cout << "I will now increment num.\n\n";

    // Use postfix ++ to increment num.
    num++;
    cout << "Now the variable num is " << num << endl;
    cout << "I will increment num again.\n\n";

    // Use prefix ++ to increment num.
    ++num;
    cout << "Now the variable is " << num << endl;
    cout << "I will decrement num.\n\n";

    // Use postfix -- to decrement num.
    num--;
    cout << "Now the variable num is " << num << endl;
    cout << "I will decrement num agian.\n\n";

    // Use prefix -- to increment num.
    --num;
    cout << "Now the variabe num is " << num << endl;
    return 0;
}
