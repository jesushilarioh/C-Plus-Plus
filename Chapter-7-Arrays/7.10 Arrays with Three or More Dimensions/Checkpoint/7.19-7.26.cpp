#include <iostream>
using namespace std;

const int NUMBER_OF_COLUMNS = 7;

void showArrayElements(int [][NUMBER_OF_COLUMNS], const int);

int main()
{
    // 7.19 Define a two-dimensional array of ints named grades. 
    //      It should have 30 rows and 10 columns.
    int grades[30][10];

    // 7.20 How many elements are in the following array?
    double sales[6][4];
    // Answer: 6 rows, 4 columns

    // 7.21 Write a statement that assigns the value 56893.12 to the 
    //      first column of the first row of the array defined 
    //      in Question 7.20.
    sales[0][0] = 56893.12;

    // 7.22 Write a statement that displays the contents of the 
    //      last column of the last row of the array defined in 
    //      Question 7.20.
    cout << "7.22: "
         << grades[29][9]
         << endl;

    // 7.23 Define a two-dimensional array named settings large enough 
    //      to hold the table of data below. Initialize the array
    //      with the values in the table.
    int settings[3][5] = {{12, 24, 32, 21, 42},
                        {14, 67, 87, 65, 90},
                        {19, 1, 24, 12, 8}};

    // 7.24 Fill in the table below so it shows the contents of the following 
    // array: 
    int table[3][4] = {{2, 3}, {7, 9, 2}, {1}};
    // Answer: 
    // 2 3 0 0 
    // 7 9 2 0
    // 1 0 0 0
    cout << "7.24: " << endl;
    for(int row = 0; row < 3; row++)
    {
        for(int column = 0; column < 4; column++)
        {
            cout << table[row][column] << " ";
        }
        cout << endl;
    }
    cout << endl;
    


    // 7.26 A video rental store keeps DVDs on 50 racks with 10 
    //      shelves each. Each shelf holds 25 DVDs. Define a 
    //      three-dimensional array large enough to 
    //      represent the store’s storage system.
    int DVDInventory[50][10][25];

    // 7.25 Write a function called displayArray7. The function should accept a 
    // two-dimensional array as an argument and display its contents on the 
    // screen. The function should work with any of the following arrays:
    int hours[5][NUMBER_OF_COLUMNS]; 
    int stamps[8][NUMBER_OF_COLUMNS]; 
    int autos[12][NUMBER_OF_COLUMNS]; 
    int cats[50][NUMBER_OF_COLUMNS];

    cout << "7.25: " << endl;
    cout << "hours: " << endl;
    showArrayElements(hours, 5);

    cout << "stamps: " << endl;
    showArrayElements(stamps, 8);

    cout << "autos: " << endl;
    showArrayElements(autos, 12);

    cout << "cats: " << endl;
    showArrayElements(cats, 50);

    return 0;
}

// 7.25 Write a function called displayArray7. The function should accept a 
// two-dimensional array as an argument and display its contents on the 
// screen. The function should work with any of the following arrays:
void showArrayElements(int array[][NUMBER_OF_COLUMNS], const int NUMBER_OF_ROWS)
{
    for(int row = 0; row < NUMBER_OF_ROWS; row++)
    {
        for(int column = 0; column < NUMBER_OF_COLUMNS; column++)
        {
            cout << array[row][column] << " ";
        }
        cout << endl;
    }
}
