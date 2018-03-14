#ifndef CAR_H
#define CAR_H
#include "Automobile.h"
#include <string>
using namespace std;

// The Car class represents a car.
class Car : public Automobile
{
private:
   int doors;
   
public:
   // Default constructor
   Car() : Automobile()
   { doors = 0; }
   
   // Constructor #2
   Car(string carMake, int carModel, int carMileage,
       double carPrice, int carDoors) :
       Automobile(carMake, carModel, carMileage, carPrice)
   { doors = carDoors; }
   
   // Accessor for doors attribute
   int getDoors()
   { return doors; }
};
#endif