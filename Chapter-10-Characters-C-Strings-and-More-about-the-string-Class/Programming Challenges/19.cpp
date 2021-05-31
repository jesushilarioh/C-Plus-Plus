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

int main()
{
    // The program should ask the user to enter the date, 
    // the payee’s name, and the amount of the check (up 
    // to $10,000).

    string user_date = getDate(),
           user_name = getUserName(),
           check_amount = getCheckAmount();

    cout << "user_name    = " << user_name    << endl;
    cout << "check_amount = " << check_amount << endl;
    cout << "user_date    = " << user_date    << endl;

    cout << endl;
    displayCheck(user_name, check_amount, user_date);
    cout << endl;

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

string getCheckAmount() {return inputValidateCurrency("Enter a dollar amount up to $10,000 in the form nnnnn.nn : "); }

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

string getDate() { return validateDate("Enter a date int the form mm/dd/yyyy : "); }

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
    cout << "\t\t\t\tDate: " << date << endl << endl;
    
    string amount_in_words = changeAmountToWords(amount);

    dollarFormat(amount);

    cout << "Pay to the Order of: " << name << "\t\t" << amount << endl;
    cout << endl << amount_in_words << endl;
}

string changeAmountToWords(string digit_amount)
{
    int string_size = digit_amount.length();
    string amount_in_words = "";

    // // 0000.0Hundredths
    // cout << "0000.0Hundredths = " << digit_amount[string_size - 1] << endl;
    // // 0000.Tenths0
    // cout << "0000.Tenths0 = " << digit_amount[string_size - 2] << endl;
    // // 000ones.00
    // cout << "000ones.00 = " << digit_amount[string_size - 4] << endl;
    // // 00tens0.00
    // cout << "00tens0.00 = " << digit_amount[string_size - 5] << endl;
    // // 0hundres00.00
    // cout << "0hundres00.00 = " << digit_amount[string_size - 6] << endl;
    // // thousands000.00
    // cout << "thousands000.00 = " << digit_amount[string_size - 7] << endl;

    // cout << "string_size = " << string_size << endl;
    string char_number = "";
    char_number += digit_amount[string_size - 1];
    int single_digit = stoi(char_number);

    for (int i = 0; i < string_size; i++)
    {
        
    }
    
    cout << "single_digit = " << single_digit << endl;

    if (string_size == 8)
        amount_in_words += "Ten thousand dollars and zero cents";
    else
    {
        string hundredths = "",
               tenths     = "";
        // for (int i = string_size; i > 0; i--)
        // {
        //     cout << "(i - 1)" << (i - 1) << " = " << digit_amount[i - 1] << endl;
        // }
        switch (string_size)
        {
            case 3:
                // cout << "0000.0Hundredths = " << digit_amount[string_size - 1] << endl;
                // cout << "0000.Tenths0 = " << digit_amount[string_size - 2] << endl;
                // cout << ". = " << digit_amount[string_size - 3] << endl;

                // Tenths == 0
                if (digit_amount[string_size - 2] == '0')
                {
                    // Hundredths
                    if (digit_amount[string_size - 1] == '0')
                        amount_in_words += "zero";
                    else if (digit_amount[string_size - 1] == '1')
                        amount_in_words += "one";
                    else if (digit_amount[string_size - 1] == '2')
                        amount_in_words += "two";
                    else if (digit_amount[string_size - 1] == '3')
                        amount_in_words += "three";
                    else if (digit_amount[string_size - 1] == '4')
                        amount_in_words += "four";
                    else if (digit_amount[string_size - 1] == '5')
                        amount_in_words += "five";
                    else if (digit_amount[string_size - 1] == '6')
                        amount_in_words += "six";
                    else if (digit_amount[string_size - 1] == '7')
                        amount_in_words += "seven";
                    else if (digit_amount[string_size - 1] == '8')
                        amount_in_words += "eight";
                    else if (digit_amount[string_size - 1] == '9')
                        amount_in_words += "nine";
                }
                // Tenths == 1
                else if (digit_amount[string_size - 2] == '1')
                {
                    // Hundredths
                    if (digit_amount[string_size - 1] == '0')
                        amount_in_words += "ten";
                    else if (digit_amount[string_size - 1] == '1')
                        amount_in_words += "eleven";
                    else if (digit_amount[string_size - 1] == '2')
                        amount_in_words += "twelve";
                    else if (digit_amount[string_size - 1] == '3')
                        amount_in_words += "thirtheen";
                    else if (digit_amount[string_size - 1] == '4')
                        amount_in_words += "fourteen";
                    else if (digit_amount[string_size - 1] == '5')
                        amount_in_words += "fifteen";
                    else if (digit_amount[string_size - 1] == '6')
                        amount_in_words += "sixteen";
                    else if (digit_amount[string_size - 1] == '7')
                        amount_in_words += "seventeen";
                    else if (digit_amount[string_size - 1] == '8')
                        amount_in_words += "eightteen";
                    else if (digit_amount[string_size - 1] == '9')
                        amount_in_words += "nineteen";
                }

                break;
            
            default:
                break;
        }
        
    }

    return amount_in_words += " cents";
}