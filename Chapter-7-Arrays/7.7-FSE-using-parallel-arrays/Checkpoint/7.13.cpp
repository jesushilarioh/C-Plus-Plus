// What is the output of the following code? (You may need to use a calculator.)
// const int SIZE = 5;
// int time[SIZE] = {1, 2, 3, 4, 5},
//     speed[SIZE] = {18, 4, 27, 52, 100}, 
//     dist[SIZE]; // 18, 8, 81, 208, 500

// for (int count = 0; count < SIZE; count++) 
//     dist[count] = time[count] * speed[count];

// for (int count = 0; count < SIZE; count++) 
// {
//     cout << time[count] << " "; 
//     cout << speed[count] << " "; 
//     cout << dist[count] << endl;
// }

// Answer:
// 1 18 18
// 2 4 8
// 3 27 81
// 4 52 208
// 5 100 500

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 5;
    int time[SIZE] = {1, 2, 3, 4, 5},
        speed[SIZE] = {18, 4, 27, 52, 100}, 
        dist[SIZE]; // 18, 8, 81, 208, 500

    for (int count = 0; count < SIZE; count++) 
        dist[count] = time[count] * speed[count];

    for (int count = 0; count < SIZE; count++) 
    {
        cout << time[count] << " "; 
        cout << speed[count] << " "; 
        cout << dist[count] << endl;
    }

    return 0;
}