#include <iostream>
using namespace std;

int main()
{
    const int NUM_OF_GALLONS = 20;

    float in_town_MPG = 23.5,
          out_of_town_MPG = 28.5,

          in_town_distance = NUM_OF_GALLONS * in_town_MPG,
          out_of_town_distance = NUM_OF_GALLONS * out_of_town_MPG;

    cout << endl;
    cout << "The distance a car can travel in town\n";
    cout << "on a 20-gallon gas tank at ";
    cout << in_town_MPG << " MPG is ";
    cout << in_town_distance << " miles." << endl;
    cout << endl;
    cout << "The distance a car can travel on the highway\n";
    cout << "on a 20-gallon tank of gas at ";
    cout << out_of_town_MPG << " MPG is ";
    cout << out_of_town_distance << " miles." << endl;
    cout << endl;

    return 0;
}