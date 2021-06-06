/**
 * 
 * 19. Check Writer
 * 
 * Write a program that displays a simulated paycheck. 
 * The program should ask the user to enter the date, 
 * the payee’s name, and the amount of the check (up 
 * to $10,000). It should then display a simulated 
 * check with the dollar amount spelled out, as shown 
 * here:
 * 
 *                                      Date: 11/24/2014
 * 
 * 
 * Pay to the Order of: John Phillips           $1920.85 
 * 
 * One thousand nine hundred twenty and 85 cents
 * 
 * 
 * Be sure to format the numeric value of the check 
 * in fixed-point notation with two decimal places of 
 * precision. Be sure the decimal place always displays, 
 * even when the number is zero or has no fractional part. 
 * Use either C-strings or string class objects in this 
 * program.
 * 
 * Input Validation: Do not accept negative dollar 
 * amounts, or amounts over $10,000.
 **/
#include <iostream>
#include <string>

using namespace std;

string trim(string);
string getCheckAmount();
string inputValidateCurrency(string);
string getUserName();
string getDate();
string validateDate(string);
string changeAmountToWords(string);
void dollarFormat(string &);
void displayCheck(string, string, string);
string numToWords(int, string);
string changeAmountToWords(string);

int main()
{
    // The program should ask the user to enter the date, 
    // the payee’s name, and the amount of the check (up 
    // to $10,000).

    string user_date = getDate(),
           user_name = getUserName(),
           check_amount = getCheckAmount();

    displayCheck(user_name, check_amount, user_date);

    return 0;
} 
string trim(string str)
{
    while(str[0] == ' ' || str[0] == '0')
        str.erase(0, 1);

    return str;
}

string getUserName()
{
    string user_name;
    cout << "Enter the name             : ";
    getline(cin, user_name);
    return user_name;
}

string getCheckAmount() { return inputValidateCurrency("Enter a dollar amount up to $10,000 in the form nnnnn.nn : "); }

void dollarFormat(string &user_amount)
{
    int decimal_point =  user_amount.find('.');

    if (decimal_point > 3)
    {
        for (int x = decimal_point - 3; x > 0; x -= 3)
            user_amount.insert(x, ",");

    }
    user_amount.insert(0, "$");

}

string getDate() { return validateDate("Enter a date in the form mm/dd/yyyy : "); }

string inputValidateCurrency(string message)
{
    bool valid = false;
    string user_currency;

    do
    {
        cout << message << endl;
        cin >> user_currency;

        user_currency = trim(user_currency);

        if (user_currency[0] != '-' &&
            user_currency[user_currency.length() - 3] == '.')
        {
            int number_of_string_digits = user_currency.length() - 1,
                number_of_actual_digits = 0;

            double user_currency_number;
            
            for (int i = 0; i < user_currency.length() - 3; i++)
            {
                if (isdigit(user_currency[i])) 
                    number_of_actual_digits++;
            }

            for (int i = user_currency.length() - 2; i < user_currency.length(); i++)
            {
                if (isdigit(user_currency[i])) 
                    number_of_actual_digits++;
            }

            if (number_of_actual_digits == number_of_string_digits)
            {
                user_currency_number = stod(user_currency);

                if (user_currency_number <= 10000)
                    valid = true;
            }

        }

    } while (!valid);

    return user_currency;
}

string validateDate(string message)
{
    string user_date;

    bool valid = false,
         isNumber = false;
    
    int number_count;

    do
    {
        number_count = 0;

        cout << message;
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

                        }
                        else if (year % 100 != 0 && year % 4 == 0)
                        {
                            if (day >= 1 && day <= 29)
                                valid = true;
                        }
                        else 
                        {
                            if (day >= 1 && day <= 28)
                                valid = true;

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

                        break;

                    case 4:
                    case 6:
                    case 9:
                    case 11:
                        if (day >= 1 && day <= 30)
                            valid = true;

                        break;

                    default:
                        break;
                    }
                }
            }
        }

    } while (!valid);

    return user_date;
}

void displayCheck(string name, string amount, string date)
{
    cout << "\n\t\t\t\tDate: " << date << endl << endl;
    
    string amount_in_words = changeAmountToWords(amount);

    dollarFormat(amount);

    cout << "Pay to the Order of: " << name << "\t\t" << amount << endl;
    cout << endl << amount_in_words << endl << endl;
}
string numToWords(int number, string s)
{
    string one_and_hundredths[] = {"", "one ", "two ", "three ", "four ",
                               "five ", "six ", "seven ", "eight ",
                               "nine ", "ten ", "eleven ", "twelve ",
                               "thirteen ", "fourteen ", "fifteen ",
                               "sixteen ", "seventeen ", "eighteen ",
                               "nineteen " },
       ten_and_tenths[]     = {"", "", "twenty ", "thirty ", "forty ",
                               "fifty ", "sixty ", "seventy ", "eighty ",
                               "ninety " };
                               
    string str = "";

    if (number > 19)
        str += ten_and_tenths[number / 10] + one_and_hundredths[number % 10];
    else
        str += one_and_hundredths[number];

    if (number)
        str += s;
    
    return str;
}
string changeAmountToWords(string digit_amount)
{
    double user_number = stod(digit_amount);
    int decimal_number = stoi(to_string((user_number - static_cast<int>(user_number)) * 100.0)),
        whole_number = user_number;

    string out;

    out += numToWords(((whole_number / 1000) % 100), "thousand ");
    out += numToWords(((whole_number / 100) % 10), "hundred ");
    
    if (whole_number > 100 && whole_number % 100)
        out += "and ";
    
    out += numToWords((whole_number % 100), "");
    out += "dollars ";

    if (decimal_number != 0)
    {
        out += "and ";
        out += numToWords((decimal_number % 100), "");
        out += "cents";
    }
    else
        out += "and no cents";
    

    return out;

}