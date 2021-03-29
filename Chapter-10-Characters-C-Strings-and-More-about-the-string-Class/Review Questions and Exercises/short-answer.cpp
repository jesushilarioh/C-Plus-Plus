// 1. What header file must you include in a program
// using character-testing functions such as isalpha 
// and isdigit?
/**
 * 2. What header file must you include in a program 
 * using the character conversion functions toupper 
 * and tolower?
 */
#include <cctype>

/**
 * 5. What header file must you include in a program 
 * using string functions such as strlen and strcpy?
 */
#include <cstring>

/**
 * 6. What header file must you include in a program 
 * using string/numeric conversion functions such as 
 * atoi and atof?
 */
#include <cstdlib>

/**
 * 7. What header file must you include in a program 
 * using string class object?
 */
#include <string>

#include <iostream>
using namespace std;

int main()
{
    /**
     * 3. Assume c is a char variable. What value does 
     * c hold after each of the following statements 
     * executes?
     */
    char c;
    c = toupper('a'); // A
    cout << "c = " << c << endl;
    c = toupper('B'); // B
    cout << "c = " << c << endl;
    c = tolower('D'); // d
    cout << "c = " << c << endl;
    c = toupper('e'); // E
    cout << "c = " << c << endl;


    /**
     * 4. Look at the following code. What value will 
     * be stored in s after the code executes?
     */
    char name[10];
    int s;
    strcpy(name, "Jimmy");
    s = strlen(name); // 5
    cout << "s = " << s << endl;

    /**
     * 8. How do you compare string class objects?
     * Answer: there is no need to use a function like
     * strcmp(). Using relational operators 
     * (<,>,<=,>=,==, and !=) 
     * is more suitable when comparing string objects...
     */


    return 0;
}