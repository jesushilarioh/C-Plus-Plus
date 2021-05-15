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

void validateDate(string &);
void displayDate(string);

int main()
{
    string user_date;

    validateDate(user_date);

    displayDate(user_date);

    return 0;
} 
void validateDate(string &user_date)
{
    bool valid = false,
         isNumber = false;
    
    int number_count;

    do
    {
        valid = false;
        number_count = 0;

        cout << "Enter a date (mm/dd/yyyy): ";
        getline(cin, user_date);

        // mm/dd/yyyy
        if (user_date.length() == 10 && 
            user_date[2] == '/' && 
            user_date[5] == '/')  
        {
            // Check for numbers in mm, dd, and yyyy
            for (int i = 0; i < user_date.length(); i++)
            {
                if (i != 2 || i != 5)
                {
                    if (isdigit(user_date[i]))
                        number_count++;

                }   

            }

            if(number_count == 8)
            {
                string mm,
                       dd,
                       yyyy;

                mm  .insert(0, 1, user_date[0])
                    .insert(1, 1, user_date[1]);

                dd  .insert(0, 1, user_date[3])
                    .insert(1, 1, user_date[4]);

                yyyy.insert(0, 1, user_date[6])
                    .insert(1, 1, user_date[7])
                    .insert(2, 1, user_date[8])
                    .insert(3, 1, user_date[9]);
                
                int month = stoi(mm),
                    day   = stoi(dd),
                    year  = stoi(yyyy);

                if (month >= 1 && month <= 12)
                {
                    switch (month)
                    {
                    case 2:
                        if (year % 100 == 0 && year % 400 == 0)
                        {
                            if (day >= 1 && day <= 29)
                                valid = true;
                            else
                                cout << "Please enter a valid date." << endl;

                        }
                        else if (year % 100 != 0 && year % 4 == 0)
                        {
                            if (day >= 1 && day <= 29)
                                valid = true;
                            else
                                cout << "Please enter a valid date." << endl;
                        }
                        else 
                        {
                            if (day >= 1 && day <= 28)
                                valid = true;
                            else
                                cout << "Please enter a valid date." << endl;
                        }
                        break;
                    case 1:
                    case 3:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    case 12:
                        if (day >= 1 && day <= 31)
                            valid = true;
                        else
                            cout << "Please enter a valid date." << endl;
                        break;

                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        if (day >= 1 && day <= 30)
                            valid = true;
                        else
                            cout << "Please enter a valid date." << endl;
                        break;

                    default:
                        break;
                    }
                }
                else
                    cout << "Please enter a valid date." << endl;

            }
            else
                cout << "Please enter a valid date." << endl;

        }
        else 
            cout << "Please enter a valid date." << endl;

        
    } while (!valid);

}

void displayDate(string user_date)
{
    string month,
           day = "",
           year = "";
        
    day += user_date[3];
    day += user_date[4];

    year += user_date[6];
    year += user_date[7];
    year += user_date[8];
    year += user_date[9];
    
    if (user_date[0] == '0')
    {
        if (user_date[1] == '1')
            month = "January";
        else if (user_date[1] == '2')
            month = "February";
        else if (user_date[1] == '3')
            month = "March";
        else if (user_date[1] == '4')
            month = "April";
        else if (user_date[1] == '5')
            month = "May";
        else if (user_date[1] == '6')
            month = "June";
        else if (user_date[1] == '7')
            month = "July";
        else if (user_date[1] == '8')
            month = "August";
        else if (user_date[1] == '9')
            month = "September";
    }
    else if(user_date[0] == '1')
    {
        if (user_date[1] == '0')
            month = "October";
        else if (user_date[1] == '1')
            month = "November";
        else if (user_date[1] == '2')
            month = "December";
    }
    cout << month << " "
         << day << ", "
         << year
         << endl;
}