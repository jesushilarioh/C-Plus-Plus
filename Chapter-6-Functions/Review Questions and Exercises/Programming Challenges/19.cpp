/************************************************************
 *
 *   19. Using Files—Hospital Report
 * 
 *        Modify Programming Challenge 15, Overloaded 
 *        Hospital, to write the report it creates to a file.
 *
 * 	Jesus Hilario Hernandez
 * 	December 25, 2018 --> "Merry Christmas!"
 *
 *************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

// Function Prototypes
double inputValidate(double);
char userChoice(char);
double calculateTotalCharges(double, double);
double calculateTotalCharges(double, double, double, double);
void writeToFile(double);
void receiveCalculateDisplay();
void displayMenu();

int main()
{
     // ask if the patient was admitted as an in-patient or an 
     // out-patient.

     displayMenu();
     receiveCalculateDisplay();

    return 0;
}

/********************************************************
 * function definition for 
 ********************************************************/
double calculateTotalCharges(double days_spent, 
                             double daily_rate, 
                             double med_charges, 
                             double services_charge)
{
     return (days_spent  * 
             daily_rate) + 
             med_charges + 
             services_charge;
}

/********************************************************
 * function definition for 
 ********************************************************/
double calculateTotalCharges(double med_charges, 
                             double services_charge)
{
     return med_charges + 
            services_charge;
}

void writeToFile(double total_charges)
{
     ofstream outputFile;
     outputFile.open("hospitalReport.txt");
     if (outputFile)
     {
          outputFile << "total_charges = $" 
               << total_charges
               << endl;
          outputFile.close();
     }
     else
     {
          cout << "Error opening file: "
               << "'hospitalReport.txt'" 
               << endl;
     }
}

/****************************************************
 * Definition for inputValidate():                  *
 * inputValidate checks user input for a double     *
 * less than 0. If a double less than 0 is found, a *
 * while loop displays an error, clears and ignores *
 * previous input, and prompts the user to try      *
 * again.                                           *
 ****************************************************/
double inputValidate(double num1)
{
    
    while(!(cin >> num1) || num1 < 0)
    {
        cout << "Error. Number must not be "
             << " 0 or greater:";
        cin.clear();
        cin.ignore(1234, '\n');
    }

    return num1;
}

/*******************************************************
 * function definition for userChoice():               *
 * userChoice() checks user unput for either a 1 or    *
 * a 2. If neither is selected, an error message is    *
 * displayed, the input stream is clear and ignored,   *
 * and user is prompted to enter try again.            *
 *******************************************************/
char userChoice(char letter)
{
    cin >> letter;
    // Error check algorithim
    while (!((letter == '1') || (letter == '2')))
    {
        // Explain error
        cout << "ERROR: enter 1 or 2: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
        // Receive input again
        cin >> letter;
    }
    return letter;
}

void receiveCalculateDisplay()
{
     char user_choice;
     double days_spent, 
            daily_rate, 
            med_charges,
            services_charge,
            total_charges;

     user_choice = userChoice(user_choice);

     if (user_choice == '1')
     {
          cout << "Number of days spent in the hospital: ";
          days_spent = inputValidate(days_spent);

          cout << "Daily rate: $";
          daily_rate = inputValidate(daily_rate);

          cout << "Hospital medication charges: $";
          med_charges = inputValidate(med_charges);

          cout << "Charges for hospital services\n"
               << "(lab tests, etc.): $";
          services_charge = inputValidate(services_charge);

          total_charges = calculateTotalCharges(days_spent,
                                                daily_rate,
                                                med_charges,
                                                services_charge);
                         
          cout << "total_charges = $" 
               << total_charges
               << endl;
          writeToFile(total_charges);
     }
     else 
     {
          cout << "Hospital medication charges: $";
          med_charges = inputValidate(med_charges);

          cout << "Charges for hospital services\n"
               << "(lab tests, etc.): $";
          services_charge = inputValidate(services_charge);

          total_charges = calculateTotalCharges(med_charges,
                                                services_charge);

          cout << "total_charges = $" 
               << total_charges
               << endl;

          writeToFile(total_charges);
     }
}

void displayMenu()
{
     cout << "Where you admitted as an in-patient or an "
          << "out-patient? \n Enter 1 for in-patient or 2 "
          << "for out-patient\n";
}