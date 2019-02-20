/*************************************************
 * clear()
 *************************************************
 * This member function Clears a vector of all its 
 * elements.
 * 
 * Example:
 *      vect.clear();
 * 
 * This statement removes all the elements from vect.
 *************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector {19, 20, 54, 55, 79, 100};

    if (vector.empty())
        cout << "vector is empty." << endl;
    else
        cout << "vector is NOT empty." << endl;
    
    cout << "clearing vector..." << endl;
    vector.clear();

    if (vector.empty())
        cout << "vector is empty." << endl;
    else
        cout << "vector is NOT empty." << endl;

    return 0;
}