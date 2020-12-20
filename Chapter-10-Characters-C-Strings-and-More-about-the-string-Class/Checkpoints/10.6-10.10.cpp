// 10.6 Write a short description of each of the following functions:
// strlen: returns the length of a C-string (not including the null terminator)
// strcat: appends the contents of the second string to the first C-string. 
// strcpy: copies the second C-string to the first C-string.
// strncat: third argument indicates the maximum number of characters to copy from the second C-string to the first C-string
// strncpy: third argument indicates the maximum number of characters to copy from the second C-string to the first C-string
//          - if the 3rd argument (int) is greater that the length of the 2nd argument (string length), the null terminator 
//            is not automatically appended to the 1st argument.
//          - if the 3rd argument is greater than the length of the 2nd argument, then the 1st argument is padded with '\0' characters.
// strcmp: if argument 1 and 2 are the same, the function returns 0.
//          - If 2nd argument is alphabetically greater than the 1st argument, it returns a negative number.
//          - If 2nd arguemnt is alphabetically less    than the 1st argument, it returns a positive number.
// strstr: searches for the first occurrence of the 2nd argument in the 1st argument.
//          - if an occurrence of argument 2 is found, the function returns a pointer to it.
//            Otherwise, it returns nullptr (address 0).
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    // 10.7 What will the following program segment display?
    char dog[] = "Fido";
    cout << strlen(dog) << endl; // 4

    // 10.8 What will the following program segment display?
    char string1[16] = "Have a ";
    char string2[9]  = "nice day";
    strcat(string1, string2);
    cout << string1 << endl; // Have a nice day
    cout << string2 << endl; // nice day

    // 10.9 Write a statement that will copy the string "Beethoven" to the array composer.
    char composer[strlen( "Beethoven")];
    strcpy(composer, "Beethoven");
    cout << composer << endl;

    // 10.10 When complete, the following program skeleton will search for the string "Windy"
    //       in the array place. If place contains "Windy" the program will display the
    //  message "Windy found." Otherwise, it will display "Windy not found."
    char place[] = "The Cindy City";
    
    cout << ((strstr(place, "Windy") != nullptr) ? "Windy found." : "Windy not found.") << endl;

    return 0;
}