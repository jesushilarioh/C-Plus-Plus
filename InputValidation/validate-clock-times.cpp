#include <iostream>
#include <ctype.h>  // isdigit() and isalpha()
#include <sstream>  // stringstream
#include <iomanip>  // setfill()
using namespace std;
int main()
{
    string hour,
           minutes,
           time_of_day;

    int is_num = 0;
        
    int int_hour,
        int_minutes;

    bool is_num_bool = 0,
         time_of_day_valid = 0;

    cout << "Let's start with time of departure on 1st day.\n" << endl;
    cout << "Did you leave in the morning or the afternoon \n";
    cout << "Enter AM for morning or PM for afternoon: ";

    do 
    {
        cin >> time_of_day;

        if (time_of_day == "am" ||
            time_of_day == "AM" ||
            time_of_day == "aM" ||
            time_of_day == "Am")
        {
            time_of_day_valid = 1;
            time_of_day = "AM";
        }
        else if (time_of_day == "pm" ||
                 time_of_day == "PM" ||
                 time_of_day == "pM" ||
                 time_of_day == "Pm")
        {
            time_of_day_valid = 1;
            time_of_day = "PM";
        }
        else
        {
            time_of_day_valid = 0;
            cout << "Error. Enter AM for monring and PM for afternoon: ";
        }
        
    } while(time_of_day_valid == 0);

    

    cout << "First, " << endl;

    do
    {
        cout << "Enter the hour: ";
        cin >> hour;

        for (int i = 0; i < hour.size(); i++)
        {
            if (isdigit(hour[i]))
                is_num++;
        }

        stringstream str_stream_object(hour);
        str_stream_object >> int_hour;

        if (is_num == hour.size() && (int_hour >= 0 && int_hour <= 12))
        {
            is_num_bool = 1;
            cout << hour << "(hour) is a number!" << endl;
            cout << int_hour << "(int_hour) is a number!" << endl;
        }
        else
        {
            cout << "Must be  anumber and between 0 and 12. ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            is_num_bool = 0;
            is_num = 0;
        }

    } while (is_num_bool == 0);


    is_num_bool = 0;
    is_num = 0;

    cout << "Second, " << endl;
    do
    {
        cout << "Enter the minutes: ";
        cin >> minutes;

        for (int i = 0; i < minutes.size(); i++)
        {
            if (isdigit(minutes[i]))
                is_num++;
        }

        stringstream str_stream_object(minutes);
        str_stream_object >> int_minutes;

        if (is_num == minutes.size() && (int_minutes >= 0 && int_minutes <= 59))
        {
            is_num_bool = 1;
            cout << minutes << "(minutes) is a number!" << endl;
            cout << int_minutes << "(int_minutes) is a number!" << endl;
        }
        else
        {
            cout << "Must be  anumber and between 0 and 12. ";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            is_num_bool = 0;
            is_num = 0;
        }

    } while (is_num_bool == 0);

    cout.fill('0');
    cout << "Time = "
         << int_hour
         << ":"
         << setw(2) << right << int_minutes
         << " " << time_of_day
         << endl;

    

    return 0;
}