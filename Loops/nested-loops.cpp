// This program finds the average time spent programming by a student
// each day over a three day period.

// JESUS HILARIO HERNANDEZ

#include <iostream>
using namespace std;

int main()
{
    int     numStudents;
    float   numHours,
            total,          //biology total
            total2,         //programming total
            average,        //biology average
            average2,       //programming average
            numHours2;
    int     student,
            day = 0;        // these are the counters for the loops
    int     n;              //defined by user.

    cout << "This program will find the average number of hours a day"
    << " that a student studying biology and programming.\n\n";
    cout << "How many students are there ?" << endl;
    cin >> numStudents;

    //ask how many days
    cout << "How many days are they there? " << endl;
    //receive number of days
    cin >> n;

    //check for positive number.
    if (n > 0)
    for( student = 1; student <= numStudents; student++)
    {
        total = 0; //initial total biology
        total2 = 0;//initial total programming
        for(day = 1; day <= n; day++) //changed to n number of days
        {
            cout << "how many hours spent studying biology by student "
                 << student <<" on day " << day << "." << endl;
            cin >> numHours;

            cout << "how many hours spent studying programming by student "
                 << student <<" on day " << day << "." << endl;
            cin >> numHours2;

            total = total + numHours;    //total for biology
            total2 = total2 + numHours2; //total for programming
            average = total / n;    //average for biology
            average2 = total2 / n;  //average for programming

            cout << "The average number of hours per day spent studying biology by "
                 << "student " << student << " is " << average
                 << endl; //diaplay average biology

            cout << "The average number of hours per day spent studying programming by "
                 << "student " << student << " is " << average2
                << endl;  //display average programming

            if(average > average2)
            {   //if-else if used to print, on average, which subject spent most time on
                cout << "Student " << student << " spent more hours studying biology "
                     << "than programming."<< endl;
            }
            else if (average < average2)
            {
                cout << "Student " << student << " spent more hours studying programming "
                     << "than biology. " << endl;
            }
        }
    }
    //if integer is a negative number.
    else
        cout << "Invalid input - integer must be positive." << endl;

    return 0;
}
