/*************************************************
 * capacity()
 *************************************************
 * This member function returns the maximum number 
 * of elements that may be stored in the vector 
 * without additional memory being allocated. 
 * (This is not the same value as returned by the 
 * size member function).
 * 
 * Example:
 *      x = vect.capacity();
 * 
 * This statement assigns the capacity of vect to x.
 *************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector {19, 20, 54, 55, 79, 100};

    int x = vector.capacity();

    cout << "x = " << x << endl;

    return 0;
}