#include <iostream>
using namespace std;

int main()
{
    const double MIL_PER_YEAR = 1.5;
    int five_years = 5,
        seven_years = 7,
        ten_years = 10;
    float mils_after_5 = MIL_PER_YEAR * five_years,
          mils_after_7 = MIL_PER_YEAR * seven_years,
          mils_after_10 = MIL_PER_YEAR * ten_years;
    
    cout << endl;
    cout << "The ocean's level will grow " << mils_after_5;
    cout << " millimeters after 5 years." << endl;
    cout << "The ocean's level will grow " << mils_after_7;
    cout << " millimeters after 7 years." << endl;
    cout << "The ocean's level will grow " << mils_after_10;
    cout << " millimeters after 10 years." << endl;
    return 0;
}