// This program uses an array of ten characters to store the
// first ten Letters of the alphabet. The ASCII codes of the
// characters are displayed.
#include <iostream>
using namespace std;

int main()
{
   const int NUM_LETTERS = 10;
   char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E',
                                'F', 'G', 'H', 'I', 'J'};

   cout << "Character" << "\t" << "ASCII Code\n";
   cout << "---------" << "\t" << "----------\n";
   for (int count = 0; count < NUM_LETTERS; count++)
   {
      cout << letters[count] << "\t\t";
      cout << static_cast<int>(letters[count]) << endl;
   }
   return 0;
}