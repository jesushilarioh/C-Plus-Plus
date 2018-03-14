//this program demonstrates how to avoid
//an infinite loop while validating user
//input with a while loop.

// Jesus H. Hernandez
// Last modified: Sept. 30, 2016

#include<iostream>

using namespace std;

int main()
{
    int age = 0;
    char again = 'Y';

    while (again == 'y' || again == 'Y')
    {
        //Get age
        cout << "How old are you?" << endl;
        while (!(cin >> age))
        {
            cout << "Must be a number: " << endl;
            //to clear input stream
            cin.clear();
            //to drop and ignore any content that is is the cin object.
            cin.ignore(1900, '\n');
        }
        if (age == 18)
            cout << "Congratulations, you are old enough to vote!" << endl;
        else if (age < 18)
            cout << "Don't forget to vote" << endl;
        else if (age > 60)
            cout << "Don't forget to vote" << endl;
        else
            cout << "Get the vote out" << endl;

        cout << "Go again? (y/n) ";
        cin >> again; //change control variable

    } //end while loop

    cout << "The end." << endl;
    return 0;
}
