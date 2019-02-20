/*************************************************
 * resize(elements, value)
 *************************************************
 * This member function resizes a vector by elements 
 * elements. Each of the new ele- ments is 
 * initialized with the value in value.
 * 
 * Example:
 *      vect.resize(5, 1);
 * 
 * This statement increases the size of vect by 
 * five elements. The five new elements are 
 * initialized to the value 1.
 *************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector {19, 20, 54, 55, 79, 100};

    cout << "vector.size = "
         << vector.size() 
         << endl;
    cout << "vector = "
         << "{ ";
    for(auto value : vector)
        cout << value << " ";
    cout << "}";
    
    cout << "\nResizing vector, with new\nelements set to equal to 1...\n";
    vector.resize(10, 1);

    cout << "vector.size = "
         << vector.size() 
         << endl;
    cout << "vector = "
         << "{ ";
    for(auto value : vector)
        cout << value << " ";
    cout << "}";

    cout << endl;
    
    return 0;
}