// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

//JESUS HILARIO HERNANDEZ

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;




int main()

{
    int   quantity;			// contains the amount of items purchased
    float itemPrice;		// contains the price of each item
    float totalBill;		// contains the total bill.
    string item;            //variable item


    //formatted outputed numbers
    cout << setprecision(2) << fixed << showpoint;

    //ask for name of item
    cout << "Please input the name of the item" << endl;

    //receiving name of item
    getline(cin, item);

    //ask for number of items bought
    cout << "Please input the number of items bought" << endl;

    //receiving qunatitiy
    cin >> quantity;

    //ask for price of each item
    cout << "Please input the price of each item" << endl;

    //receiving price of item
    cin >> itemPrice;

    //calculate quantity * itemPrice
    totalBill = quantity * itemPrice;

    //display item bought and total cost
    cout << "The item that you bought is " << item << "\nThe total bill is $" << totalBill <<
    endl << endl;

    // with a label to the screen.

    return 0;
}
