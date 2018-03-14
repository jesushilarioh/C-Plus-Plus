#ifndef BUDGET_H
#define BUDGET_H

// Budget class declaration
class Budget
{
private:
   static double corpBudget;  // Static member
   double divisionBudget;     // Instance member
public:
   Budget() 
      { divisionBudget = 0; }

   void addBudget(double b)
      { divisionBudget += b;
        corpBudget += b; }

   double getDivisionBudget() const
      { return divisionBudget; }

   double getCorpBudget() const
      { return corpBudget; }
};

// Definition of static member variable corpBudget
double Budget::corpBudget = 0;

#endif