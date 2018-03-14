#include<iostream>
#include "CsStudent.h"
using namespace std;

//****************************************************
// The CsStudent::getRemainingHours function returns *
// the number of hours remaining to be taken.        *
//****************************************************

int CsStudent::getRemainingHours() const
{
	int reqHours,		// Total required hours
	remainingHours;		// Remaining hours

	// Calculate the required hours.
	reqHours = MATH_HOURS + CS_HOURS + GEN_ED_HOURS;

	// Calculate the remaining hours.
	remainingHours = reqHours - (mathHours + csHours +
					 genEdHours);

	// Return the remaining hours.
	return remainingHours;
}