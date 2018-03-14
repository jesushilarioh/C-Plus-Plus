//********************************************************
// This program calculates the circumference of a circle.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 22, 2016
//********************************************************
 #include <iostream>
 using namespace std;

 int main()
 {
     // Constants
     const double PI = 3.14159;
     const double DIAMETER = 10.0;

     // Variable to hold the circumference
     double circumference;

     // Calculate the circumference.
     circumference = PI * DIAMETER;

     // Display the circumference.
     cout << "The circumference is: " << circumference << endl;
     return 0;
 }
