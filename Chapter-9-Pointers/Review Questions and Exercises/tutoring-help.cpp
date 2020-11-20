#include  <iostream> 

using  namespace  std; 
int  main() 
{ 
   int value1, value2, value3;  // To show inequivalence and equivalence

    cout  <<  "Introduce the first value  "; 
    cin  >>  value1; 
    cout  <<  "Introduce the second value:  "; 
    cin  >>  value2; 
    cout  <<  "Introduce the third value:  "; 
    cin  >>  value3; 

    // Display the absolute equivalence 
    if (value1 == value2 == value3)
    { 
    cout << "All are the equivalent to each other";
    }

    // Display the inequivalence
    if (value1 != value2 && value1 != value3)
    {
    cout << "Sorry, not equivalent";
    }
    else if (value2 != value3 && value2 != value1)
    {
    cout << "Sorry, not equivalent";
    }
    else (value3 != value1 && value3 != value2)
    {
    cout << "Sorry, not equivalent";
    }

    //  Display  the  equivalence. 

    if (value1 == value2 && value1 == value3)
    {
        cout << "Only two numbers have the same value";
    }
    else if (value2 == value1 && value2 == value3)
    {
    cout << "Only two numbers have the same value";
    }

    else (value3 == value1 && value3 == value2)
    {
    cout << "Only two numbers have the same value";
    }



    return  0; 
}