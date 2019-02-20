//***************************************************
// The getLowest function accepts a double array and*
// its size as arguments. The lowest value in the   *
// array is returned as a double.                   *
//***************************************************
double getLowest(const double numbers[], int size)
{
    double lowest;

    lowest = numbers[0];

    for(int count = 1; count < size; count++)
    {
        if (numbers[count] < lowest)
            lowest = numbers[count];
    }

    return lowest;
}