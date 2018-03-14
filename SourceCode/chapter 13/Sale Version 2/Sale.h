// This version of the Sale class uses a default argument
// in the constructor.
#ifndef SALE_H
#define SALE_H

class Sale
{
private:
   double itemCost;     // Cost of the item
   double taxRate;      // Sales tax rate
public:
   Sale(double cost, double rate = 0.05)
      { itemCost = cost;
        taxRate = rate; }

   double getItemCost() const
      { return itemCost; }
      
   double getTaxRate() const
      { return taxRate; }
   
   double getTax() const
      { return (itemCost * taxRate); }
      
   double getTotal() const
      { return (itemCost + getTax()); }
};
#endif