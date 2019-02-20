/*************************************************
 * empty()
 *************************************************
 * This member function returns true if the vector 
 * is empty. Otherwise, it returns false. 
 * 
 * Example:
 *      if (vect.empty())
 *          cout << "The vector is empty.";
 * 
 * This statement displays the message if vect 
 * is empty.
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