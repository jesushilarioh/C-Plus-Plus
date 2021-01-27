#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int NUM_PRODS = 5,
              LENGTH = 27;
    
    char products[NUM_PRODS][LENGTH] = 
        {"TV327 31-inch Television",
         "CD257 CD Player",
         "TA677 Answering Machine",
         "CS109 Car Stereo",
         "PC955 Personal Computer" },
         
         lookUp[LENGTH],
         
         *strPtr = nullptr;

    int index;

    cout << "\tProduct Database\n\n"
         << "Enter a product number to search for: ";
    cin.getline(lookUp, LENGTH);

    for (index = 0; index < NUM_PRODS; index++)
    {
        // cout << products[index][index] << endl;
        // cout << products[index] << endl;
        strPtr = strstr(products[index], lookUp);
        if (strPtr != nullptr)
            break;
    }

    if (strPtr != nullptr)
        cout << products[index] << endl;
    else
        cout << "No matching product was found.\n";

    return 0;
}