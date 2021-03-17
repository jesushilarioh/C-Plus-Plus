/**
 * This program uses strcmp to compare the string entered
 * by the user with the valid MP3 player part numbers.
 *
 */
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    const double A_PRICE = 99.0,
                 B_PRICE = 199.0;
    
    const int PART_LENGTH = 9;
    char partNum[PART_LENGTH];

    cout << "The MP3 player part numbers are: \n"
         << "\t16 Gigabyte, part number S147-29A\n"
         << "\t32 Gigabyte, part number S147-29B\n"
         << "Enter the part number of the MP3 player you\n"
         << "wish to purchase: ";

    cin >> partNum;

    cout << showpoint << fixed << setprecision(2);
    // if (strcmp(partNum, "S147-29A") == 0)
    // same as
    if (!strcmp(partNum, "S147-29A"))
        cout << "Ther price is $" << A_PRICE << endl;
    // else if (strcmp(partNum, "S147-29B") == 0)
    // same as
    else if (!strcmp(partNum, "S147-29B"))
        cout << "The price is $" << B_PRICE << endl;
    else
        cout << partNum << " is not a valid part number.\n";

    return 0;
}