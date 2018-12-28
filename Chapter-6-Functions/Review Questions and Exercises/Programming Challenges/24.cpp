/************************************************************
 *
 *   24. Rock, Paper, Scissors Game
 * 
 *      Write a program that lets the user play the game of 
 *      Rock, Paper, Scissors against the computer. The program 
 *      should work as follows.
 * 
 *      1. When the program begins, a random number in the 
 *         range of 1 through 3 is generated. If the number 
 *         is 1, then the computer has chosen rock. If the 
 *         number is 2, then the computer has chosen paper. 
 *         If the number is 3, then the computer has chosen 
 *         scissors. (Don’t display the computer’s choice yet.)
 * 
 *      2. The user enters his or her choice of “rock”, “paper”, 
 *         or “scissors” at the keyboard. (You can use a menu if 
 *         you prefer.)
 * 
 *      3. The computer’s choice is displayed.
 * 
 *      4. A winner is selected according to the following 
 *         rules:
 * 
 *          • If one player chooses rock and the other player 
 *            chooses scissors, then rock wins. (The rock 
 *            smashes the scissors.)
 * 
 *          • If one player chooses scissors and the other 
 *            player chooses paper, then scissors wins. 
 *            (Scissors cuts paper.)
 * 
 *          • If one player chooses paper and the other player 
 *            chooses rock, then paper wins. (Paper wraps rock.)
 * 
 *          • If both players make the same choice, the game 
 *            must be played again to determine the winner.
 * 
 *      Be sure to divide the program into functions that perform 
 *      each major task.
 *
 * 	Jesus Hilario Hernandez
 * 	December 27, 2018 --> "Merry Christmas!"
 *
 *************************************************************/
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For the time() function
using namespace std;

// Constant variables
const int ROCK      = 1,
          PAPER     = 2,
          SCISSORS  = 3;

// Function Prototypes
int inputValidate(int);
int randomChoice(int);
int getUserChoice(int);
void displayComputerNumber(int);
void winnerSelection(int, int, bool &);

int main()
{
    // Variables
    int computer_number,
        user_number;

    bool play_again;

    do
    {
        computer_number = randomChoice(computer_number);

        user_number =  getUserChoice(user_number);
        
        displayComputerNumber(computer_number);

        winnerSelection(computer_number, user_number, play_again);

    } while (play_again == 1);
        
    return 0;
}

/****************************************************
 * Definition for inputValidate():                  *
 * inputValidate checks user input for a double.    *
 * If a double is NOT found, a                      *
 * while loop displays an error, clears and ignores *
 * previous input, and prompts the user to try      *
 * again.                                           *
 ****************************************************/
int inputValidate(int num1)
{
    
    while(!(cin >> num1))
    {
        cout << "Error. Number must not be "
             << " 0 or greater:";
        cin.clear();
        cin.ignore(1234, '\n');
    }

    return num1;
}

int randomChoice(int computer_number)
{
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    // Computer number
    return (rand() % (SCISSORS - ROCK + 1)) + ROCK;
}

int getUserChoice(int user_number)
{
    cout << "Choose 'rock', 'paper', or 'scissors'.\n"
         << "(1) for rock, (2) for paper, or (3) for scissors: ";
    cin >> user_number;

    return user_number;
}

void displayComputerNumber(int computer_number)
{
    cout << "Computer choice = "
         << computer_number
         << endl;
}

void winnerSelection(int computer_number,
                     int user_number,
                     bool &play_again)
{
    if (computer_number == ROCK)
    {
        if (user_number == PAPER)
        {
            cout << "You win: (Paper covers rock).\n";
            play_again = 0;
        }
        else if (user_number == SCISSORS)
        {
            cout << "Computer wins: (Rock smashes scissors).\n";
            play_again = 0;
        }
        else if (user_number == ROCK)
        {
            cout << "Tie. Play again to determine the winner." << endl;
            play_again = 1;
        }
            
    }
    else if (computer_number == PAPER)
    {
        if (user_number == ROCK)
        {
            cout << "Computer wins: (Paper covers rock).\n";
            play_again = 0;
        }
        else if (user_number == SCISSORS)
        {
            cout << "You win: (Scissors cuts paper).\n";
            play_again = 0;
        }
        else if (user_number == PAPER)
        {
            cout << "Tie. Play again to determine the winner." << endl;
            play_again = 1;
        }
    }
    else if (computer_number == SCISSORS)
    {
        if (user_number == ROCK)
        {
            cout << "You win: (Rock smashes scissors).\n";
            play_again = 0;
        }   
        else if (user_number == PAPER)
        {
            cout << "Computer wins: (Scissors cuts paper).\n";
            play_again = 0;
        }  
        else if (user_number == SCISSORS)
        {
            cout << "Tie. Play again to determine the winner." << endl;
            play_again = 1;
        }
    }
}