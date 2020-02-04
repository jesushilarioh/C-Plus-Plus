#include <iostream>
using namespace std;
int main()
{
    const int ARRAY_SIZE = 90;
    int array[90];
    int array_memory_size;

    array_memory_size = ARRAY_SIZE * sizeof(int);

    cout << "Array memory size for array = "
         << array_memory_size
         << endl;
    return 0;
}