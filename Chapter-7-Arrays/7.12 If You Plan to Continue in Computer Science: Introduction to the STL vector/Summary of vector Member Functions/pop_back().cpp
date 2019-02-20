/*************************************************
 * pop_back()
 *************************************************
 * This member function removes the last element 
 * from the vector. 
 * 
 * Example:
 *      vect.pop_back();
 * 
 * This statement removes the last element of 
 * vect, thus reducing its size by 1.
 *************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector {19, 20, 54, 55, 79, 100};

    cout << "Size of vector = " << vector.size();

    cout << "\npopping back last element...\n";
    vector.pop_back();

    cout << "Size of vector = " << vector.size() << endl;
    
    return 0;
}