/********************************************************************
*
*	18. ENERGY DRINK CONSUMPTION
*
*       A soft drink company recently survayed 16,500 of its
*       customers and found that approximately 15% of those surveyed
*       purchase one or more energy drinks per week. Of those
*       customers who purchase energy drinks, approximately 58%
*       of them prefer citrus-flavored energy drinks. Write a
*       program that displays the following:
*
*       -   The approximate # of customers in the survey who purchase
*           one or more energy drinks per week
*       -   The approximate # of customers in the survey who prefer
*           citrus-flavored energy drinks
*
* 	Jesus Hilario Hernandez
* 	December 15th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num_survayed = 16500;
    float percent_pur_one_or_more = .15,
          percent_prefer_citrus = .58,
          total_pur_one_or_more = num_survayed * percent_pur_one_or_more;

    cout << endl << endl;
    cout << "The approximate # of customers in the survey who" << endl;
    cout << "purchase one or more energy drinks per week is ";
    cout << total_pur_one_or_more << endl;

    cout << "The approximate # of customers in the survey who" << endl;
    cout << "prefer citrus-flavored energy drinks ";
    cout << total_pur_one_or_more * percent_prefer_citrus << endl;
    cout << endl << endl;

    return 0;
}
