/************************************************************
 *
 *   21. Multiple Stock Sales
 * 
 *      Use the function that you wrote for Programming 
 *      Challenge 20 (Stock Profit) in a program that 
 *      calculates the total profit or loss from the sale of 
 *      multiple stocks. The program should ask the user for 
 *      the number of stock sales and the necessary data for 
 *      each stock sale. It should accumulate the profit or 
 *      loss for each stock sale and then display the total
 *
 * 	Jesus Hilario Hernandez
 * 	December 26, 2018 --> "Merry Christmas!"
 *
 *************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
double getInfo(string, double);
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
           profit_or_loss,
           number_of_stock_sales,
           total = 0;

    // Get info
    number_of_stock_sales = getInfo("How many stock sales? ", number_of_stock_sales);

    for (int i = 0; i < number_of_stock_sales; i++)
    {
        cout << "\nInfo for stock sale #" << (i + 1) << endl;

        NS = getInfo("Number of shares: ", NS);
        PP = getInfo("Purchase price per share: ", PP);
        PC = getInfo("Purchase commission paid: ", PC);
        SP = getInfo("Sale price per share: ", SP);
        SC = getInfo("Sale commission paid: ", SC);
        
        // Calculate
        profit_or_loss = profit(NS, PP, PC, SP, SC);
        total += profit_or_loss;

        // Display
        displayCalculation(profit_or_loss);

    }

    cout << "\nTotal profit or loss = $"
         << total
         << endl;
    
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
double getInfo(string prompt, double userInput)
{
    cout << prompt;
    return inputValidate(userInput);
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
    return ((NS * SP) - SC) - ((NS * PP) + PC);
}