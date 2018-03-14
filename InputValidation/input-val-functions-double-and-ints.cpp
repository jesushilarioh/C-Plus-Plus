// Function prototype
int inputVal(int);          // Error checking for int
double inputVal(double);    // Error checking for double

//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using integers.            *
//*********************************************************
// Input validation function for int
int inputVal(int num)
{
    while (!(cin >> num))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}

//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using doubles.             *
//*********************************************************
double inputVal(double num)
{
    while (!(cin >> num))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}
