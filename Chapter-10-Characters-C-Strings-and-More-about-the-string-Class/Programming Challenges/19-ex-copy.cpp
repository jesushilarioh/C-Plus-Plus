#include <iostream>
#include <string>
using namespace std;

string numToWords(int, string);
string convertToWords(int, int);

int main()
{
    double user_number =  9474.75;
    int decimal_number = stoi(to_string((user_number - static_cast<int>(user_number)) * 100.0));

    cout << convertToWords(user_number, decimal_number) << endl;
    
    return 0;
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
string convertToWords(int whole_number, int decimal_number)
{    
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