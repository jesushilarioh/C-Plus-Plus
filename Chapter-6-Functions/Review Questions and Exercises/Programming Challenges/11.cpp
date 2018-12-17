/************************************************************
*
*   11. Lowest Score Drop
*
*   Write a program that calculates the average of a group 
*   of test scores, where the lowest score in the group is 
*   dropped. It should use the following functions:
*
*   • void getScore() should ask the user for a test score, 
*       store it in a reference parameter variable, and 
*       validate it. This function should be called by main 
*       once for each of the five scores to be entered.
*
*   • void calcAverage() should calculate and display the 
*       average of the four highest scores. This function 
*       should be called just once by main and should be 
*       passed the five scores.
*
*   • int findLowest() should find and return the lowest of 
*       the five scores passed to it. It should be called by 
*       calcAverage, which uses the function to determine 
*       which of the five scores to drop.
*
*   Input Validation: Do not accept test scores lower than 0 
*                       or higher than 100.
*
* 	Jesus Hilario Hernandez
* 	December 16, 2018
*
*************************************************************/
#include <iostream>
using namespace std;

// Function Prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int lowest(int, int, int, int, int);
int inputValidate(int);

int main()
{
    // Variables
    int score1, score2, score3, score4, score5;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

/********************************************************
 * Function Definition for void getScore():             *
 * getScore() should ask the user for a test score,     * 
 * store it in a reference parameter variable, and      *
 * validate it. This function should be called by main  *
 * once for each of the five scores to be entered.      *
 ********************************************************/
void getScore(int &num)
{
    cout << "What is the test score: ";
    num = inputValidate(num);
}

/********************************************************
 * Function Definition for void calcAverage():          *
 * calcAverage() should calculate and display the       *
 * average of the four highest scores. This function    *
 * should be called just once by main and should be     * 
 * passed the five scores.                              *
 ********************************************************/
void calcAverage(int num1,
                 int num2,
                 int num3,
                 int num4,
                 int num5)
{
    int average,
        lowest = findLowest(num1, num2, num3, num4, num5);
        
    if (num1 == lowest)
        average = (num2 + num3 + num4 + num5) / 4;
    else if (num2 == lowest)
        average = (num1 + num3 + num4 + num5) / 4;
    else if (num3 == lowest)
        average = (num1 + num2 + num4 + num5) / 4;
    else if (num4 == lowest)
        average = (num1 + num2 + num3 + num5) / 4;
    else if (num5 == lowest)
        average = (num1 + num2 + num3 + num4) / 4;
    
    cout << "The average is: " << average << endl;
}

/********************************************************
 * Function Definition for int findLowest():            *
 * findLowest() should find and return the lowest of    *
 * the five scores passed to it. It should be called by *
 * calcAverage, which uses the function to determine    *
 * which of the five scores to drop.                    *
 ********************************************************/
int findLowest(int num1, 
               int num2, 
               int num3, 
               int num4, 
               int num5)
{
    int smallest;

    smallest = lowest(num1, num2, num3, num4, num5);
    smallest = lowest(num2, num3, num4, num5, num1);
    smallest = lowest(num3, num4, num5, num1, num2);
    smallest = lowest(num4, num5, num1, num2, num3);
    smallest = lowest(num5, num1, num2, num3, num4);

    return smallest;
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters anything other than an (int) or anything *
 * not within a 0-100 range, it will display an error,  *
 * clear the input stream, ignore previous input up     *
 * untill the new line (\n) character.                  *
 ********************************************************/
int inputValidate(int num)
{
    while(!(cin >> num) || (num < 0 || num > 100))
    {
        cout << "Error. An integer from 0-100 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}

/********************************************************
 * Definition of lowest():                              *
 * lowest using a if statmenent to find the lowest      *
 * number.                                              *
 ********************************************************/
int lowest(int num1, 
           int num2, 
           int num3, 
           int num4, 
           int num5)
{
    int lowest;
    if (num1 < num2)
    {
        if (num1 < num3)
        {
            if (num1 < num4)
            {
                if (num1 < num5)
                {
                    lowest = num1;
                }
            }
        }
    }
    return lowest;
}