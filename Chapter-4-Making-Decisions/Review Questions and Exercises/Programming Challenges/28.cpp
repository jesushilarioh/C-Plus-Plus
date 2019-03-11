// Vegetarian, Vegan, Gluten-Free

// yes, yes, yes
// Corner Cafe
// The Chef's Kitchen
// yes, no, no
// Main Street Pizza Company
// Corner Cafe
// Mama's Fine Italian
// The Chef's Kitchen
// yes, yes, no
// Corner Cafe
// The Chef's Kitchen
// yes, no, yes
// Main Street Pizza Company
// Corner Cafe
// The Chef's Kitchen



// no, yes, yes
// Corner Cafe
// The Chef's Kitchen
// no, no, no
// Joe's Gourmet Burgers
// Main Street Pizza Company
// Corner Cafe
// Mama's Fine Italian
// The Chef's Kitchen
// no, yes, no
// Corner Cafe
// The Chef's Kitchen
// no, no, yes
// Main Street Pizza Company
// Corner Cafe
// The Chef's Kitchen

#include <iostream>
using namespace std;
int main()
{
    string vegetarian,
           vegan,
           gluten_free;

    cout << "Is anyone in your party a vegetarian? ";
    cin >> vegetarian;
    if (vegetarian == "yes" || vegetarian == "no") 
    {
        cout << "Is anyone in your party a vegan? ";
        cin >> vegan;

        if (vegan == "yes" || vegan == "no") 
        {
            cout << "Is anyone in your party a gluten-free? ";
            cin >> gluten_free;

            if (gluten_free == "yes" || gluten_free == "no") 
            {
                cout << "\nHere are your restaurant choices: \n";
                if(vegetarian == "yes") // 1
                {
                    if(vegan == "yes") // 1, 1
                    {
                        if (gluten_free == "yes" || gluten_free == "no") // 1, 1, 1 || 1, 1, 0
                        {
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                    else // 1, 0
                    {
                        if (gluten_free == "yes") // 1, 0, 1
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                        else // 1, 0, 0
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   Mama's Fine Italian\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                }
                else // 0
                {
                    if(vegan == "no") // 0, 0
                    {
                        if (gluten_free == "no") // 0, 0, 0
                        {
                            cout << "   Joe's Gourmet Burgers\n";
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   Mama's Fine Italian\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                        else //0, 0, 1
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                    else // 0, 1
                    {
                        if (gluten_free == "no" || gluten_free == "yes") // 0, 1, 0 || 0, 1, 1
                        {
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                }
            }
            else 
            {
                cout << "\nError. \"yes\" or \"no\" must be chosen.\n"
                     << "Rerun the program and try again."
                     << endl;
            }
        }
        else 
        {
            cout << "\nError. \"yes\" or \"no\" must be chosen.\n"
                 << "Rerun the program and try again."
                 << endl;
        }   
    }
    else 
    {
        cout << "\nError. \"yes\" or \"no\" must be chosen.\n"
             << "Rerun the program and try again."
             << endl;
    }

    cout << endl;

    return 0;
}