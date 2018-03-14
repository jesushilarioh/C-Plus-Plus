#ifndef AUXIL_H
#define AUXIL_H

class Budget;  // Forward declaration of Budget class 

// Aux class declaration

class AuxiliaryOffice
{
private:
   double auxBudget;
public:
   AuxiliaryOffice() 
      { auxBudget = 0; }
      
   double getDivisionBudget() const
      { return auxBudget; }
      
   void addBudget(double, Budget &);
};

#endif