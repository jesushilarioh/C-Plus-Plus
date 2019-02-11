// 7.6
// What is the output of the following code?
#include <iostream>
using namespace std;
int main()
{
    int values[5], count;

    for (count = 0; count < 5; count++)
        values[count] = count + 1;
        // values[0] = 1
        // values[1] = 2
        // values[2] = 3
        // values[3] = 4
        // values[4] = 5
    
    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
        // Output: 
        // 1
        // 2
        // 3
        // 4
        // 5

    return 0;
}
