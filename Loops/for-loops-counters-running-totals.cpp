//********************************************************************
// This program counter, running totals, averages, and sums
// 130 kph (in 10kph increments) to mph.
//
// JESUS HILARIO HERNANDEZ
// Last updated: October 5, 2016
//
//********************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int counter = 0, number = 1;
    for (int x = 1; x <= 50; x++)
    {
        counter++;
        cout << number++ <<". I love to program" << endl;
    }
    cout << "There are " << counter << " \"I love to program\" statements.\n" << endl;


    for (int count = 0; count < 6; count++)
    {
        cout << (count + count) << endl;
    }
    cout << endl;

    float count3 = 0, sum3 = 0, average3;
    for (int value = -5; value <= 5; value++)
    {
        count3++;
        sum3 = sum3 + value;
        cout << value << endl;
    }
    cout << "There are " << count3 << " numbers between -5 and 5." << endl;
    cout << "The sum of the numbers between -5 and 5 is " << sum3 << "." << endl;

    average3 = sum3 / count3;
    cout << "The average of the all numbers between -5 and 5 is " << average3 << "." << endl;
    cout << endl;

    int namecount = 1;
    for (int name = 1; name <= 10; name++)
    {
        cout << namecount << ". JESUS HILARIO HERNANDEZ." << endl;
        namecount++;
    }
    cout << endl;

    float oddcounter = 0, sum = 0, average;
    for (int odd = 1; odd <= 49; odd += 2)
    {
        oddcounter++;
        sum = sum + odd;
        cout << "all odds: " << odd << endl;
    }
    cout << "There are " << oddcounter << " odd numbers from 1 - 49. " << endl;
    cout << "The sum of all odd numbers from 1 - 49 is " << sum << "." << endl;

    average = sum / oddcounter;
    cout << "The average of all odd numbers from 1 - 49 is " << average << "." << endl;
    cout << endl;

    float fivesSum = 0, fivesCount = 0, fivesAverage;
    for (int fives = 0; fives <= 100; fives += 5)
    {
        fivesCount++;
        fivesSum = fivesSum + fives;
        cout << "by fives: " << fives << endl;
    }
    cout << "The total number of 5's including 0 betwee 0 and 100 is " << fivesCount << endl;
    cout << "The sum total of every multiple of 5 between 0 and 100, "
         << "including zero is " << fivesSum << "." << endl;

    fivesAverage = fivesSum / fivesCount;
    cout << "The average of the sum total of every multiple of 5 "
         << "between 0 - 100, including zero is " << fivesAverage << "." << endl;
    cout << endl;
    return 0;
}
