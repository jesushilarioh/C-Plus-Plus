// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.

// JESUS HILARIO HERNANDEZ

#include <iostream>
#include <cmath>         // needed for math functions like sqrt()
#include <iomanip>       //needed for formatting output
using namespace std;



int main()

{

  float a,b;		   // the smaller two sides of the triangle
  float hyp;		   // the hypotenuse calculated by the program

  cout << "Please input the value of the two sides" << endl;
  cin >> a >> b;


  // Fill in the assignment statement that determines the hypotenuse.
  hyp = sqrt(pow(a, 2) + pow(b, 2));

  cout << "The sides of the right triangle are " << a << " and " << b << endl;

  //setprecision(3) used for round to 2nd decimal place
  cout << "The hypotenuse is " << setprecision(3) << hyp << endl << endl;

  return 0;
}
