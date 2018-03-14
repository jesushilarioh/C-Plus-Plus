#include "Budget.h"

// Definition of corpBudget static member variable
double Budget::corpBudget = 0;

//**********************************************************
// Definition of static member function mainOffice.        *
// This function adds the main office's budget request to  *
// the corpBudget variable.                                *
//**********************************************************

void Budget::mainOffice(double moffice)
{
   corpBudget += moffice;
}