// Pet class specification file
#ifndef PET_H
#define PET_H
#include <string>
using namespace std;

class Pet
{
private:
   string name;   // To hold the pet's name

public:
   // Constructor
   Pet(string);
   
   // Accessor function for name
   string getName() const;
};

#endif
