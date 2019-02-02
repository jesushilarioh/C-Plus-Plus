# C-Plus-Plus
C++ practice and exercices.

## C++
Hey y'all, these examples come from my learning through Tony Gaddis, "Starting Out With C++", 8th Edition. 
Feel free to use.


## Programming Challenges
In particular, as I've been plowing through the programming challenges at the end of each chapter, I've also been recording each programming challenge on [my youtube channel](https://www.youtube.com/jesushilariohernandez). You can find the programming challenges in each chapter's directory under 
```
{any given chapter}/Review Questions and Exercises/Programming Challenges
```

## Sample Example
Here is an example of what you'll see... in these examples. 
```C++
//***********************************************
// This program calculates the user's pay.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 21, 2016
//***********************************************
#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work?";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "How much do you get paid per hour?";
    cin >> rate;

    // Calculate the pay.
    pay = hours * rate;

    // Display the pay.
    cout << "You have earned $" << pay << endl;
    
    return 0;
}
```
