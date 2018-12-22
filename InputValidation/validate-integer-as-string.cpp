#include <iostream>
#include <ctype.h> // isdigit();
#include <sstream>
using namespace std;
int main()
{
    string user_string;
    int is_num = 0,
        user_string_int,
        NEG_TWENTY = -20,
        string_size;
    bool is_num_bool;

    do
    {
        cout << "Enter string: ";
        cin >> user_string;

        
        string_size = user_string.size();

        for (int i = 0; i < string_size; i++)
        {
            if (isdigit(user_string[i]))
            {
                is_num++;
                // if (user_string[0] == '-')
                // {
                //     is_num++;
                // }
            }
            else if (user_string[0] == '-')
                is_num++;
                
        }

        
        cout << "string_size = " << string_size << endl;
        cout << "is_num = " << is_num << endl;

        if (string_size == is_num)
        {
            cout << "string_size = " << string_size << endl;

            stringstream stream_object(user_string);
            stream_object >> user_string_int;

            cout << "string_size = " << string_size << endl;
        
            if (user_string_int > NEG_TWENTY)
            {
                cout << "user_string IS a number";
                is_num_bool = 1;
            }
            else
            {
                cout << "user_string must be greater that 0.";
                is_num_bool = 0;
                cin.clear();
                cin.ignore(123456, '\n');
                is_num = 0;
            }

            

            // if ()
            // {
            //     cout << "user_string must be greater that 0.";
            //     is_num_bool = 0;
            //     cin.clear();
            //     cin.ignore(123456, '\n');
            //     is_num = 0;
            // }
            // else 
            // {
            //    is_num_bool = 1;
            // }
            
        }
        else
        {
            cout << "(" << user_string_int << ") user_string IS NOT a number";
            is_num_bool = 0;
            cin.clear();
            cin.ignore(123456, '\n');
            is_num = 0;
        }
        
        cout << endl;
    } while (is_num_bool == 0);

    cout << "user_string = " << user_string << endl;
    cout << "user_string = " << user_string_int + 1 << endl;

    return 0;
}