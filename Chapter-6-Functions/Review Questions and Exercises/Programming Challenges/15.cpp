/************************************************************
 *
 *   15. Overloaded Hospital
 *   
 *   Write a program that computes and displays the charges 
 *   for a patient’s hospital stay. First, the program should 
 *   ask if the patient was admitted as an in-patient or an 
 *   outpatient. If the patient was an in-patient, the following 
 *   data should be entered:
 * 
 * • The number of days spent in the hospital 
 * • The daily rate
 * • Hospital medication charges
 * • Charges for hospital services (lab tests, etc.)
 * 
 * The program should ask for the following data if the 
 * patient was an out-patient:
 *
 * • Charges for hospital services (lab tests, etc.)
 * • Hospital medication charges
 * 
 * The program should use two overloaded functions to calculate 
 * the total charges. One of the functions should accept 
 * arguments for the in-patient data, while the other function 
 * accepts arguments for out-patient information. Both 
 * functions should return the total charges.
 * 
 * Input Validation: Do not accept negative numbers for any 
 *                  data.
 *
 * 	Jesus Hilario Hernandez
 * 	December 18th, 2018
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Global constants

// Function Prototypes
double inputValidate(double);
char userChoice(char);
double calculateTotalCharges(double, double);
double calculateTotalCharges(double, double, double, double);

int main()
{
     char user_choice;

     double days_spent,
            daily_rate,
            med_charges,
            services_charge,
            total_charges;

     // ask if the patient was admitted as an in-patient or an 
     // out-patient.
     cout << "Where you admitted as an in-patient or an\n"
          << "out-patient? \n"
          << "Enter 1 for in-patient or 2 for out-patient"
          << endl;
     
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
     }

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