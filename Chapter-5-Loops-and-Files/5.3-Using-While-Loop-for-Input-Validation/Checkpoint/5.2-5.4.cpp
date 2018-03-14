/********************************************************************
*
*	5.2 Write an input validation loop that asks the user to 
*		enter a number in the range of 10 through 25.
*
*	5.3 Write an input validation loop that asks the user to 
*		enter‘Y’, ‘y’, ‘N’, or ‘n’.
*
*	5.4 Write an input validation loop that asks the user to 
*		enter “Yes” or “No”.
*
* 	Jesus Hilario Hernandez
* 	February 28, 2018
*
********************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	/****************************************************
	  * (5.2) 											*
	  *	Write an input validation loop that asks the 	*
	  *	user to enter a number in the range of 10 		*
	  * through 25.	 									*
	  *													*
	  ****************************************************/
	  
	// Variables
	int number;
	
	// Ask for (number)
	cout << "Enter a number in the range of 10-25: ";
	cin >> number;
	
	// Validate (number)
	while (number < 10 || number > 25)
	{
		cout << "ERROR: Enter a value in the range 10-25. ";
		cin >> number;
	}

	/****************************************************
	  *  (5.3) 											*
	  *	Write an input validation loop that asks the 	*
	  *	user to enter‘Y’, ‘y’, ‘N’, or ‘n’. 			*
	  *													*
	  ****************************************************/
	  
	// Variables
	char user_letter;
	
	// Ask for (user_letter)
	cout << "Enter yes or no (y/n): ";
	cin >> user_letter;
	
	// Validate (user_letter)
	while (user_letter != 'Y' && user_letter != 'y' && user_letter != 'N' && user_letter != 'n')
	{
		cout << "ERROR: Enter either 'Y' or 'N'.";
		cin >> user_letter;
	}
	
	/****************************************************
	  * (5.4) 											*
	  *	Write an input validation loop that asks the 	*
	  *	user to  enter “Yes” or “No”. 					*
	  *													*
	  ****************************************************/
	// Variables
	string user_answer;
	
	// Ask for (user_answer)
	cout << "Enter \"Yes\" or \"No\": ";
	cin >> user_answer;
	
	// Validate (user_answer)
	while (user_answer != "Yes" && user_answer != "yes" && user_answer != "no" && user_answer != "No")
	{
		cout << "ERROR: Enter either \"Yes\" or \"No\".";
		cin >> user_answer;
	}
	
	// Terminate Program
	return 0;
}
