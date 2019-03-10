#include <iostream>
using namespace std;
int main()
{
    bool vegetarian,
         vegan,
         gluten_free;

    char user_choice;

    cout << "Is anyone in your party a vegetarian? ";
    cin >> user_choice;
    if (user_choice == 'y' || user_choice == 'Y' || user_choice == 'n' || user_choice == 'N') 
    {
        vegetarian = (user_choice == 'y' || user_choice == 'Y') ? 1 : 0;

        cout << "Is anyone in your party a vegan? ";
        cin >> user_choice;

        if (user_choice == 'y' || user_choice == 'Y' || user_choice == 'n' || user_choice == 'N')
        {
            vegan = (user_choice == 'y' || user_choice == 'Y') ? 1 : 0;

            cout << "Is anyone in your party a gluten-free? ";
            cin >> user_choice;

            if (user_choice == 'y' || user_choice == 'Y' || user_choice == 'n' || user_choice == 'N') 
            {
                gluten_free = (user_choice == 'y' || user_choice == 'Y') ? 1 : 0;
            }
            else
            {
                cout << "Error. Choose either Y for yes or\n"
                     << "N for no."
                     << endl;
            }

        }
        else
        {
            cout << "Error. Choose either Y for yes or\n"
                 << "N for no."
                 << endl;
        }    
    }
    else 
    {
        cout << "Error. Choose either Y for yes or\n"
             << "N for no."
             << endl;
    }

    

    // Joe's Gourmet Burgers
    // Main Street Pizza Company
    // Corner Cafe
    // Mama's Fine Italian
    // The Chef's Kitchen

    if(vegetarian == 1) // 1
    {
        // Main Street Pizza Company
        // Corner Cafe
        // Mama's Fine Italian
        // The Chef's Kitchen
        if(vegan == 1) // 1, 1
        {
            // Corner Cafe
            // The Chef's Kitchen
            if (gluten_free == 1 || gluten_free == 0) // 1, 1, 1 || 1, 1, 0
            {
                cout << "   Corner Cafe\n";
                cout << "   The Chef's Kitchen\n";
            }
            
        }
        else // 1, 0
        {
            // Main Street Pizza Company
            // Corner Cafe
            // Mama's Fine Italian
            // The Chef's Kitchen
            if (gluten_free == 1) // 1, 0, 1
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
        if(vegan == 0) // 0, 0
        {
            if (gluten_free == 0) // 0, 0, 0
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
            if (gluten_free == 0 || gluten_free == 1) // 0, 1, 0 || 0, 1, 1
            {
                cout << "   Corner Cafe\n";
                cout << "   The Chef's Kitchen\n";
            }
        }
    }
    
    
    cout << endl;
    return 0;
}