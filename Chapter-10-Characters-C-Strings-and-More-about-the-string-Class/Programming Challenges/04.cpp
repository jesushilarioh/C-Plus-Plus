/**
 * 4. Average Number of Letters
 * 
 * Modify the program you wrote for Programming
 * Challenge 3 (Word Counter), so it also displays
 * the average number of letters in each word.
 */
#include <iostream>

using namespace std;

int numberOfWords(const char *);
double averageNumberOfLetters(const char *, const int);

int main()
{
    const int SIZE = 80;
    char user_input[SIZE];

    cout << "\nEnter a sentence: ";
    cin.getline(user_input, SIZE);

    int number_of_words = numberOfWords(user_input);
    double average_number_of_letters = averageNumberOfLetters(user_input, number_of_words);

    cout << "Your sentence has " << number_of_words
         << " words.\n" 
         << endl;
    cout << "The average number of letters in each word = "
         << average_number_of_letters
         << endl;

    return 0;
}

int numberOfWords(const char *c_string)
{
    int count = 0;

    while (*c_string != '\0')
    {
        if (*c_string == ' ')
            count++;

        c_string++;
    }
    
    return (count + 1);
}

double averageNumberOfLetters(const char *c_string, const int number_of_words)
{
    int count = 0;

    while (*c_string != '\0')
    {
        if (isalpha(*c_string))
            count++;
        
        c_string++;
    }
    return (static_cast<double>(count) / static_cast<double>(number_of_words));
}