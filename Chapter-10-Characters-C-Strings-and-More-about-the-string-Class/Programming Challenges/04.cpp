/**
 * 4. Average Number of Letters
 * 
 * Modify the program you wrote for Programming
 * Challenge 3 (Word Counter), so it also displays
 * the average number of letters in each word.
 */
#include <iostream>
#include <cctype>

using namespace std;

int numberOfWords(const char *);
double averageNumberOfLetters(const char *, const int);

int main()
{
    const int SIZE = 80;
    char user_input[SIZE];

    cout << "\nEnter a sentence: ";
    cin.getline(user_input, SIZE);

    int number_of_words = 
        numberOfWords(user_input);
        
    double average_number_of_letters = 
        averageNumberOfLetters(user_input, number_of_words);

    cout << "Your sentence has " 
         << number_of_words
         << " words,\n" 
         << "with each word having an average of "
         << average_number_of_letters
         << " letters.\n"
         << endl;

    return 0;
}

int numberOfWords(const char *c_string)
{
    int number_of_words = 0;
    int length = 0;

    while (*c_string != '\0')
    {
        if (*c_string == ' ')
            length = 0;
        else if(++length == 1)
            number_of_words++;
        
        c_string++;
    }
    
    return number_of_words;
}

double averageNumberOfLetters(const char *c_string, const int number_of_words)
{
    int number_of_letters = 0;

    while(*c_string != '\0')
    {
        if (isalnum(*c_string))
            number_of_letters++;
        
        c_string++;
    }

    return number_of_letters / static_cast<double>(number_of_words);
}