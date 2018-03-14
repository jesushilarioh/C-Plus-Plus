//**********************************************************
// This program tracks the inventory of three widget stores
// that opened at the same time. Each store started with the
// same number of widgets in inventory. By subtracting the
// number of widgets each store has sold from its inventory,
// the current inventory can be calculated.
//
// By: Jesus Hilari Hernandez
// Last Updated: December 10, 2016
//**********************************************************
#include <iostream>
using namespace std;

int main()
{
    int begInv,     // Beginning inventory for all stores
        sold,       // Number of widgets sold
        store1,     // Store 1's inventory
        store2,     // Store 2's inventory
        store3;     // Store 3's inventory

    // Get the beginning inventory for all stores.
    cout << "One week ago, 3 new widget stores opened.\n";
    cout << "at the same time with the same beginning\n";
    cout << "inventory. What was the beginning inventory? ";
    // Error check
    while (!(cin >> begInv))
    {
        // Explain Error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
    }

    // Set eat store's inventory
    store1 = store2 = store3 = begInv;

    // Get the number of widgets sold in store 1.
    cout << "How many widgets has store 1 sold? ";
    // Error check
    while (!(cin >> sold))
    {
        // Explain Error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
    }
    store1 -= sold; // Adjust store 1's inventory.

    // Get the number of widgets sold in store 2.
    cout << "How many widgets has store 2 sold? ";
    // Error check
    while (!(cin >> sold))
    {
        // Explain Error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
    }
    store2 -= sold; // Adjust store 1's inventory.

    // Get the number of widgets sold in store 3.
    cout << "How many widgets has store 3 sold? ";
    // Error check
    while (!(cin >> sold))
    {
        // Explain Error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
    }
    store3 -= sold; // Adjust store 1's inventory.

    // Display each store's current inventory.
    cout << "Store 1: " << store1 << endl;
    cout << "Store 2: " << store2 << endl;
    cout << "Store 3: " << store3 << endl;
    return 0;
}
