/********************************************************************
*
*	  008. Math Tutor
*
*       This program started in Programming Challenge 17 of Chapter 3,
*       and was modified in Programming Challenge 11 of Chapter 4.
*
*       Modify the program again so it displays a menu allowing
*       the user to select an addition, subtraction, multiplication,
*       or division problem. The final selection on the menu should
*       let the user quit the program. After the user has finished
*       the math problem, the program should display the menu
*       again. This process is repeated until the user chooses to quit the
*       program.
*
*       Input Validation: If the user selects an item not on the
*                         menu, display an error message and display
8                         the menu again.
*
* 	Jesus Hilario Hernandez
* 	March 23th 2018
*
********************************************************************/
#include <iostream>
#include <cstdlib>  // For rand and srand functions
#include <ctime>    // For the time function
using namespace std;

// Function Prototypes
// Programming Challenge 17, Chapter 3
void programming_challenge_17_Ch_3();
// Programming Challenge 11, Chapter 4
void programming_challenge_11_Ch_4();


int main()
{
    // Uncomment to see Programming Challenge 17, Chapter 3
    // programming_challenge_17_Ch_3();

    // Uncomment to see Programming Challenge 11, Chapter 4
    // programming_challenge_11_Ch_4();

    // Display menu with 5 choices

    // Terminate program
    return 0;
}



/********************************************
 *  Programming Challenge 17 of Chapter 3   *
 *  Programming Challenge 17 of Chapter 3   *
 *  Programming Challenge 17 of Chapter 3   *
 ********************************************/
void programming_challenge_17_Ch_3()
{
     int MIN_VALUE = 100,
         MAX_VALUE = 1000,
         num1,
         num2;

     // Get the system time.
     unsigned seeds = time(0);

     // Seed the random number generator.
     srand(seeds);

     cout << endl;
     cout << "------------------------------------------------------\n" << endl;
     cout << "This program displays two random numbers to be added.\n" << endl;

     // Generate two random numbers to be added
     num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
     num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

     // Display problem to solve
     cout << num1 << " + " << num2 << " = ? \n" << endl;

     // Ask user to press enter to continue
     cout << "Press \"ENTER\" to see solution";
     cin.get();
     cout << endl;

     // Display the answer to the problem
     cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
     cout << "\n-------------------------------------------------------" << endl;
}



/********************************************
 *  Programming Challenge 11 of Chapter 4   *
 *  Programming Challenge 11 of Chapter 4   *
 *  Programming Challenge 11 of Chapter 4   *
 ********************************************/
void programming_challenge_11_Ch_4()
{
     // Constant Variables
     const int MIN_NUM = 99,
               MAX_NUM = 999;

     // Variables
     int user_answer,
         rand_num_1,
         rand_num_2,
         rand_num_answer;

     // Show 2 random numbers to be added
     // Assign system time to a variable.
     unsigned seed = time(0);

     // Seed random number generator with system time
     srand(seed);

     // Generate two random numbers
     rand_num_1 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
     rand_num_2 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;

     // sum of the two random numbers.
     rand_num_answer = rand_num_1 + rand_num_2;

     // Display math problem & receive answer
     cout << "\n  " << rand_num_1 << endl;
     cout << " +" << rand_num_2 << endl;
     cout << "------" << endl << " ";
     cin >> user_answer;

     // Decision statement (check user answer) Display: correct or incorrect
     if (user_answer == rand_num_answer)
         cout << "\nCongratulations!";
     else
         cout << "\nOops. Correct answer here: " << rand_num_answer;

     // Format line break.
     cout << endl;
     cout << endl;

}
