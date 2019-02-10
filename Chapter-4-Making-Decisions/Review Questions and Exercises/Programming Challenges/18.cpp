/********************************************************************
*
*	18. Fat Gram Calculator
*
*       Write a program that asks for the number of calories and fat
*       grams in a food. The program should display the percentage of
*       calories that come from fat. If the calories from fat are less
*       than 30% of the total calories of the food, it should also
*       display a message indicating that the food is low in fat.
*
*       One gram of fat has 9 calories, so
*       Calories from fat = fat grams * 9
*       The percentage of calories from fat can be calculated as
*       Calories from fat / total calories
*
*       Input Validation: Make sure the number of calories and fat
*       grams are not less than 0. Also, the number of calories from
*       fat cannot be greater than the total number of calories. If that
*       happens, display an error message indicating that either the
*       calories or fat grams were incorrectly entered.
*
* 	Jesus Hilario Hernandez
* 	February 10, 2019
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float calories_from_fat,
          fat_grams,
          percentage_of_calories,
          total_calories;

    cout << "\nEnter number of calories: ";
    cin >> total_calories;

    if (total_calories > 0)
    {
        cout << "Enter number of fat grams: ";
        cin >> fat_grams;

        if (fat_grams > 0)
        {
            calories_from_fat = fat_grams * 9;
            percentage_of_calories = (calories_from_fat / total_calories) * 100; // .45 == 45
            
            if (calories_from_fat > total_calories)
            {
                cout << "\nCalories from fat cannot be greater\n";
                cout << "then the total number of calories." << endl;
                cout << "Either the total calories or fat\n";
                cout << "grams were entered incorrectly." << endl;
                cout << "Rerun the program and try again." << endl << endl;
            }
            else
            {
                cout << "Total calories                         = " << total_calories << " cal"<< endl;
                cout << "Total fat grams                        = " << fat_grams << " g" << endl;
                cout << "Total calories from fat                = " << calories_from_fat << " cal from fat"<< endl;
                cout << "Total percentage of calories from fat  = " << percentage_of_calories << '%' << endl;
                cout << endl;
            }
        }
        else
        {
            cout << "We're sorry. Fat grams must be more than 0.\n";
            cout << "Please rerun the progarm and try again." << endl;
        }
    }
    else
    {
        cout << "We're sorry. Total calories must be more than 0.\n";
        cout << "Please rerun the progarm and try again." << endl;
    }
    

    return 0;
}