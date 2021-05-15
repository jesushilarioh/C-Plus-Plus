/**
 * 
 * 14. Write a program that accepts as input a 
 * sentence in which all of the words are run 
 * together, but the first character of each word 
 * is uppercase. Convert the sentence to a string 
 * in which the words are separated by spaces and 
 * only the first word starts with an uppercase 
 * letter. For example the string “StopAndSmellTheRoses.” 
 * would be converted to “Stop and smell the roses.”
 * 
 **/
#include <iostream>
#include <string>

using namespace std;

void convertSentence(string &);

int main()
{
    string input_string;

    cout << "Enter a string: ";
    getline(cin, input_string);

    cout << input_string << endl;
    convertSentence(input_string);
    cout << input_string << endl;

    cout << endl;
    
    return 0;
}

void convertSentence(string &input_string)
{
    if (!isupper(input_string[0]))
        input_string[0] = toupper(input_string[0]);
    
    for (int i = 1; i < input_string.length(); i++)
    {
        if (isupper(input_string[i]))
        {
            input_string[i] = tolower(input_string[i]);
            input_string.insert(i, " ");
        }
    }
}