/************************************************************
 *
 *   20. Stock Profit
 * 
 *      The profit from the sale of a stock can be calculated 
 *      as follows:
 * 
 *      Profit = ((NS x SP) - SC) 􏰂 ((NS x PP) + PC)
 *      
 *      where NS is the number of shares, SP is the sale price 
 *      per share, SC is the sale commission paid, PP is the 
 *      purchase price per share, and PC is the purchase 
 *      commission paid. If the calculation yields a positive 
 *      value, then the sale of the stock resulted in a profit. 
 *      If the calculation yields a negative number, then the 
 *      sale resulted in a loss.
 *
 *      Write a function that accepts as arguments the number 
 *      of shares, the purchase price per share, the purchase 
 *      commission paid, the sale price per share, and the 
 *      sale commission paid. The function should return the 
 *      profit (or loss) from the sale of stock.
 * 
 *      Demonstrate the function in a program that asks the 
 *      user to enter the necessary data and displays the 
 *      amount of the profit or loss.
 *
 * 	Jesus Hilario Hernandez
 * 	December 26, 2018 --> "Merry Christmas!"
 *
 *************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
void getInfo(string, double &);
double profit(double, double, double, double, double);
double inputValidate(double);
void displayCalculation(double);


int main()
{
    double NS,  // Number of shares
           PP,  // Purchase price per share
           PC,  // Purchase commission paid
           SP,  // Sale price per share
           SC,  // Sale commission paid
           profit_or_loss;  

    // Get info
    getInfo("Number of shares: ", NS);
    getInfo("Purchase price per share: ", PP);
    getInfo("Purchase commission paid: ", PC);
    getInfo("Sale price per share: ", SP);
    getInfo("Sale commission paid: ", SC);
    
    // Calculate
    profit_or_loss = profit(NS, PP, PC, SP, SC);

    // Display
    displayCalculation(profit_or_loss);

    return 0;
}

/****************************************************
 * Definition for inputValidate():                  *
 * inputValidate checks user input for a double.    *
 * If a double is NOT found, a                      *
 * while loop displays an error, clears and ignores *
 * previous input, and prompts the user to try      *
 * again.                                           *
 ****************************************************/
double inputValidate(double num1)
{
    
    while(!(cin >> num1))
    {
        cout << "Error. Number must not be "
             << " 0 or greater:";
        cin.clear();
        cin.ignore(1234, '\n');
    }

    return num1;
}

/****************************************************
 * Definition for getInfo():                        *
 * getInfo is designed to get info from the user.   *
 * the first parameter recives an argument as a     *
 * string, which prompts the user. The second       *
 * argument receives the user input and is          *
 * validated upon receiving information.            *
 ****************************************************/
void getInfo(string prompt, double &userInput)
{
    cout << prompt;
    userInput = inputValidate(userInput);
}

/****************************************************
 * Definition for displayMenu():                    *
 * displayMenu displays a menu for user to choose   *
 * from.                                            *
 ****************************************************/
void displayCalculation(double profit_or_loss)
{
    cout << "The sale of the stock resulted in "
         << (profit_or_loss < 0 ? "LOSS." : "PROFIT.")
         << "At $" << profit_or_loss
         << endl;
}

/****************************************************
 * Definition for profit():                         *
 * profit calculates the profit from a sale of      *
 * stock. It accepts the number of shares (NS), the *
 * purchase price per share (PP), the purchase      *
 * commission paid (PC), the sale price per share   *
 * (SP), and the sale commission paid (SC).         *
 ****************************************************/
double profit(double NS, 
              double PP, 
              double PC, 
              double SP, 
              double SC)
{
    cout << "NS = " << NS << endl; 
    cout << "PP = " << PP << endl; 
    cout << "PC = " << PC << endl; 
    cout << "SP = " << SP << endl; 
    cout << "SC = " << SC << endl;    

    return ((NS * SP) - SC) - ((NS * PP) + PC);
}
