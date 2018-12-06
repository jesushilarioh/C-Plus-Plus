/************************************************************
*
*   03. Winning Division
*
*       Write a program that determines which of a company’s 
*       four divisions (Northeast, Southeast, Northwest, and 
*       Southwest) had the greatest sales for a quarter. It 
*       should include the following two functions, which are 
*       called by main.
*
*       • double getSales() is passed the name of a division. 
*           It asks the user for a division’s quarterly sales 
*           figure, validates the input, then returns it. It 
*           should be called once for each division.
*
*       • void findHighest() is passed the four sales totals. 
*           It determines which is the largest and prints the 
*           name of the high grossing division, along with its 
*           sales figure.
*
*
*       Input Validation: Do not accept dollar amounts less 
*                           than $0.00.
*
* 	Jesus Hilario Hernandez
* 	December 6, 2018
*
*************************************************************/
#include <iostream>
using namespace std;

// Global constants
const string NE = "North East",
             NW = "North West",
             SE = "South Eest",
             SW = "South West";

// Prototype
double getSales(string);
double inputValidate(double);
void findHighest(double, double, double, double);
void checkIfHighest(double, double, double, double, string);

int main()
{
    // Variables
    double NE_sales,
           NW_sales,
           SE_sales,
           SW_sales;

    NE_sales = getSales(NE);
    NW_sales = getSales(NW);
    SE_sales = getSales(SE);
    SW_sales = getSales(SW);

    findHighest(NE_sales, NW_sales, SE_sales, SW_sales);

    return 0;
}

/********************************************************
 * double getSales() is passed the name of a division.  *
 * It asks the user for a division’s quarterly sales    *
 * figure, validates the input, then returns it. It     *
 * should be called once for each division.             *
 ********************************************************/
double getSales(string division)
{
    double sales;
    // asks the user for a division’s quarterly 
    // sales figure
    cout << "What is the quarterly sales figure\n"
         << "for " << division << "? $";
    sales = inputValidate(sales);
    cout << endl;
    return sales;
}

/********************************************************
 * void findHighest() is passed the four sales totals.  *
 * It determines which is the largest and prints the  *
 * name of the high grossing division, along with its   *
 * sales figure.                                        *
 ********************************************************/
void findHighest(double NE_sales, 
                 double NW_sales, 
                 double SE_sales, 
                 double SW_sales)
{
    cout << "The highest grossing division is\n";

    checkIfHighest(NE_sales, NW_sales, SE_sales, SW_sales, NE);
    checkIfHighest(NW_sales, NE_sales, SE_sales, SW_sales, NW);
    checkIfHighest(SE_sales, NE_sales, NW_sales, SW_sales, SE);
    checkIfHighest(SW_sales, NE_sales, NW_sales, SE_sales, SW);
  
    cout << endl << endl;
}

/********************************************************
 * Definition of inputValidate()                        *
 * This function checks user input for negative values  *
 * and for other data types that are not of integer     *
 * type data. If user input is such, the user will be   *
 * prompted to try again.                               *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

/********************************************************
 * Definition of inputValidate()                        *
 * This function checks user input for negative values  *
 * and for other data types that are not of integer     *
 * type data. If user input is such, the user will be   *
 * prompted to try again.                               *
 ********************************************************/
void checkIfHighest(double sales1, 
                     double sales2, 
                     double sales3, 
                     double sales4,
                     string division)
{
   if (sales1 > sales2)
   {
       if (sales1 > sales3)
       {
           if (sales1 > sales4)
            {
                cout << division << " with a sales figure at: "
                     << "$" << sales1;
            }
       }          
   }
}