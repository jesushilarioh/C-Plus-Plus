// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their _______"
// Inputting a 1 will use the word party. Any other number will use the word country.

// JESUS HILARIO HERNANDEZ

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb(int);

int main ()
{

	int wordCode;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;
	cout << "Input a 1 if you want the sentence to be finished with party" << endl;
	cout << "Input any other number for the word country" << endl;
	cout << "Please input your choice now" << endl;
	cin  >> wordCode;
	cout << endl;
    writeProverb(wordCode);

	return 0;
}

//  ******************************************************************************
//                            writeProverb
//
//   task:      This function prints a proverb. The function takes a number
//              from the call. If that number is a 1 it prints "Now is the time
//              for all good men to come men to come to the aid of their party."
//              Otherwise, it prints "Now is the time for all good men
//              to come to the aid of their country"
//   data in:   code for ending word of proverb (integer)
//   data out:  none
//
//   *****************************************************************************

void writeProverb (int number)


{
  // Fill in the body of the function to accomplish what is described above
  if (number == 1)
  {
    cout << "Now is the time for all good men "
         << "to come to the aid of their party" << endl;
  }
  else
  {
    cout << "Now is the time for all good men "
         << "to come to the aid of their country" << endl;
  }
}
