#include <iostream>
using namespace std;

int main()
{
    float totalSalesPercentage = .58, 
          totalSalesThisYear = 8.6E6;

    cout << endl << endl;
    cout << "The East Coast Division will generate ";
    cout << totalSalesPercentage * totalSalesThisYear << endl;
    cout << "percent of total sales this year.\n" << endl;
    
    return 0;
}