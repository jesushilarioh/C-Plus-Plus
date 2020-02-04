#include <iostream>
#include <vector>
using namespace std;
/*
 *  (90.)
 *  Errors include:
 * 1). 
 * 
 */ 

int main()
{
    // ORIGINAL
    // vector<int> numbers = { 1, 2, 3, 4 };

    // CORRECTION
    const int ARRAY_SIZE = 4;

    vector<int> numbers(ARRAY_SIZE);
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);

    // TESTS /start
    for(int i = 0; i < ARRAY_SIZE; i++)
        cout << numbers[i] << endl;
    // TESTS / end


    // C++11
    // vector<int> numbers = { 1, 2, 3, 4 };

    // TESTS /start
    // for(auto val : numbers)
    //     cout << val << endl;
    // TESTS / end

    
    return 0;
}