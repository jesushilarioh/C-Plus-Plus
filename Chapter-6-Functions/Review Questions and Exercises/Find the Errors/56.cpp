#include <iostream>
using namespace std;
/*
 *  (56.)
 *  Errors include:
 * a). 2nd and 3rd parameters do not have include data type
 * b). Since there is a return value within the body of the
 *      function, the return type should not be void.
 */ 
// ORIGINAL
// void total(int value1, value2, value3)
// {
//     return value1 + value2 + value3;
// }

// CORRECTION
int total(int value1, int value2, int value3)
{
    return value1 + value2 + value3;
}

// APPLICATION
int main()
{
    int value = total(26, 26, 26);
    cout << "value = " << value << endl;
    return 0;
}
