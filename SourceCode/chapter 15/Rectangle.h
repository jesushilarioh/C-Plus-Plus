#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
   double width;
   double length;
public:
   // Default constructor
   Rectangle()
      { width = 0.0;
        length = 0.0; }

   // Constructor #2
   Rectangle(double w, double len)
      { width = w;
        length = len; }

   double getWidth() const
      { return width; }

   double getLength() const
      { return length; }

   double getArea() const
      { return width * length; }
};
#endif 