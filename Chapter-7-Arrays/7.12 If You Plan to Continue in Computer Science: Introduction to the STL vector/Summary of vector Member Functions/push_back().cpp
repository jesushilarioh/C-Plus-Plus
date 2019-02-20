/*************************************************
 * pop_back()
 *************************************************
 * This member function stores a value in the last 
 * element of the vector. If the vector is full or 
 * empty, a new element is created.
 * 
 * Example: 
 *      vect.push_back(7);
 * 
 * This statement stores 7 in the last
 * element of vect.
 *************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector {19, 20, 54, 55, 79, 100};

    cout << "Size of vector = " << vector.size() << endl;
    cout << "{ ";
    for(auto value : vector)
        cout << value << " ";

    cout << "}";
    

    cout << "\n\npushing back and storing a value" 
         << "\nin the last element...\n\n";
    vector.push_back(29);

    cout << "Size of vector = " << vector.size() << endl;
    cout << "{";
    for(auto value : vector)
        cout << value << " ";

    cout << "}" << endl;
    
    return 0;
}