/*************************************************
 * resize(elements, value)
 *************************************************
 * This member function swaps the contents of the 
 * vector with the contents of vector2. 
 * 
 * Example:
 *      vect1.swap(vect2);
 * 
 * This statement swaps the contents of 
 * vect1 and vect2
 *************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vector_1 {19, 20, 54, 55, 79, 100};
    vector<int> vector_2 {3, 4000, 100, 20, 30, 35};

    cout << "vector_1 = "
         << "{ ";
    for(auto value : vector_1)
        cout << value << " ";
    cout << "}" 
         << endl;
    cout << "vector_2 = "
         << "{ ";
    for(auto value : vector_2)
        cout << value << " ";
    cout << "}" 
         << endl;
    

    cout << "Swapping content of "
         << "vector_1 and vector_2..." 
         << endl;
    vector_1.swap(vector_2);


    cout << "vector_1 = "
         << "{ ";
    for(auto value : vector_1)
        cout << value << " ";
    cout << "}" 
         << endl;
    cout << "vector_2 = "
         << "{ ";
    for(auto value : vector_2)
        cout << value << " ";
    cout << "}" 
         << endl;

    return 0;
}