//**************************************************************
// This program demonstrates that changes to a function
// parameter have no effect on the original argument.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 19th, 2016
//**************************************************************
 #include <iostream>
 using namespace std;

 // Function Prototype
 void changeMe(int);

 int main()
 {
   int number = 12;

   // Display the value in number.
   cout << "number is " << number << endl;

   // Call changeMe, passing the value in number as an
   // argument.
   changeMe(number);

   // Display the value in number again.
   cout << "Now back in main again, the value of ";
   cout << "number is " << number << endl;
   return 0;
 }

 //*************************************************************
 // Definition of function changeMe.                           *
 // This function changes the value of the parameter myValue.  *
 //*************************************************************

 void changeMe(int myValue)
 {
   // Change the value of myValue to 0.
   myValue = 0;

   //Display the value in myValue.
   cout << "Now the value is " << myValue << endl;
 }
