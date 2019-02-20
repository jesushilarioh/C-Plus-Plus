// This program demonstrates the vector clear member
// function.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<int> values(100);

     cout << "The values vector has "
          << values.size() << " elements.\n"
          << "I will call the clear memeber function...\n";
     
     values.clear();

     cout << "Now, the values vector has "
          << values.size() << " elements.\n";

     return 0;
}