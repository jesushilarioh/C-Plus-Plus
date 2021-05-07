/**
 * 
 * 13. Date Printer
 * 
 * Write a program that reads a string 
 * from the user containing a date in 
 * the form mm/dd/yyyy. It should print 
 * the date in the form March 12, 2014.
 * 
 */
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void validateDate(string);
void displayDate(string);

int main()
{
    string user_date;

    validateDate(user_date);

    displayDate(user_date);

    return 0;
} 
void validateDate(string user_date)
{
    bool notValid = false,
         isNumber = false;
    
    int i;

    do
    {
        isNumber = false;

        cout << "Enter a date (mm/dd/yyyy): ";
        getline(cin, user_date);

        // mm/dd/yyyy
        if (user_date.length() == 10 && 
            user_date[2] == '/' && 
            user_date[5] == '/')  
        {
            // Check for numbers in mm, dd, and yyyy
            for (i = 0; i < user_date.length(); i++)
            {
                if (i != 2 || i != 5)
                {
                    if (isdigit(i))
                        isNumber = true;
                    else
                    {
                        cout << "Please enter a valid date." << endl;
                        continue;
                    }       
                }       
            }
        }
        else 
        {
            cout << "Please enter a valid date." << endl;
            continue;
        }

        if(user_date[0] )
            notValid = true;
        
    } while (!notValid);

}

void displayDate(string user_date)
{
    string month = user_date[0] + user_date[1];
    int mm = stoi(month);

    string day = user_date[3] + user_date[4];

    string year = user_date[6] + user_date[7] + user_date[8] + user_date[9];

}