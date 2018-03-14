// Specification file for the Rectangle class
// This version uses some inline member functions.
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
   private:
      double width;
      double length;
   public:
      void setWidth(double);
      void setLength(double);
      
      double getWidth() const
         { return width; }
         
      double getLength() const
         { return length; }
         
      double getArea() const
         { return width * length; }
};
#endif