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
#include <cctype>
using namespace std;

// Global constants
int ARRAY_SIZE = 20;

// Function Prototypes
char inputValidate(char);
void displayArray(char[]);
bool checkIfArraysAreEqual(char[], char[]);

int main()
{
    const int NUMBER_OF_TEST_SCORES = 20;
    // 1. store the correct answers shown above in an array
    char correct_answers[NUMBER_OF_TEST_SCORES] = {'A', 'D', 'B', 'B', 'C',
                                                   'B', 'A', 'B', 'C', 'D',
                                                   'A', 'C', 'D', 'B', 'D',
                                                   'C', 'C', 'A', 'D', 'B'};
    char student_answers[NUMBER_OF_TEST_SCORES];

    // 2. ask the user to enter the student’s answers for 
    //    each of the 20 questions and the answers should 
    //    be stored in another array
    cout << "Enter answers for 20 questions: " << endl;
    for(int score = 0; score < NUMBER_OF_TEST_SCORES; score++)
    {
        cout << "Score #" << (score + 1) << ": ";
        student_answers[score] = inputValidate(student_answers[score]);
    }
    
    cout << endl;
    displayArray(student_answers);
    cout << endl;
    displayArray(correct_answers);
    cout << endl;

    bool are_arrays_equal = checkIfArraysAreEqual(correct_answers, student_answers);

    // 3. display a message indicating whether the student 
    //    passed or failed the exam.
    cout << (are_arrays_equal == true ? "pass" : "fail") << endl;

    // 4. It should then display the total number of 
    //    correctly answered questions,

    // 5. then display the total number of incorrectly 
    //    answered questions

    // 6. then display a list showing the question numbers 
    //    of the incorrectly answered questions.

    return 0;
}

/********************************************************
 * 7. Input Validation: Only accept the letters 
 *      A, B, C, or D as answers.
 ********************************************************/
char inputValidate(char letter)
{
    bool letter_bool = true;

    cin >> letter;
    while (letter_bool == true)
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
                cout << "Error: A, B, C, or D must be entered.";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> letter;
                break;
        }
    }

    return letter;
}

bool checkIfArraysAreEqual(char[] array_1, char[] array_2)
{
    
}
void displayArray(char array[])
{
    char letter;

    cout << "Array Values: " << endl;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        letter = toupper(array[i]);
        cout  << letter << ", ";
    }
   
}