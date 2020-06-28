#include <iostream>
#include <iomanip>
using namespace std;

void calcSales(const int[], const double[], double[], int);
void showOrder(const double[], const int[], int);
void dualSort(int[], double[], int);
void showTotals(const double[], const int[], int);
void swap(double &, double &);
void swap(int &, int &);

int main()
{
    const int NUMBER_OF_PRODUCTS = 9;

    int product_ids[NUMBER_OF_PRODUCTS] = {914, 915, 916, 917, 918,
                                  919, 920, 921, 922 };
    int number_of_units_sold[NUMBER_OF_PRODUCTS] = { 842, 416, 127, 514, 437,
                                      269, 97, 492, 212 };
    double product_prices[NUMBER_OF_PRODUCTS] = { 12.95, 14.95, 18.95, 16.95, 21.95,
                                          31.95, 14.95, 14.95, 16.95 };
    double sales_amounts[NUMBER_OF_PRODUCTS];

    calcSales(number_of_units_sold, product_prices, sales_amounts, NUMBER_OF_PRODUCTS);
    dualSort(product_ids, sales_amounts, NUMBER_OF_PRODUCTS);
    cout << setprecision(2) << fixed << showpoint;
    showOrder(sales_amounts, product_ids, NUMBER_OF_PRODUCTS);
    showTotals(sales_amounts, number_of_units_sold, NUMBER_OF_PRODUCTS);

    return 0;
}

void calcSales(const int number_of_units_sold[], const double product_prices[], double sales_amounts[], int ARRAY_SIZE)
{
    for (int index = 0; index < ARRAY_SIZE; index++)
        sales_amounts[index] = number_of_units_sold[index] * product_prices[index];

}

void dualSort(int product_ids[], double sales_amounts[], int ARRAY_SIZE)
{
    int start_index, 
        max_index,
        temporary_id;

    double max_value;
    
    for (start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        max_index = start_index;
        max_value = sales_amounts[start_index];
        temporary_id = product_ids[start_index];

        for (int index = (start_index + 1); index < ARRAY_SIZE; index++)
        {
            if (sales_amounts[index] > max_value)
            {
                max_value = sales_amounts[index];
                temporary_id = product_ids[index];
                max_index = index;
            }
        }
        swap(sales_amounts[max_index], sales_amounts[start_index]);
        swap(product_ids[max_index], product_ids[start_index]);
    }
    
}

void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void showOrder(const double sales_amounts[], const int product_ids[], int ARRAY_SIZE)
{
    cout << "Products Number\tSales\n";
    cout << "--------------------------------\n";
    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        cout << product_ids[index] << "\t\t$";
        cout << setw(8) << sales_amounts[index] << endl;
    }
    cout << endl;
}

void showTotals(const double sales_amounts[], const int number_of_units_sold[], int ARRAY_SIZE)
{
    int total_units_sold = 0;
    double total_sales_amount = 0.0;

    for (int index = 0; index < ARRAY_SIZE; index++)
    {
        total_units_sold += number_of_units_sold[index];
        total_sales_amount += sales_amounts[index];
    }
    cout << "Total units sold:  " << total_units_sold << endl;
    cout << "Total sales     : $" << total_sales_amount << endl;
}