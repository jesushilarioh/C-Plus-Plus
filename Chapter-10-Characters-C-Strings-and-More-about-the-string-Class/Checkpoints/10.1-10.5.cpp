// 10.1 Write a short description of each of the following functions:
//
// isalpha - Returns true (a nonzero number) if the argument is a letter of the alphabet
// isalnum - Retruns true if the argument is a letter of the alphabet or a digit
// isdigit - Returns true if the argument is a digit from 0 through 9.
// islower - Returns true if the argument is a lowercase letter.
// isprint - Returns true if the argument is a printable character (including a space).
// ispunct - Returns true if the arguemt is a printable character other than a digit, letter, or space. 
// isupper - Returns true if the argument is an uppercase letter.
// isspace - Returns true if the argument is a whitespace character.
// toupper - Returns the uppercase equivalent of its argument.
// tolower - Returns the lowercase equivalent of its argument.
//
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    // 10.2 Write a statement that will convert the contents of the 
    // char variable big to lowercase. The converted value should be 
    // assigned to the variable little.
    char big = 'A',
         little = tolower(big);
        
    cout << "big    = " << big << endl;
    cout << "little = " << little << endl;

    // 10.3 Write an if statement that will display the word “digit” 
    // if the variable ch contains a numeric digit. Otherwise, it 
    // should display “Not a digit.”
    char ch = 'c';
    cout << (isdigit(ch) ? "digit" : "Not a digit") << endl;

    // 10.4 What is the output of the following statement?
    cout << toupper(tolower('A')) << endl; // A

    // 10.5 Write a loop that asks the user "Do you want to 
    // repeat the program or quit? (R/Q)". The loop should 
    // repeat until the user has entered an R or Q (either 
    // uppercase or lowercase).
    char user_choice;
    do
    {
        cout << "Do you want to repeat the program or quit? (R/Q)";
        cin >> user_choice;

        while (toupper(user_choice) != 'R' && toupper(user_choice) != 'Q')
        {
            cout << "Enter either Q or R: ";
            cin >> user_choice;
        }
        

    } while (user_choice == 'R');
    
    cout << endl;
    return 0;
}
