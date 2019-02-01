#include <iostream>
#include <ctype.h>  // isdigit() and isalpha()
#include <sstream>  // stringstream
using namespace std;
int main()
{
    string user_string_num = "";
    
    int is_num = 0, 
        decimal_count = 0;
        
    int user_converted_num;

    bool is_num_bool = 0;

    do
    {
        cout << "Enter number: ";
        cin >> user_string_num;

        if (user_string_num[0] == '-')
            is_num++;

        if (user_string_num[0] == '0' && isdigit(user_string_num[1]))
        {
            is_num = 0;
        }
        else
        {
            for (int i = 0; i < user_string_num.size(); i++)
            {
                if (isdigit(user_string_num[i]))
                    is_num++;

                if (user_string_num[i] == '.')
                {
                    decimal_count++;
                }
            }
        }

        if (decimal_count == 1)
        {
            // if contains a decimal
            is_num = 0;
        }
            

        stringstream str_stream_object(user_string_num);
        str_stream_object >> user_converted_num;

        if (is_num == user_string_num.size() /* [&& user_converted_num > 0] -- USE IF less than or greater than */ )
        {
            
            is_num_bool = 1;
            cout << endl;
            cout << user_string_num << "(user_string_num) is a number!" << endl;
            cout << user_converted_num << "(user_converted_num) is a number!" << endl;
            cout << endl;
                
        }
        else
        {
            cout << endl;
            // cout << "Must be greater than 0." << endl;
            cout << "Number must NOT contain spaces." << endl;
            cout << "Number must NOT contain letters." << endl;
            cout << "Number must contain only one decimal." << endl;
            cout << "Must not be a decimal number." << endl; 

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            is_num_bool = 0;
            is_num = 0;
            decimal_count = 0;
        }

    } while (is_num_bool == 0);

    return 0;
}