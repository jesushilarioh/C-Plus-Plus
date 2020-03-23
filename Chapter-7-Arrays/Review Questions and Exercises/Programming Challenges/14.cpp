
#include <iostream>
using namespace std;
int main()
{
    const int ARRAY_SIZE = 5;
    int total_matching_numbers = 0;
    int lottery[ARRAY_SIZE] = {7, 6, 5, 4, 3};
    int user[ARRAY_SIZE];

    cout << "Enter 5 digits: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Number #" << (i + 1) << ": ";
        cin >> user[i];
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (user[i] == lottery[i])
            total_matching_numbers++;
        
    }

    cout << "Lottery numbers = { ";
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << lottery[i] << " ";
    cout << "}" << endl;
    

    cout << "Total matching #s = " 
         << total_matching_numbers 
         << endl;


    if(total_matching_numbers == ARRAY_SIZE)
        cout << "You are the grand prize winner!!" << endl;

    return 0;
}