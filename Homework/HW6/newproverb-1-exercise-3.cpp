// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their _______"
// The user will input a word to finish the sentence.

// JESUS HILARIO HERNANDEZ

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
string writeProverb(string);

int main ()
{

	string word;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;
	cout << "Input a 1 if you want the sentence to be finished with party" << endl;
	cout << "Input any other number for the word country" << endl;
	cout << "Please input your choice now" << endl;
	cin  >> word;

	cout << endl;
  writeProverb(word);

  cout << endl << endl;
	return 0;
}

//  ******************************************************************************
//                            writeProverb
//
//   task:      This function prints a proverb. The function takes a string
//              from the user. The word the user provides is used to
//              end the proverb. "Now is the time for all good men to come
//              men to come to the aid of their _(user input)_" will be
//              printed to screen
//   data in:   code for ending word of proverb (string)
//   data out:  none
//
//   *****************************************************************************

string writeProverb (string endword)
{
  // Fill in the body of the function to accomplish what is described above
  cout << "Now is the time for all good men "
       << "to come to the aid of their " << endword << endl;
       return endword;
}
