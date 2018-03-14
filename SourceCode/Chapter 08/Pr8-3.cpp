// Demetris Leadership Center (DLC) product lookup program
// This program allows the user to enter a product number
// and then displays the title, description, and price of
// that product.
#include <iostream>
#include <string>
using namespace std;

const int NUM_PRODS = 9;		// The number of products produced
const int MIN_PRODNUM = 914;	// The lowest product number
const int MAX_PRODNUM = 922;	// The highest product number

// Function prototypes
int getProdNum();
int binarySearch (const int [], int, int);
void displayProd(const string [], const string [], const double [], int);

int main()
{
	// Array of product IDs
	int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920, 
						 921, 922};

	// Array of product titles
	string title[NUM_PRODS] = 
			{ "Six Steps to Leadership",
			  "Six Steps to Leadership",
			  "The Road to Excellence",
			  "Seven Lessons of Quality",
			  "Seven Lessons of Quality",
			  "Seven Lessons of Quality",
			  "Teams Are Made, Not Born",
			  "Leadership for the Future",
			  "Leadership for the Future"
			};

	// Array of product descriptions
	string description[NUM_PRODS] = 
			{ "Book", "Audio CD", "DVD",
			  "Book", "Audio CD", "DVD",
			  "Book", "Book", "Audio CD"
			};

	// Array of product prices
	double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95, 
								31.95, 14.95, 14.95, 16.95};

	int prodNum;	// To hold a product number
	int index;		// To hold search results
	char again;		// To hold a Y or N answer

	do
	{
		// Get the desired product number.
		prodNum = getProdNum();

		// Search for the product number.
		index = binarySearch(id, NUM_PRODS, prodNum);

		// Display the results of the search.
		if (index == -1)
			cout << "That product number was not found.\n";
		else
			displayProd(title, description, prices, index);

		// Does the user want to do this again?
		cout << "Would you like to look up another product? (y/n) ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
	return 0;
}

//***************************************************
// Definition of getProdNum function                *
// The getProdNum function asks the user to enter a *
// product number. The input is validated, and when *
// a valid number is entered, it is returned.       *
//***************************************************

int getProdNum()
{
	int prodNum; // Product number

	cout << "Enter the item's product number: ";
	cin >> prodNum;
	// Validate input
	while (prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM)
	{
		cout << "Enter a number in the range of " << MIN_PRODNUM;
		cout <<" through " << MAX_PRODNUM << ".\n";
		cin >> prodNum;
	}
	return prodNum;
}

//***************************************************************
// Definition of binarySearch function                          *
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of numElems        *
// elements, is searched for the number stored in value. If the *
// number is found, its array subscript is returned. Otherwise, *
// -1 is returned indicating the value was not in the array.    *
//***************************************************************

int binarySearch(const int array[], int numElems, int value)
{
	int first = 0,			 // First array element
		last = numElems - 1, // Last array element
		middle,				 // Midpoint of search
		position = -1;		 // Position of search value
	bool found = false;		 // Flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2;  // Calculate midpoint
		if (array[middle] == value)	  // If value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (array[middle] > value) // If value is in lower half
			last = middle - 1;
		else
			first = middle + 1;			// If value is in upper half
	}
	return position;
}

//************************************************************
// The displayProd function accepts three arrays and an int. *
// The arrays parameters are expected to hold the title,     *
// description, and prices arrays defined in main. The index *
// parameter holds a subscript. This function displays the   *
// information in each array contained at the subscript.     *
//************************************************************

void displayProd(const string title[], const string desc[],
                 const double price[], int index)
{
	cout << "Title: " << title[index] << endl;
	cout << "Description: " << desc[index] << endl;
	cout << "Price: $" << price[index] << endl;
}	