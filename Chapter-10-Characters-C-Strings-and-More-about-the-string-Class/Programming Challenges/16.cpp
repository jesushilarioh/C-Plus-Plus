/**
 * 
 * 16. Pig Latin
 * 
 * Write a program that reads a sentence as input 
 * and converts each word to “Pig Latin.” In one 
 * version, to convert a word to Pig Latin you remove 
 * the first letter and place that letter at the end 
 * of the word. Then you append the string “ay” to 
 * the word. Here is an example:
 * 
 * English: I SLEPT MOST OF THE NIGHT
 * Pig Latin: IAY LEPTSAY OSTMAY FOAY HETAY IGHTNAY
 * 
 **/
#include <iostream>
#include <string>

using namespace std;

string leftTrim(string);
string getWord(string &);
string toPigLatin(string);

int main()
{
    string str;;
    string pigLatin = "";

    cout << "Enter a senctence: ";
    getline(cin,str);

    while(str.size() > 0)
    {
        string word = getWord(str);

        word = toPigLatin(word);

        pigLatin = pigLatin + word + " ";
    }

    cout << pigLatin << endl;
    
    return 0;
}
string trim(string str)
{
    while(str[0] == ' ')
        str.erase(0, 1);

    return str;
}
string getWord(string &str)
{
    str = trim(str);

    int index = 0;
    
    while(str[index] != ' ' && index < str.size())
        index++;
    
    string word = str.substr(0, index);

    str.erase(0, index);

    return word;
}
string toPigLatin(string word)
{
    char first = word[0];
    word.append(1, first);
    word.append("ay");
    word.erase(0, 1);

    return word;
}


/// My answers was used from this website: http://www.codinghomework.com/c-programming-challenge-10-16-pig-latin-string-operations-loops/
//// Many Thanks!!!!!