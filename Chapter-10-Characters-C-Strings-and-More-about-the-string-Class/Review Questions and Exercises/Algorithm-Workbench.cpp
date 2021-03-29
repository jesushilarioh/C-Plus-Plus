#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
using namespace std;

// 30. 
int findInstancesOf(char, char *);

int main()
{
    // 27. 
    char choice = 'y';
    // if (choice == 'Y' || choice == 'y')
    if (toupper(choice) == 'Y')
        cout << "valid input" << endl;

    // 28. Assume input is a char array holding a C-string.
    // Write code that counts the number of elements in the 
    // array that contains an alphabetic character.
    const int SIZE = 11;
    char input[SIZE] = "Jjiek209j3";

    int count = 0, 
        number_of_digits = 0;

    // for (int i = 0; i < SIZE; i++)
    // {
    //     if (isdigit(input[i]))
    //         number_of_digits++;
    // }
    
    while(input[count] != '\0')
    {
        if (isdigit(input[count]))
            number_of_digits++; 
        count++;
    }
    cout << "Array {input} contains " 
         << number_of_digits 
         << " digits" 
         << endl;

    /**
     * 29. Look at the following array definition:
     * 
     * char str[10];
     * 
     * Assume name is also a char array, and it holds a C-string.
     * Write code that copies the contents of name to str if the
     * C-string in name is not too big to fit in str.             */
    char str[10];
    char name[10] = "Francesca";
    strcpy(str, name);
    cout << "str  = " << str  <<  ", str  size = " << strlen(str) << endl;
    cout << "name = " << name <<  ", name size = " << strlen(name) << endl;

    /**
     * 30. Look at the following statements:
     * 
     * char str1[] = "237.89";
     * double value;
     * 
     * Write a statement that converts the string in str to a
     * double and stores the result in value. */
    char str1[] = "237.89";
    double value = atof(str1); // <cstdlib>
    // double value = stod(str1); // <string>
    cout << "str   = " << str1 << endl; 
    cout << "value * 2 = " << value * 2 << endl;

    /**
     * 31. Write a function that accepts a pointer to a C-string
     * as its argument. The function should count the number of
     * times the character 'w' occurs in the argument and return
     * that number.
     */
    char new_string[] = "wjewjelwoeWoldWekwjW"; // 7

    int num_time_w_occurs = findInstancesOf('w', new_string);
    cout << "\'w\' occurs " << num_time_w_occurs << " times " << endl;

    /**
     * 32. Assume str2 and str3 are string class objects. Write 
     * code that displays "They are the same!" if the two objects
     * contain the same string.
     */
    string str2 = "Same",
           str3 = "same";
    
    if (str2 == str3)
        cout << "They are the same!" << endl;
    else
        cout << "They are NOT the same!" << endl;

    return 0;
}
// part of 31. 
int findInstancesOf(char letter, char *c_string)
{
    int count = 0, 
        number_of_instances = 0;

    while (*c_string != '\0')
    {
        if (tolower(*c_string) == letter) // <cctype> for tolower()
            number_of_instances++;
        c_string++;
    }

    return number_of_instances;
}