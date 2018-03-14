// This program will assist the High Adventure Travel Agency
// in calculating the costs of their 4 major vacation packages.
// In this version of the program, the data structures needed
// to store the information in a database will be designed.
// The next modification will implement the file operations.
#include <iostream>
#include <iomanip>
using namespace std;

// The data structures

struct Package1               // Climbing Package
{
     int        num;          // Number in party
     int        beginners;    // Those needing instruction
     int        advanced;     // Those not needing instruction
     int        needEquip;    // Those renting camping equipment
     double     baseCharges;  // Base charges
     double     charges;      // Total charges
     double     instruction;  // Cost of instruction
     double     equipment;    // Cost of equipment rental
     double     discount;     // Discount
     double     deposit;      // Required deposit
};

struct Package2               // Scuba Package
{
     int        num;          // Number in party
     int        beginners;    // Those needing instruction
     int        advanced;     // Those not needing instruction
     double     baseCharges;  // Base charges
     double     charges;      // Total charges
     double     instruction;  // Cost of instruction
     double     discount;     // Discount
     double     deposit;      // Required deposit
};

struct Package3               // Sky Diving Package
{
     int        num;          // Number in party
     int        lodge1;       // number at 1st lodging choice
     int        lodge2;       // number at 2nd lodging choice
     double     baseCharges;  // Base charges
     double     charges;      // Total charges
     double     discount;     // Discount
     double     lodging;      // Cost of lodging
     double     deposit;      // Required deposit
};

struct Package4               // Spelunking Package
{
     int        num;          // Number in party
     int        needEquip;    // Those renting camping equipment
     double     baseCharges;  // Base charges
     double     charges;      // Total charges
     double     equipment;    // Cost of equipment rental
     double     discount;     // Discount
     double     deposit;      // Required deposit
};

union Pack  // Combines the four structs
{
   struct Package1 climb;
   struct Package2 scuba;
   struct Package3 sky;
   struct Package4 spel;
};

struct Reservation
{
   int packNum;      // Indicates which package is stored
   union Pack packs;
};

// Constants for the charges.
const double CLIMB_RATE = 350.0;       // Base rate - Devil's Courthouse
const double SCUBA_RATE = 1000.0;      // Base rate - Bahamas
const double SKY_DIVE_RATE = 400.0;    // Base rate - Sky diving
const double CAVE_RATE = 700.0;        // Base rate - Spelunking
const double CLIMB_INSTRUCT = 100.0;   // Climbing instruction
const double SCUBA_INSTRUCT = 100.0;   // Scuba instruction
const double DAILY_CAMP_RENTAL = 40.0; // Daily camping equip. rental
const double DAY_LODGE_1 = 65.0;       // Lodging option (sky diving)
const double DAY_LODGE_2 = 120.0;      // Lodging option (sky diving)

// Function prototypes
void climbing(Reservation &);
void scuba(Reservation &);
void skyDive(Reservation &);
void spelunk(Reservation &);
int menu();
void displayInfo(const Reservation &);
void displayPack1(const Reservation &);
void displayPack2(const Reservation &);
void displayPack3(const Reservation &);
void displayPack4(const Reservation &);

int main()
{
   int selection;
   Reservation group;

   cout << fixed << showpoint << setprecision(2);
   do
   {
      selection = menu();
      switch(selection)
      {
         case 1 :  climbing(group);
                   break;
         case 2 :  scuba(group);
                   break;
         case 3 :  skyDive(group);
                   break;
         case 4 :  spelunk(group);
                   break;
         case 5 :  cout << "Exiting program.\n\n";
      }
      if (selection < 5)
         displayInfo(group);
   } while (selection != 5);
   return 0;
}

//*****************************************************
// Definition of function menu.                       *
// Displays the main menu and asks the user to select *
// an option. Returns an integer in the range 1 - 5.  *
//*****************************************************

int menu()
{
   int choice;

   cout << "High Adventure Travel Agency\n";
   cout << "----------------------------\n";
   cout << "1) Devil's Courthouse Adventure Weekend\n";
   cout << "2) Scuba Bahama\n";
   cout << "3) Sky Dive Colorado\n";
   cout << "4) Barron Cliff Spelunk\n";
   cout << "5) Exit Program\n\n";
   cout << "Enter 1, 2, 3, 4, or 5: ";
   cin >> choice;
   while (choice < 1 || choice > 5)  // Validate input
   {
      cout << "Invalid Selection. Enter 1, 2, 3, 4, or 5: ";
      cin >> choice;
   }
   return choice;
}

//******************************************************
// Definition of climbing function.                    *
// Uses a Reservation reference parameter to hold the  *
// vacation package information.                       *
// This function calculates the charges for the        *
// Devil's Courthouse Adventure Weekend package.       *
//******************************************************

void climbing(Reservation &group)
{
   group.packNum = 1;
   cout << "\nDevil's Courthouse Adventure Weekend\n";
   cout << "------------------------------------\n";
   cout << "How many will be going who need an instructor? ";
   cin >> group.packs.climb.beginners;
   cout << "How many advanced climbers will be going? ";
   cin >> group.packs.climb.advanced;
   group.packs.climb.num = group.packs.climb.beginners +
                  group.packs.climb.advanced;
   cout << "How many will rent camping equipment? ";
   cin >> group.packs.climb.needEquip;
   // Calculate base charges.
   group.packs.climb.baseCharges = group.packs.climb.num *
                        CLIMB_RATE;
   group.packs.climb.charges = group.packs.climb.baseCharges;
   // Calculate 10% discount for 5 or more.
   if (group.packs.climb.num > 4)
   {
      group.packs.climb.discount = group.packs.climb.charges
                                  * .1;
      group.packs.climb.charges -= group.packs.climb.discount;
   }
   else
      group.packs.climb.discount = 0;
   // Add cost of instruction.
   group.packs.climb.instruction = group.packs.climb.beginners
                               * CLIMB_INSTRUCT;
   group.packs.climb.charges += group.packs.climb.instruction;
   // Add cost of camping equipment rental
   group.packs.climb.equipment = group.packs.climb.needEquip *
                        DAILY_CAMP_RENTAL * 4;
   group.packs.climb.charges += group.packs.climb.equipment;
   // Calculate required deposit.
   group.packs.climb.deposit = group.packs.climb.charges / 2.0;
}

//******************************************************
// Definition of scuba function.                       *
// Uses a Reservation reference parameter to hold the  *
// vacation package information.                       *
// This function calculates the charges for the        *
// Scuba Bahama package.                               *
//******************************************************

void scuba(Reservation &group)
{
   group.packNum = 2;
   cout << "\nScuba Bahama\n";
   cout << "------------------------------------\n";
   cout << "How many will be going who need an instructor? ";
   cin >> group.packs.scuba.beginners;
   cout << "How many advanced scuba divers will be going? ";
   cin >> group.packs.scuba.advanced;
   group.packs.scuba.num = group.packs.scuba.beginners +
            group.packs.scuba.advanced;
   // Calculate base charges.
   group.packs.scuba.baseCharges = group.packs.scuba.num *
                                   SCUBA_RATE;
   group.packs.scuba.charges = group.packs.scuba.baseCharges;
   // Calculate 10% discount for 5 or more.
   if (group.packs.scuba.num > 4)
   {
     group.packs.scuba.discount = group.packs.scuba.charges
                                  * .1;
     group.packs.scuba.charges -= group.packs.scuba.discount;
   }
   else
      group.packs.scuba.discount = 0;
   // Add cost of instruction.
   group.packs.scuba.instruction = group.packs.scuba.beginners
                               * SCUBA_INSTRUCT;
   group.packs.scuba.charges += group.packs.scuba.instruction;
   // Calculate required deposit.
   group.packs.scuba.deposit = group.packs.scuba.charges / 2.0;
}

//******************************************************
// Definition of skyDive function.                     *
// Uses a Reservation reference parameter to hold the  *
// vacation package information.                       *
// This function calculates the charges for the        *
// Sky Dive Colorado package.                          *
//******************************************************

void skyDive(Reservation &group)
{
   group.packNum = 3;
   cout << "\nSky Dive Colorado\n";
   cout << "------------------------------------\n";
   cout << "How many will be going? ";
   cin >> group.packs.sky.num;
   // Calculate base charges.
   group.packs.sky.baseCharges = group.packs.sky.num
                             * SKY_DIVE_RATE;
   group.packs.sky.charges = group.packs.sky.baseCharges;
   // Calculate 10% discount for 5 or more.
   if (group.packs.sky.num > 4)
   {
     group.packs.sky.discount = group.packs.sky.charges * .1;
     group.packs.sky.charges -= group.packs.sky.discount;
   }
   else
      group.packs.sky.discount = 0;
   // Calculate lodging costs.
   cout << "How may will stay at Wilderness Lodge? ";
   cin >> group.packs.sky.lodge1;
   cout << "How many will stay at Luxury Inn? ";
   cin >> group.packs.sky.lodge2;
   group.packs.sky.lodging = (group.packs.sky.lodge1 *
                              DAY_LODGE_1) + (group.packs.sky.lodge2 *
                              DAY_LODGE_2);
   // Calculate required deposit.
   group.packs.sky.deposit = group.packs.sky.charges / 2.0;
}

//******************************************************
// Definition of spelunk function.                     *
// Uses a Reservation reference parameter to hold the  *
// vacation package information.                       *
// This function calculates the charges for the        *
// Barron Cliff Spelunk package.                       *
//******************************************************

void spelunk(Reservation &group)
{
   group.packNum =   4;
   cout << "\nBarron Cliff Spelunk Weekend\n";
   cout << "------------------------------------\n";
   cout << "How   many will be going? ";
   cin   >> group.packs.spel.num;
   cout << "How   many will rent camping equipment? ";
   cin   >> group.packs.spel.needEquip;
   // Calculate   base charges.
   group.packs.spel.baseCharges =   group.packs.spel.num *
                        CAVE_RATE;
   group.packs.spel.charges   = group.packs.spel.baseCharges;
   // Calculate   10% discount for 5 or more.
   if (group.packs.spel.num   > 4)
   {
     group.packs.spel.discount = group.packs.spel.charges * .1;
     group.packs.spel.charges -= group.packs.spel.discount;
   }
   else
      group.packs.spel.discount = 0;
   // Add   cost of camping equipment rental
   group.packs.spel.equipment = group.packs.spel.needEquip *
                       DAILY_CAMP_RENTAL * 4;
   group.packs.spel.charges   += group.packs.spel.equipment;
   // Calculate   required deposit.
   group.packs.spel.deposit   = group.packs.spel.charges / 2.0;
}

//**************************************************************
// Definition of function displayInfo.                         *
// Uses a constant Reservation reference parameter to hold the *
// vacation package information. This function looks in the    *
// group.packNum member to determine which function to call    *
// to display the vacation package information.                *
//**************************************************************

void displayInfo(const Reservation &group)
{
   switch (group.packNum)
   {
      case 1:  displayPack1(group);
               break;
      case 2:  displayPack2(group);
               break;
      case 3:  displayPack3(group);
               break;
      case 4:  displayPack4(group);
               break;
      default: cout << "ERROR: Invalid package number.\n";
   }
}

//**************************************************************
// Definition of function displayPack1.                        *
// Uses a constant Reservation reference parameter to hold the *
// vacation package information. This function displays the    *
// information stored for vacation package 1.                  *
//**************************************************************

void displayPack1(const Reservation &group)
{
   cout << "Number in party:  "
        << group.packs.climb.num << endl;
   cout << "Base charges: $"
        << group.packs.climb.baseCharges << endl;
   cout << "Instruction cost: $"
        << group.packs.climb.instruction << endl;
   cout << "Equipment Rental: $"
        << group.packs.climb.equipment << endl;
   cout << "Discount: $"
        << group.packs.climb.discount << endl;
   cout << "Total charges: $"
        << group.packs.climb.charges << endl;
   cout << "Required deposit: $"
        << group.packs.climb.deposit << endl << endl;
}

//**************************************************************
// Definition of function displayPack2.                        *
// Uses a constant Reservation reference parameter to hold the *
// vacation package information. This function displays the    *
// information stored for vacation package 2.                  *
//**************************************************************

void displayPack2(const Reservation &group)
{
   cout << "Number in party:  "
        << group.packs.scuba.num << endl;
   cout << "Base charges: $"
        << group.packs.scuba.baseCharges << endl;
   cout << "Instruction cost: $"
        << group.packs.scuba.instruction << endl;
   cout << "Discount: $"
        << group.packs.scuba.discount << endl;
   cout << "Total Charges: $"
        << group.packs.scuba.charges << endl;
   cout << "Required deposit: $"
        << group.packs.scuba.deposit << endl << endl;
}

//**************************************************************
// Definition of function displayPack3.                        *
// Uses a constant Reservation reference parameter to hold the *
// vacation package information. This function displays the    *
// information stored for vacation package 3.                  *
//**************************************************************

void displayPack3(const Reservation &group)
{
   cout << "Number in party:  "
        << group.packs.sky.num << endl;
   cout << "Base charges: $"
        << group.packs.sky.baseCharges << endl;
   cout << "Lodging: $"
        << group.packs.sky.lodging << endl;
   cout << "Discount: $"
        << group.packs.sky.discount << endl;
   cout << "Total Charges: $"
        << group.packs.sky.charges << endl;
   cout << "Required deposit: $"
        << group.packs.sky.deposit << endl << endl;
}

//**************************************************************
// Definition of function displayPack4.                        *
// Uses a constant Reservation reference parameter to hold the *
// vacation package information. This function displays the    *
// information stored for vacation package 4.                  *
//**************************************************************

void displayPack4(const Reservation &group)
{
   cout << "Number in party:  "
        << group.packs.spel.num << endl;
   cout << "Base charges: $"
        << group.packs.spel.baseCharges << endl;
   cout << "Equipment Rental: $"
        << group.packs.spel.equipment << endl;
   cout << "Discount: $"
        << group.packs.spel.discount << endl;
   cout << "Total Charges: $"
        << group.packs.spel.charges << endl;
   cout << "Required deposit: $"
        << group.packs.spel.deposit << endl << endl;
}