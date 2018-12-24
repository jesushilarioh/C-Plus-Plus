#include <iostream>
#include <ctype.h>  // isdigit() and isalpha()
#include <sstream>  // stringstream
using namespace std;
int main()
{
    string str_num = "";
    
    int is_num = 0, 
        decimal_count = 0;
        
    double user_num;

    bool is_num_bool = 0;

    do
    {
        cout << "Enter number: ";
        cin >> str_num;

        if (str_num[0] == '-')
            is_num++;

        if (str_num[0] == '0' && isdigit(str_num[1]))
        {
            is_num = 0;
        }
        else
        {
            for (int i = 0; i < str_num.size(); i++)
            {
                if (isdigit(str_num[i]))
                    is_num++;

                if (str_num[i] == '.')
                {
                    decimal_count++;
                }
            }
        }

        if (decimal_count == 1)
            is_num++;

        stringstream str_stream_object(str_num);
        str_stream_object >> user_num;

        if (is_num == str_num.size() && user_num > 0)
        {
            
            is_num_bool = 1;
            cout << str_num << "(str_num) is a number!" << endl;
            cout << user_num << "(user_num) is a number!" << endl;
                
        }
        else
        {
            cout << "Must be greater than 0." << endl;
            cout << "Number must NOT contain spaces." << endl;
            cout << "Number must NOT contain letters." << endl;
            cout << "Number must contain only one decimal." << endl;

            cin.clear();
            cin.ignore(1234, '\n');
            
            is_num_bool = 0;
            is_num = 0;
            decimal_count = 0;
        }

    } while (is_num_bool == 0);

    return 0;
}