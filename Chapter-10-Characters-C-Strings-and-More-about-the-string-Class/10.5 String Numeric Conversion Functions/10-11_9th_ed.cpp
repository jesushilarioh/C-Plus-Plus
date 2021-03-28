#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string input,
           name;
    int idNumber,
        age;
    double income;

    cout << "What is your ID number? ";
    getline(cin, input);
    idNumber = stoi(input);

    cout << "What is your name? ";
    getline(cin, name);

    cout << "How old are you? ";
    getline(cin, input);
    age = stoi(input);

    cout << "What is your annual income? ";
    getline(cin, input);
    income = stod(input);

    cout << setprecision(2) << fixed << showpoint;
    cout << "Your name is " << name
         << ", your are " << age 
         << " years old. " << endl
         << "and you make $" << income
         << " per year." << endl;
         
    return 0;
}