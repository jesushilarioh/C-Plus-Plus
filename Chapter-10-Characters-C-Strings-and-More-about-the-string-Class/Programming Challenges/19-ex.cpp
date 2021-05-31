#include <iostream>
using namespace std;

string one_and_hundredths[] = {"", "one ", "two ", "three ", "four ",
                               "five ", "six ", "seven ", "eight ",
                               "nine ", "ten ", "eleven ", "twelve ",
                               "thirteen ", "fourteen ", "fifteen ",
                               "sixteen ", "seventeen ", "eighteen ",
                               "nineteen" },
       ten_and_tenths[]     = {"", "", "twenty ", "thirty ", "forty ",
                               "fifty ", "sixty ", "seventy ", "eighty ",
                               "ninety" };

string numToWords(int, string);
string convertToWords(long, long);

int main()
{
    double user_number =  9474.21;
    double decimal_number = user_number - static_cast<int>(user_number);

    cout << "decimal_number = " << decimal_number * 100 << endl;

    cout << convertToWords(user_number, decimal_number * 100) << endl;
    
    return 0;
}
string numToWords(int number, string s)
{
    string str = "";

    if (number > 19)
        str += ten_and_tenths[number / 10] + one_and_hundredths[number % 10];
    else
        str += one_and_hundredths[number];

    if (number)
        str += s;
    
    return str;
}
string convertToWords(long whole_number, long decimal_number)
{
    int new_number = decimal_number * 100;
    cout << "new_number = " << new_number << endl;
    
    string out;

    out += numToWords(((whole_number / 1000) % 100), "thousand ");
    out += numToWords(((whole_number / 100) % 10), "hundred ");
    
    if (whole_number > 100 && whole_number % 100)
        out += "and ";
    
    out += numToWords((whole_number % 100), "");
    out += "dollars and ";

    // out += numToWords((decimal_number % 100), "");
    // out += "cents";


    return out;

}