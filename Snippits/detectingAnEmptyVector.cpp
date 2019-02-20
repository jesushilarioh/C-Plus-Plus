// This program uses the .empty() function
// when detecting an empty vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> number_vector;

    if (number_vector.empty())
        cout << "No values in number_vector.\n";
        
    return 0;
}