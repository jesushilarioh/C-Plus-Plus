/**
 * 4. Average Number of Letters
 * 
 * Modify the program you wrote for Programming
 * Challenge 3 (Word Counter), so it also displays
 * the average number of letters in each word.
 */
#include <iostream>
using namespace std;

int numbersOfWords(const char *);
double averageNumberOfLetters(const char *, const int);

int main()
{
    const int SIZE = 100;
    char user_input[SIZE];

    cout << "Enter a string no longer than "
         << SIZE - 1
         << " characters: ";
    cin.getline(user_input, SIZE);

    int number_of_words = numbersOfWords(user_input);

    cout << "There are " 
         << number_of_words
         << " words in user_input: "
         << endl;

    double average_letter_per_word = averageNumberOfLetters(user_input, number_of_words);

    cout << "There are an average number of "
         << average_letter_per_word 
         << " letters per string."
         << endl;

    return 0;
}
int numbersOfWords(const char *c_string)
{
    int number_of_words = 0,
        length = 0;
    
    while(*c_string != '\0') // while (*c_string)
    {
        if(*c_string == ' ')
            length = 0;
        else if (++length == 1)
            number_of_words++;

        c_string++;
    }

    return number_of_words;
}
double averageNumberOfLetters(const char *c_string, const int number_of_words)
{
    double number_of_letters = 0;
    while (*c_string)
    {
        if (*c_string != ' ' && *c_string != '\0')
            number_of_letters++;

        c_string++;
    }

    return number_of_letters / number_of_words;
}