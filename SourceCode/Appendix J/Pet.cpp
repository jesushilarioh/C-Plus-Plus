// Pet class implementation file
#include <string>
#include "Pet.h"
using namespace std;

// Constructor
Pet::Pet(string str)
{
   name = str;
}

// getName member function
string Pet::getName() const
{
   return name;
}
