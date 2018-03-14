/********************************************************************
*
*	06. Assume a program has the following variable definitions:
*
*           - int units;
*           - float mass;
*           - double weight;
*
*       and the following statement:
*
*           - weight = mass * units;
*
*       Which automatic data type conversion will take place?
*
*       A) mass is demoted to an int, units remins an int, and the result
*          of mass * units is an int.
*       B) units is promoted to a float, mass remains a float, and the
*          result of mass * units is a float.
*       C) units is promoted to a float, mass remains a float, and the
*          result of mass * units is a double. <<<<<<<<<<<<<<<< C
*
* 	Jesus Hilario Hernandez
* 	December 29th 2017
*
*
********************************************************************/
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int units = 12;
    float mass = 2.0;
    double weight = 3.0;

    cout << endl;
    cout << typeid(units).name() << endl;
    cout << typeid(mass).name() << endl;
    cout << typeid(weight).name() << endl;
    cout << endl;


    weight = mass * units;
    cout << weight << endl;


    cout << endl;
    cout << typeid(units).name() << endl;
    cout << typeid(mass).name() << endl;
    cout << typeid(weight).name() << endl;
    cout << endl;

    return 0;
}
