/********************************************************************
*
*	5.6 - 5.11
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
	 *	(5.6) 											*
	 *	Name the three expressions that appear inside	*
	 *	the parentheses in the for loop's header.		*
	 *													*
	 ****************************************************/
	// ANSWER:
	// for (initialization, test, update)

	/****************************************************
	 *	(5.7) 											*
	 *	You want to write a for loop that displays "I	*
	 *	love to program" 50 times. Assume that you will	*
	 *	use a counter variable named (count).			*
	 *													*
	 ****************************************************/
	// A) What initialization expression will you use?
	// ANSWER: count = 1;
	 
	// B) What test expression will you use?
	// ANSWER: count <= 50;
	 
	// C) What update expression will you use?
	// ANSWER: count++;
	 
	// D) Write the loop.
	for (int count = 1; count <= 50; count++)
		cout << count << ". I love to program" << endl;
	 	
	/****************************************************
	 *	(5.8) 											*
	 *	What will the following program segments		*
	 *	display?
	 *													*
	 ****************************************************/
	/*******
	 *  A. *
	 *******/
	for (int count = 0; count < 6; count++)
		cout << (count + count);
		
							// ANSWER:
							// 0246810
	
	/*******
	 *  B. *
	 *******/
	for (int value = -5; value < 5; value++)
		cout << value;
		
							// ANSWER:
							// -5-4-3-2-101234
	// Line break
	cout << endl;
	
	
	/*******
	 *  C. *
	 *******/
	int x;
	for (x = 5; x <= 14; x += 3)
		cout << x << endl;
	cout << x << endl;

							// ANSWER:
							// 5
							// 8
							// 11
							// 14
							// 17
													
	/****************************************************
	 *	(5.9) 											*
	 *	write a for loops that displays your name 		*
	 *	10 times.										*
	 ****************************************************/
	for (int i = 1; i <= 10; i++)
	 	cout << i << ". Jesus Hilaro Hernandez" << endl;

	/****************************************************
	 *	(5.10) 											*
	 *	Write a for loop that displays all of the odd	*
	 *	numbers, 1 through 49.							*
	 ****************************************************/
	for (int i = 1; i <= 49; i += 2)
	 	cout << i << ". Odd numbers." << endl;
	 	
	/****************************************************
	 *	(5.11)											*
	 *	Write a for loop that displays every fifth		*
	 *	number, zero through 100.						*
	 ****************************************************/
	for (int i = 0; i <= 100; i += 5)
		cout << i << ". Every 5th number through 0 and 100." << endl;
	 
	 
	 
	// Terminate Program
	return 0;
}
