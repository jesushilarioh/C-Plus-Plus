/*************************************************
 * at(element)
 *************************************************
 * This member function returns the value of the 
 * element located at element in the vector. 
 * 
 * Example: 
 *  x = vect.at(5);
 * 
 * This statement assigns the value of the fifth 
 * element of vect to x.
 *************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector {19, 20, 54, 55, 79, 100};

    int x = vector.at(5);

    cout << "x = " << x << endl;

    return 0;
}