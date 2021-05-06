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

using namespace std;

void validateDate(string);

int main()
{
    string user_date;

    validateDate(user_date);

    return 0;
} 
void validateDate(string user_date)
{
    bool notValid = false;

    do
    {
        getline(cin, user_date);

        if (user_date.length() == 10) // mm/dd/yyyy
        {
            if (user_date[0] == '0' || user_date[0] == '1')
            {
                
            }
            else
                continue;
        }
        else 
            continue;
        
        


    } while (!notValid);
    
}