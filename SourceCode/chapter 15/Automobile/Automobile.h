#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include <string>
using namespace std;

// The Automobile class holds general data
// about an automobile in inventory.
class Automobile
{
private:
   string make;   // The auto's make
   int model;     // The auto's year model
   int mileage;   // The auto's mileage
   double price;  // The auto's price

public:
   // Default constructor
   Automobile()
   {  make = "";
      model = 0;
      mileage = 0;
      price = 0.0; }
               
   // Constructor
   Automobile(string autoMake, int autoModel,
              int autoMileage, double autoPrice)
   {  make = autoMake;
      model = autoModel;
      mileage = autoMileage;
      price = autoPrice; }
   
   // Accessors
   string getMake() const
   { return make; }
   
   int getModel() const
   { return model; }
   
   int getMileage() const
   { return mileage; }
   
   double getPrice() const
   { return price; }
};
#endif