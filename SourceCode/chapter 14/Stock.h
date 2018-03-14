#ifndef STOCK
#define STOCK
#include <string>
using namespace std;

class Stock
{
private:
   string symbol;		// Trading symbol of the stock
   double sharePrice;   // Current price per share
public:
   // Default Constructor
   Stock()
      { set("", 0.0); }

   // Constructor
   Stock(const string sym, double price)
      { set(sym, price); }

   // Copy constructor
   Stock(const Stock &obj)
      { set(obj.symbol, obj.sharePrice); }

   // Mutator function
   void set(string sym, double price)
      { symbol = sym;
        sharePrice = price; }

   // Accessor functions
   string getSymbol() const
      { return symbol; }

   double getSharePrice() const
      { return sharePrice; }
};
#endif