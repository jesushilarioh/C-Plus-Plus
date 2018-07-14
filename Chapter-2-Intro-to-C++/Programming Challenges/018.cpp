#include <iostream>
using namespace std;

int main()
{
    const int NUM_SURVEYED = 16500;

    float percent_1_or_more = .15,
          percent_pref_citrus = .58,
          total_1_or_more = NUM_SURVEYED * percent_1_or_more,
          grand_total = total_1_or_more * percent_pref_citrus;

    cout << endl << endl;
    cout << "The approximate # of customers in the survey who\n";
    cout << "purchase on or more energy drinks per week is ";
    cout << total_1_or_more << endl;
    
    cout << "The approximate # of customers in the survey who\n";
    cout << "prefer citrus-flavored energy drinks ";
    cout << grand_total << endl;
    cout << endl << endl;
    return 0;
}