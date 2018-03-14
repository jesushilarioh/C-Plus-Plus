// Implementation file for the Account class.
#include "Account.h"

bool Account::withdraw(double amount)
{
   if (balance < amount)
      return false; // Not enough in the account
   else
   {
      balance -= amount;
      transactions++;
      return true;
   }
}