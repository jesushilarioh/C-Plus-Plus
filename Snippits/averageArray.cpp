//
// Write the function avgArray here. 
//
double avgerageArray(int array[], int SIZE)
{
    double total;
    for(int i = 0; i < SIZE; i++)
    {
        total += array[i];
    }

    return total / static_cast<double>(SIZE);
}