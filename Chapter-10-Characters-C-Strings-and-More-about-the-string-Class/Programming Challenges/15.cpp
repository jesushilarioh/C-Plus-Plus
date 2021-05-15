/**
 * 
 * 15. Character Analysis
 * 
 * If you have downloaded this book’s source code 
 * from the companion Web site, you will find a file 
 * named text.txt in the Chapter 10 folder. (The 
 * companion Web site is at www.pearsonhighered.com/gaddis.) 
 * Write a program that reads the file’s contents and 
 * determines the following:
 * 
 * • The number of uppercase letters in the file
 * • The number of lowercase letters in the file
 * • The number of digits in the file
 * 
 **/ 
#include <iostream>
#include <fstream>

using namespace std;

string getContentFromFile(string);
int getNumberOfUppercaseLetters(string);
int getNumberOfLowercaseLetters(string);
int getNumberOfDigits(string);

int main()
{
    string content = getContentFromFile("./text.txt");

    int number_of_uppercase_letters = getNumberOfUppercaseLetters(content),
        number_of_lowercase_letters = getNumberOfLowercaseLetters(content),
        number_of_digits            = getNumberOfDigits(content);

    cout << endl
         << "number of uppercase letters = " 
         << number_of_uppercase_letters
         << endl
         << "number of lowercase letters = "
         << number_of_lowercase_letters
         << endl
         << "number of digits            = "
         << number_of_digits
         << endl
         << endl;
    
    return 0;
}
string getContentFromFile(string file_name)
{
    ifstream input_file;
    input_file.open(file_name);
    string file_contents;

    if (input_file)
    {
        getline(input_file, file_contents);
        input_file.close();
    }
    else
    {
        cout << "Invalid file. See line #" << __LINE__ << endl << endl;
        exit(EXIT_FAILURE);
    }   
    
    return file_contents;
}
int getNumberOfUppercaseLetters(string data)
{
    int counter = 0;
    for (int i = 0; i < data.length(); i++)
    {
        if (isupper(data[i]))
            counter++;
    }
    return counter;
}
int getNumberOfLowercaseLetters(string data)
{
    int counter = 0;
    for (int i = 0; i < data.length(); i++)
    {
        if (islower(data[i]))
            counter++;
    }
    return counter;
}
int getNumberOfDigits(string data)
{
    int counter = 0;
    for (int i = 0; i < data.length(); i++)
    {
        if (isdigit(data[i]))
            counter++;
    }
    return counter;
}