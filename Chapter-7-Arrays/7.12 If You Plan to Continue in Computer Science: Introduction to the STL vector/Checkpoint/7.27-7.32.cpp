// 7.27 What header file must you #include in order to define vector objects?
#include <vector>

using namespace std;
int main()
{
    // 7.28 Write a definition statement for a vector named frogs. 
    //  `   frogs should be an empty vector of ints.
    vector<int> frogs;

    // 7.29 Write a definition statement for a vector named lizards. 
    // lizards should be a vector of 20 floats.
    vector<float> lizards(20);

    // 7.30 Write a definition statement for a vector named toads. 
    // toads should be a vector of 100 chars, with each element 
    // initialized to 'Z'.
    vector<char> toads(100, 'Z');

    // 7.31 gators is an empty vector of ints. Write a statement that 
    // stores the value 27 in gators.
    vector<int> gators; 
    gators[0] = 27;

    // 7.32 snakes is a vector of doubles, with 10 elements. Write a 
    // statement that stores the value 12.897 in element 4 of the 
    // snakes vector.
    vector<double> snakes(10);
    snakes[3] = 12.897;

    return 0;
}
