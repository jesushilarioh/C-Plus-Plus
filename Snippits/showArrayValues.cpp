//***************************************************
// Definition of function showValues.               *
// This function accepts an array of integers and   *
// the array's size as its arguments. The contents  *
// of the array are displayed.                      *
//***************************************************
void showValues(int nums[], int size)
{
    for(int i = 0; i < size; i++)
        cout << nums[i] << " ";
    cout << endl;
}