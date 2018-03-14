/********************************************************************
*
*	5.12 - 5.15
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
	 *	(5.12) 											*
	 *	Write a for loop that repeats seven times, 		*
	 *	asking the user to enter a number. The loop 	*
	 *	should also calculate the sum of the numbers 	*
	 *	entered.										*
	 *													*
	 ****************************************************/
	// Variables
	double total_of_7_nums = 0;
	int number;
	for (int i = 1; i <= 7; i++)
	{
		cout << "Enter a Number: ";
		cin >> number;
		total_of_7_nums += number;
	}
	cout << "Sum of all numbers = " << total_of_7_nums << endl;

	
	
	/****************************************************
	 *	(5.13) 											*
	 *	In the following program segment, which 		*
	 *	variable and which is the accumulator?			*
	 *													*
	 ****************************************************/
	 
	// Variables
	int a, x, y = 0;
	for (x = 0; x < 10; x++)
	{
		cout << "Enter a number: ";
		cin >> a;
		y += a;
	}
	cout << "The sum of those numbers is " << y << endl; 
	
														// ANSWER: y  
	
	
	
	/****************************************************
	 *	(5.14) 											*
	 *													*
	 *	Why should you be careful when choosing a 		*
	 *	sentinel value?									*
	 *													*
	 ****************************************************/
	// ANSWER: Be sure that the sentinel value is not part of a 
	//		   list of number used. Or that it is not part of the
	//		   running total.
	
	 
	 
	 /***************************************************
	 *	(5.15) 											*
	 *													*
	 *	How would you modify Program 5-13 so any 		*
	 *	negative value is a sentinel?					*
	 *													*
	 ****************************************************/
	// Variables
	int c, d, f = 0;
	
	cout << "Enter a number: ";
	cin >> c;
	
	// pretest loop (any negative value [sentinel])	
	while (c > 0)
	{
		f += c;
		cout << "Enter a number: ";
		cin >> c;
	}
	
	cout << "The sum of those numbers is " << f << endl;  
	
	
	// Variables
	int r = 0, s, t = 0;
	
	// Or
	do
	{
		t += r;
		cout << "Enter a number: ";
		cin >> r;
	} while (r > 0);
	
	cout << "Total sum of number is " << t << endl;
	
	// Terminate Program
	return 0;
}
