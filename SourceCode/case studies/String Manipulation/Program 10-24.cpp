// This program prints a simple form letter reminding a customer
// of an overdue account balance.
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Function Prototypes
void printLetter(char *, char *, char *, char *, char *);
void getInfo(char *, char *, char *, char *, char *);
void getSal(char *);
void printline(const char *, int&);

// Strings that make up the form letter
const char part1[] = "Dear ";
const char part2[] = "Our records show that your account has a"
                     " balance of $";
const char part3[] = " and a past due amount of $";
const char part4[] = "Your last payment was on ";
const char part5[] = "Since we haven't heard from you in some"
	                 " time, would you please take a moment to send"
					 " us a check for the past-due amount? We value"
					 " your business and look forward to serving you"
					 " in the future.\n\n";
const char part6[] = "Sincerely,\n";
const char part7[] = "The Management\n\n";
const char part8[] = "P.S. If you've already sent your payment, ignore"
	                 " this reminder.";

int main()
{
	char salutation[4];		// To hold the salutation
	char lastName[16];		// Customer's last name
	char lastPayment[16];	// Date of last payment
	char balance[9];		// Account balace
	char pastDue[9];		// Amount past due
	char again;				// To hold Y or N

	do
	{
		// Call getInfo to get input from the user
		getInfo(salutation, lastName, balance, pastDue,
			    lastPayment);
		cout << "\n\n";
		// Now print the form letter
		printLetter(salutation, lastName, balance, pastDue,
			        lastPayment);
		cout << "\n\nDo another letter? (Y/N) ";
		cin >> again;
	} while (toupper(again) == 'Y');
	return 0;
}

//*****************************************************************
// Definition of function getInfo.                                *
// This function allows the user to enter the following items:    *
// salutation, last name, account balance, past due amount, and   *
// date of last payment. The function arguments are pointers to   *
// strings where the input will be stored.                        *
//*****************************************************************

void getInfo(char *sal, char *lname, char *bal, char *due,
	         char *lastPay)
{
	getSal(sal);
	cout << "Last name: ";
	cin >> lname;
	lname[0] = toupper(lname[0]);
	cout << "Account balance: ";
	cin >> bal;
	cout << "Past due Amount: ";
	cin >> due;
	cout << "Date of last payment (MM/DD/YYYY): ";
	cin >> lastPay;
}

//****************************************************************
// Definition of function getSal.                                *
// This function gives the user a menu from which to pick a      *
// suitable title for the letter's addressee. The choices are    *
// Mr. and Ms. The choice will be copied to the address pointed  *
// to by sal.                                                    *
//****************************************************************

void getSal(char *sal)
{
	int choice;

	do
	{
		cout << "salutation:\n";
		cout << "\t1) Mr.\n";
		cout << "\t2) Ms.\n";
		cout << "Select one: ";
		cin >> choice;
	} while (choice != 1 && choice != 2);

	if (choice == 1)
		strcpy(sal, "Mr.");
	else
		strcpy(sal, "Ms.");
}

//*************************************************************
// Definition of function printLetter.                        *
// This function prints the form letter. The parameters are   *
// pointers to the fields that contain user input.            *
//*************************************************************

void printLetter(char *sal, char *lname, char *bal, char *due,
	             char *lastPay)
{
	int position;

	// Print the salutation part of the letter
	position = 0; // Start a new line.
	printline(part1, position);
	cout << sal << " " << lname << ":" << endl << endl;

	// Print the body of the letter
	position = 0; // Start a new line.
	printline(part2, position);
	cout << bal; // Print account balance.

	// Add length of balance to position.
	position += strlen(bal);
	printline(part3, position);
	cout << due << ". ";	// Print past due amount
	position += strlen(due)+ 2;

	// Add length of due and the period and space at the
	// end of the sentence to position.
	printline(part4, position);
	cout << lastPay << ". "; // Print date of last payment.

	// Now Add length of lastPay and the period and space at the
	// end of the sentence to position.
	position += strlen(lastPay) + 2;
	printline(part5, position);

	// Print the closing.
	position = 0; // Start a new line.
	printline(part6, position);
	position = 0; // Start a new line.
	printline(part7, position);

	// Print the PS reminder.
	position = 0; // Start a new line.
	printline(part8, position);
}

//*******************************************************************
// Definition of function printline.                                *
// This function has two parameters: line and startCount.           *
// The string pointed to by line is printed. startCount is the      *
// starting position of the line in an 80 character field. There    *
// are 10-character left and right margins within the 80            *
// character field. The function performs word-wrap by looking      *
// for space character within the line at or after the 60th         *
// character. A new line is started when a space is found, or the   *
// end of the field is reached.                                     *
//*******************************************************************

void printline(const char *line, int &startCount)
{
	int charCount = 0;

	if (startCount >= 70) // If the line is already at
	{					  // or past the right margin...
		cout << "\n";	  // Start a new line.
		startCount = 0;	  // Reset startCount.
	}

	// The following while loop cycles through the string
	// printing it one character at a time. It watches for
	// spaces after the 60th position so word-wrap may be
	// performed.
	while (line[charCount] != '\0')
	{
		if (startCount >= 60 && line[charCount] == ' ')
		{
			cout << "         \n";  // Print right margin.
			charCount++;			// Skip over the space.
			startCount = 0;
		}
		if (startCount == 0)
		{
			cout << "         ";	// Print left margin.
			startCount = 10;
		}
		cout.put(line[charCount]);	// Print the character.
		charCount++;				// Update subscript.
		startCount++;				// Update position counter.
	}
}