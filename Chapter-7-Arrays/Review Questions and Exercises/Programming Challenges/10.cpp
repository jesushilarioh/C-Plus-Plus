/************************************************************
 *
 *   10. Driver’s License Exam
 * 
 *  The local Driver’s License Office has asked you to write 
 *  a program that grades the written portion of the driver’s 
 *  license exam. The exam has 20 multiple choice questions. 
 *  Here are the correct answers:
 *  
 *  1. A    6.  B       11. A   12. C 
 *  2. D    7.  A       13. D   14. B 
 *  3. B    8.  B       15. D   16. C 
 *  4. B    9.  C       17. C   18. A 
 *  5. C    10. D       19. D   20. B
 *  
 *  Your program should store the correct answers shown 
 *  above in an array. It should ask the user to enter the 
 *  student’s answers for each of the 20 questions, and the 
 *  answers should be stored in another array. After the 
 *  student’s answers have been entered, the program should 
 *  display a message indicating whether the student passed or 
 *  failed the exam. (A student must correctly answer 15 of the 
 *  20 questions to pass the exam.) It should then display the 
 *  total number of correctly answered questions, the total number 
 *  of incorrectly answered questions, and a list showing the 
 *  question numbers of the incorrectly answered questions.
 *  
 *  Input Validation: Only accept the letters A, B, C, 
 *  or D as answers.
 *
 *************************************************************/
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

char inputValidate(char);
void displayArray(char[], string, int);
void displayVector(vector<int>, string);

int main() 
{
    const int NUMBER_OF_QUESTIONS = 20;
    int number_of_correct_answers = 0;
    char correct_answers[NUMBER_OF_QUESTIONS] = {'A', 'D', 'B', 'B', 'D',
                                                 'B', 'A', 'B', 'C', 'D', 
                                                 'A', 'C', 'D', 'B', 'D',
                                                 'C', 'C', 'A', 'D', 'B'};
    char student_answers[NUMBER_OF_QUESTIONS];
    vector<int> incorrect_answers;


    cout << "Enter answers for 20 questions: " << endl;
    for(int i = 0; i < NUMBER_OF_QUESTIONS; i++)
    {
        cout << "Answer #" << (i + 1) << ": ";
        student_answers[i] = inputValidate(student_answers[i]);
    }

    for(int i = 0; i < NUMBER_OF_QUESTIONS; i++)
    {
        if (student_answers[i] == correct_answers[i])
            number_of_correct_answers++;
        else
            incorrect_answers.push_back(i + 1);

    }

    cout << "\n\nOutcome: " 
         << (number_of_correct_answers >= 15 ? "Pass" : "Fail") 
         << endl;

    cout << "Total number of correctly answered questions: " 
         << number_of_correct_answers
         << endl;

    cout << "Total number of incorrectly answered questions: "
         << NUMBER_OF_QUESTIONS - number_of_correct_answers
         << endl;

    displayArray(student_answers, "Student answers: ", NUMBER_OF_QUESTIONS);
    cout << endl;

    displayArray(correct_answers, "Correct answers: ", NUMBER_OF_QUESTIONS);
    cout << endl;

    displayVector(incorrect_answers, "Incorrect Answers: ");
    cout << endl
         << endl;
    
    return 0;
}

char inputValidate(char letter)
{
    bool letter_bool = true;
    cin >> letter;
    while(letter_bool)
    {
        switch (letter)
        {
            case 'a':
            case 'A':
            case 'b':
            case 'B':
            case 'c':
            case 'C':
            case 'd':
            case 'D':
                letter_bool = false;
                break;
            
            default:
                cout << "Error. Must enter A, B, C, or D: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> letter;
                break;
        }
    }

    return toupper(letter);
}

void displayArray(char array[], string array_name, int ARRAY_SIZE)
{
    cout << array_name << endl;
    for(int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << ", ";
}

void displayVector(vector<int> vector, string vector_name)
{
    cout << vector_name << endl;
    for(int i = 0; i < vector.size(); i++)
        cout << vector[i] << ", ";
}
