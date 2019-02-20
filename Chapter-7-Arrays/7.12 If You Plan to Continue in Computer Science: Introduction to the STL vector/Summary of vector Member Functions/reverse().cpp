/*************************************************
 * reverse()
 *************************************************
 * This member function reverses the order of the 
 * elements in the vector. (The last element becomes 
 * the first element, and the first element becomes 
 * the last element.)
 * 
 * Example:
 *      vect.reverse();
 * 
 * This statement reverses the order of the 
 * element in vect.
 *************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector {19, 20, 54, 55, 79, 100};

    cout << "vector = "
         << "{ ";
    for(auto value : vector)
        cout << value << " ";
    cout << "}";
    
    cout << "Reversing vector elements...";
    vector.reverse();

    cout << "vector = "
         << "{";
    for(auto value : vector)
        cout << value << " ";
    cout << "}" << endl;
    
    return 0;
}