//*******************************************************************
// The following function accepts two int arrays. The arrays are    * 
// compared. If they contain the same values, true is returned.     * 
// If they contain different values, false is returned.             * 
//*******************************************************************
bool testPIN(const int customerPIN[], const int databasePIN[], int size)
{
    for(int index = 0; index < size; index++)
    {
        if (customerPIN[index] != databasePIN[index])
            return false;
    }
    return true;
}