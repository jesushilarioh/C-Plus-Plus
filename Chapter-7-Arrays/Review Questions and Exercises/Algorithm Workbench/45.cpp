/**
 * 45. In a program you need to store the populations of 
 * 12 countries.
 * 
 * A) Define two arrays that may be used in parallel to 
 * store the names of the countries and their populations.
 * 
 * B) Write a loop that uses these arrays to print each 
 * country’s name and its population.
 * 
 */
#include <iostream>
#include <string>

using namespace std;
int main()
{
    const int ARRAY_SIZE = 12;

    string country_names[ARRAY_SIZE] = { "France", "Spain", "Italy", "United States", 
                                         "Brazil", "Paraguay", "Germany", "Israel", 
                                         "Canada", "Egypt", "China", "Japan" }; 
                                         
    int country_populations[ARRAY_SIZE] = { 450000, 120000, 567000, 543000, 
                                            543000, 632000, 678000, 123000, 
                                            990000, 567000, 876000, 890400 };

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Country: " 
             << country_names[i]

             << " - Population: "
             << country_populations[i]
             
             << endl;
    }
    cout << endl;
    
    return 0;
} 