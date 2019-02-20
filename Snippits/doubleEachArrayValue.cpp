//*****************************************************
// Definition of function doubleArray                 *
// This function doubles the value of each element    *
// in the array passed into nums. The value passed    *
// into size is the number of elements in the array.  *
//*****************************************************
void doubleArray(int nums[], int size)
{
    for (int i = 0; i < size; i++)
        nums[i] *= 2;
}