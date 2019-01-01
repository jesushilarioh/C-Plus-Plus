/************************************************************
 *
 *   Group Project
 * 
 *      25. Travel Expenses
 * 
 *          This program should be designed and written by a 
 *      team of students. Here are some suggestions:
 * 
 *      • One student should design function main, which will 
 *        call the other functions in the pro- gram. The 
 *        remainder of the functions will be designed by other 
 *        members of the team.
 *      
 *      • The requirements of the program should be analyzed 
 *        so each student is given about the same workload.
 * 
 *      • The parameters and return types of each function 
 *        should be decided in advance.
 * 
 *      • Stubs and drivers should be used to test and debug 
 *        the program.
 *  
 *      • The program can be implemented as a multifile 
 *        program, or all the functions can be cut and 
 *        pasted into the main file.
 * 
 *          Here is the assignment: Write a program that 
 *      calculates and displays the total travel expenses of 
 *      a businessperson on a trip. The program should have 
 *      functions that ask for and return the following:
 * 
 *      • The total number of days spent on the trip
 *      • The time of departure on the first day of the 
 *        trip, and the time of arrival back home on the 
 *        last day of the trip
 *      • The amount of any round-trip airfare
 *      • The amount of any car rentals
 *      • Miles driven, if a private vehicle was used. 
 *        Calculate the vehicle expense as $0.27 per mile 
 *        driven
 *      • Parking fees (The company allows up to $6 per day. 
 *        Anything in excess of this must be paid by the 
 *        employee.)
 *      • Taxi fees, if a taxi was used anytime during the 
 *        trip (The company allows up to $10 per day, for 
 *        each day a taxi was used. Anything in excess of 
 *        this must be paid by the employee.)
 *      • Conference or seminar registration fees
 *      • Hotel expenses (The company allows up to $90 per 
 *        night for lodging. Anything in excess of this must 
 *        be paid by the employee.)
 *      • The amount of each meal eaten. On the first day of 
 *        the trip, breakfast is allowed as an expense if the 
 *        time of departure is before 7 a.m. Lunch is allowed 
 *        if the time of departure is before 12 noon. Dinner 
 *        is allowed on the first day if the time of departure 
 *        is before 6 p.m. On the last day of the trip, breakfast 
 *        is allowed if the time of arrival is after 8 a.m. 
 *        Lunch is allowed if the time of arrival is after 1 p.m. 
 *        Dinner is allowed on the last day if the time of 
 *        arrival is after 7 p.m. The program should only ask 
 *        for the amounts of allowable meals. (The company 
 *        allows up to $9 for breakfast, $12 for lunch, and 
 *        $16 for dinner. Anything in excess of this must be 
 *        paid by the employee.)
 * 
 *          The program should calculate and display the total 
 *      expenses incurred by the busi- nessperson, the total 
 *      allowable expenses for the trip, the excess that must 
 *      be reimbursed by the businessperson, if any, and the 
 *      amount saved by the businessperson if the expenses were 
 *      under the total allowed.
 * 
 *      Input Validation: Do not accept negative numbers for 
 *                        any dollar amount or for miles driven 
 *                        in a private vehicle. Do not accept 
 *                        numbers less than 1 for the number of 
 *                        days. Only accept valid times for the 
 *                        time of departure and the time of 
 *                        arrival.
 *
 * 	Jesus Hilario Hernandez
 * 	December 29, 2018 --> "Merry Christmas!"
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Function Prototypes
int daysSpent(int);
int arrivalTime(int);
int arrivalTime(int);
double roundTripAirfare(double);
double carRentalAmount(double);
int carMilage(int);
double vehicleExpenses(double);
double parkingFees(double);
double taxiFees(double);
double conferenceFees(double conference_fees);
double hotelExpenses(double hotel_expenses);
double mealAmount(double meal_amount);
void calculateAndDisplay();

int main()
{
    // Variables
    int days_spent = daysSpent(days_spent),
        departure_time = departureTime(departure_time),
        arrival_time = arrivalTime(arrival_time);
    
    double round_trip_airfare = roundTripAirfare(round_trip_airfare),
           car_rental_amount = carRentalAmount(car_rental_amount),
           car_milage = carMilage(car_milage),
           vehicle_expense = vehicleExpenses(car_milage),
           parking_fees = parkingFees(parking_fees),   // ?
           taxi_fees = taxiFees(taxi_fees),    // ? 
           conference_fees = conferenceFees(conference_fees),
           hotel_expenses = hotelExpenses(hotel_expenses),
           meal_amount = mealAmount(meal_amount);

    calculateAndDisplay();

    return 0;
}

int daysSpent(int days_spent)
{
    cout << "Enter total days spent on trip: ";
    cin >> days_spent;
    return days_spent;
}
int departureTime(int departure_time)
{
    cout << "Enter time of departure on 1st day\n"
         << "(use military time. For example, \n"
         << "10:02 am = 1002,\n"
         << "11:00 am = 1100,\n"
         << "12:31 pm = 1231,\n"
         << " 1:00 pm = 1300,\n"
         << " 2:46 pm = 1446,\n"
         << " 3:15 pm = 1515,\n"
         << " 4:00 pm = 1600, etc...): ";
    cin >> departure_time;
    return departure_time;
}
int arrivalTime(int arrival_time)
{
    cout << "Enter time of arrival on last day\n"
         << "(use military time. For example, \n"
         << "10:02 am = 1002,\n"
         << "11:00 am = 1100,\n"
         << "12:31 pm = 1231,\n"
         << " 1:00 pm = 1300,\n"
         << " 2:46 pm = 1446,\n"
         << " 3:15 pm = 1515,\n"
         << " 4:00 pm = 1600, etc...): ";
    cin >> arrival_time;
    return arrival_time;
}
double roundTripAirfare(double round_trip_airfare)
{
    char user_choice;

    cout << "Did you pay for round trip air fair? (y/n): ";
    cin >> user_choice;

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "Enter amount of round-trip airfare: ";
        cin >> round_trip_airfare;
        return round_trip_airfare;
    }
    else if (user_choice == 'N' || user_choice == 'n')
    {
        round_trip_airfare = 0;
        return round_trip_airfare;
    }
    else
    {
        cout << "Error: Y or N must be chosen to proceed: ";
    }
    
}
double carRentalAmount(double car_rental_amount)
{
    char user_choice;

    cout << "Did you rent a car? (y/n): ";
    cin >> user_choice;
    
    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "Enter amount of car rental: ";
        cin >> car_rental_amount;
        return car_rental_amount;
    }
    else if (user_choice == 'N' || user_choice == 'n')
    {
        car_rental_amount = 0;
        return car_rental_amount;
    }
    else
    {
        cout << "Error: Y or N must be chosen to proceed: ";
    }
    
}
int carMilage(int car_milage)
{
    char user_choice;

    cout << "Did you use a personal vehicle? (y/n): ";
    cin >> user_choice;
    
    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "Enter miles driven in private vehicle: ";
        cin >> car_milage;
        return car_milage;
    }
    else if (user_choice == 'N' || user_choice == 'n')
    {
        car_milage = 0;
        return car_milage;
    }
    else
    {
        cout << "Error: Y or N must be chosen to proceed: ";
    }
}
double vehicleExpenses(double car_milage)
{
    return car_milage * .27;
}
double parkingFees(double parking_fees)
{
    char user_choice;
    int parking_days;
    double fee,
           amount_paid_by_employee;

    cout << "Any parking fees? (y/n): ";
    cin >> user_choice;

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "How many days did you pay for parking? ";
        cin >> parking_days;

        for (int i = 0; i < parking_days; i++)
        {
            cout << "Enter fee amount for day "
                 << (i + 1) << ": ";
            cin >> fee;

            if (fee <= 6.00)
                parking_fees += fee;
            else
                amount_paid_by_employee = fee - 6.00;

        }

        return parking_fees;
        // Or
        // return amount_paid_by_employee;
    }
    else if (user_choice == 'N' || user_choice == 'n')
    {
        parking_fees = 0;
        return parking_fees;
    }
    else
    {
        cout << "Error: Y or N must be chosen to proceed: ";
    }
    
}
double taxiFees(double taxi_fees)
{
    const double TAXI_LIMIT = 10.00;

    char user_choice;
    int taxi_days;
    double fee,
           amount_paid_by_employee;

    cout << "Any taxi fees? (y/n): ";
    cin >> user_choice;

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "How many days did you pay for a taxi? ";
        cin >> taxi_days;

        for (int i = 0; i < taxi_days; i++)
        {
            cout << "Enter taxi fee amount for day "
                 << (i + 1) << ": ";
            cin >> fee;

            if (fee <= TAXI_LIMIT)
                taxi_fees += fee;
            else
                amount_paid_by_employee = fee - TAXI_LIMIT;

        }

        return taxi_fees;
        // Or
        // return amount_paid_by_employee;
    }
    else if (user_choice == 'N' || user_choice == 'n')
    {
        taxi_fees = 0;
        return taxi_fees;
    }
    else
    {
        cout << "Error: Y or N must be chosen to proceed: ";
    }
}
double conferenceFees(double conference_fees)
{
    char user_choice;
    cout << "Any conference or seminar registration fees? (y/n): ";
    cin >> user_choice;

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "Enter Conference or seminar registration fees: ";
        cin >> conference_fees;
        return conference_fees;
    }
    else if (user_choice == 'N' || user_choice == 'n')
    {
        conference_fees = 0;
        return conference_fees;
    }
    else
    {
        cout << "Error: Y or N must be chosen to proceed: ";
    }
}
double hotelExpenses(double hotel_expenses)
{
    const double HOTEL_LIMIT = 90.00;

    char user_choice;
    int hotel_nights;
    double fee,
           amount_paid_by_employee;

    cout << "Any hotel expenses? (y/n): ";
    cin >> user_choice;

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "How many nights did you pay for a hotel? ";
        cin >> hotel_nights;

        for (int i = 0; i < hotel_nights; i++)
        {
            cout << "Enter hotel expense amount for night "
                 << (i + 1) << ": ";
            cin >> fee;

            if (fee <= HOTEL_LIMIT)
                hotel_expenses += fee;
            else
                amount_paid_by_employee = fee - HOTEL_LIMIT;

        }

        return hotel_expenses;
        // Or
        // return amount_paid_by_employee;
    }
    else if (user_choice == 'N' || user_choice == 'n')
    {
        hotel_expenses = 0;
        return hotel_expenses;
    }
    else
    {
        cout << "Error: Y or N must be chosen to proceed: ";
        cin >> user_choice;
    }

}

double mealAmount(double meal_amount, 
                  double departure_time, 
                  double arrival_time)
{
    const double BREAKFAST_LIMIT = 9.00,
                 LUNCH_LIMIT     = 12.00,
                 DINNER_LIMIT    = 16.00;

    char user_choice;

    double fee,
           amount_paid_by_employee;

    // FOR DEPATURE!!
    // FOR DEPATURE!!
    // FOR DEPATURE!!
    cout << "Upon depature of your first day, did you have a meal? ";
    cin >> user_choice;
    if (user_choice == 'Y' || user_choice == 'y')
    {
        if(departure_time < 700)   // Breakfast
        {
            cout << "Since your departure time was "
                 << departure_time << ", \n" 
                 << "What was amount for breakfast? ";
            cin >> fee;

            if (fee < BREAKFAST_LIMIT)
            {
                meal_amount += fee;
            }
            else
            {
                amount_paid_by_employee = fee - BREAKFAST_LIMIT;
            }
        }
        else if(departure_time > 700 && departure_time < 1200)   // Lunch
        {
            cout << "Since your departure time was "
                 << departure_time << ", \n" 
                 << "What was amount for lunch? ";
            cin >> fee;

            if (fee < LUNCH_LIMIT)
            {
                meal_amount += fee;
            }
            else
            {
                amount_paid_by_employee = fee - LUNCH_LIMIT;
            }
        }
        else if(departure_time > 1200 && departure_time < 1800)  // Dinner
        {
            cout << "Since your departure time was "
                 << departure_time << ", \n" 
                 << "What was amount for dinner? ";
            cin >> fee;

            if (fee < DINNER_LIMIT)
            {
                meal_amount += fee;
            }
            else
            {
                amount_paid_by_employee = fee - DINNER_LIMIT;
            }
        }
        else    // If not within time restrains of Breakfast, Lunch, or Dinner.
        {
            cout << "Since your departure time was "
                 << departure_time << ", \n" 
                 << "What was amount for your meal? ";
            cin >> fee;

            amount_paid_by_employee = fee;
        }
    }
    else if (user_choice == 'N' || user_choice == 'n')
    {
        meal_amount = 0.00;
    }
    else
    {
        cout << "Error: Y or N must be chosen to proceed: ";
        cin >> user_choice;
    }

    // FOR ARRIVAL
    // FOR ARRIVAL
    // FOR ARRIVAL
    cout << "Upon arrival on your last day, did you have a meal? ";
    cin >> user_choice;
    if (user_choice == 'Y' || user_choice == 'y')
    {
        if(arrival_time > 800 && arrival_time < 1300)   // Breakfast
        {
            cout << "Since your arrival time was "
                 << arrival_time << ", \n" 
                 << "What was amount for breakfast? ";
            cin >> fee;

            if (fee < BREAKFAST_LIMIT)
            {
                meal_amount += fee;
            }
            else
            {
                amount_paid_by_employee = fee - BREAKFAST_LIMIT;
            }
        }
        else if(arrival_time > 1300 && arrival_time < 1900)   // Lunch
        {
            cout << "Since your arrival time was "
                 << arrival_time << ", \n" 
                 << "What was amount for lunch? ";
            cin >> fee;

            if (fee < LUNCH_LIMIT)
            {
                meal_amount += fee;
            }
            else
            {
                amount_paid_by_employee = fee - LUNCH_LIMIT;
            }
        }
        else if(arrival_time > 1900)  // Dinner
        {
            cout << "Since your arrival time was "
                 << arrival_time << ", \n" 
                 << "What was amount for dinner? ";
            cin >> fee;

            if (fee < DINNER_LIMIT)
            {
                meal_amount += fee;
            }
            else
            {
                amount_paid_by_employee = fee - DINNER_LIMIT;
            }
        }
        else    // If not within time restrains of Breakfast, Lunch, or Dinner.
        {
            cout << "Since your arrival time was "
                 << arrival_time << ", \n" 
                 << "What was amount for your meal? ";
            cin >> fee;

            amount_paid_by_employee = fee;
        }
    }
    else if (user_choice == 'N' || user_choice == 'n')
    {
        meal_amount = 0.00;
    }
    else
    {
        cout << "Error: Y or N must be chosen to proceed: ";
        cin >> user_choice;
    }
}
void calculateAndDisplay()
{
    cout << "Total expenses incurred by businessperson: $"
         << total_expenses;
    
    cout << "Total allowable expenses for the trip : $"
         << total_allowable_expenses;

    cout << "Excess to be reimbursed to businessperson: $"
         << total_reimbursement;

    cout << "Amount saved if expenses under total allowed: $"
         << amount_saved;

}