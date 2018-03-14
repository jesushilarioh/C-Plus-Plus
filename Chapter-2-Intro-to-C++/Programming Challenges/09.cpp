/********************************************************************
*
*	09. CYBORG DATA TYPE SIZES
*       You have been given a job as a programmer on a Cyborg
*       supercomputer. In order to accomplish some calculations, you
*       need to know how many bytes the following data types use:
*       char, int, float, and double.
*       You don't have any manuals, so you can't look this information up.
*       Write a C++ program that will determine the amount of memory
*       used by these types and display the information on the screen.
*
* 	Jesus Hilario Hernandez
* 	December 19th 2017
*
*
********************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout << endl;
    cout << "A char uses " << sizeof(char) << " byte." << endl;
    cout << "An int uses " << sizeof(int) << " bytes. " << endl;
    cout << "A float uses " << sizeof(float) << " bytes. " << endl;
    cout << "A double uses " << sizeof(double) << " bytes. " << endl;
    cout << endl;

    return 0;
}
