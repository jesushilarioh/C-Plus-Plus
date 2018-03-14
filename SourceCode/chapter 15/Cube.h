#ifndef CUBE_H
#define CUBE_H
#include "Rectangle.h"

class Cube : public Rectangle
{
protected:
   double height;
   double volume;
public:
   // Default constructor
   Cube() : Rectangle()
      { height = 0.0; volume = 0.0; }
      
   // Constructor #2
   Cube(double w, double len, double h) : Rectangle(w, len)
      { height = h;
        volume = getArea() * h; }

   double getHeight() const
      { return height; }
   
   double getVolume() const
      { return volume; }
};
#endif