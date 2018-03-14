#include <iostream>
#include "Pet.h"
using namespace std;

int main()
{
   // Create an instance of the Pet class.
   Pet myPet("Fido");

   // Display my pet's name.
   cout << "My pet's name is " << myPet.getName() << endl;
   return 0;
}
