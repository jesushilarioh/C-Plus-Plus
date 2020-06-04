/************************************************************
 *
 *   11. Exam Grader
 * 
 *  One of your professors has asked you to write a program 
 *  to grade her final exams, which consist of only 20 
 *  multiple-choice questions. Each question has one of four 
 *  possible answers: A, B, C, or D. The file 
 *  CorrectAnswers.txt contains the correct answers for all 
 *  of the questions, with each answer written on a separate 
 *  line. The first line contains the answer to the first 
 *  question, the second line contains the answer to the second 
 *  question, and so forth. (Download the book’s source code 
 *  from the companion Web site at 
 *  www.pearsonhighered.com/gaddis. You will find the file 
 *  in the Chapter 07 folder.)
 * 
 *  Write a program that reads the contents of the 
 *  CorrectAnswers.txt file into a char array, and then reads 
 *  the contents of another file, containing a student’s 
 *  answers, into a second char array. (You can use the file 
 *  StudentAnswers.txt for testing purposes. This file is also 
 *  in the Chapter 07 source code folder, available on the 
 *  book’s companion Web site.) The program should determine 
 *  the number of questions that the student missed and then 
 *  display the following:
 *  
 *  • A list of the questions missed by the student, showing 
 *  the correct answer and the incorrect answer provided by 
 *  the student for each missed question
 *  
 *  • The total number of questions missed
 * 
 *  • The percentage of questions answered correctly. 
 *    This can be calculated as 
 *  
 *  Correctly Answered Questions ÷ Total Number of Questions
 *  
 *  • If the percentage of correctly answered questions is 70% 
 *  or greater, the program should indicate that the student 
 *  passed the exam. Otherwise, it should indicate that the 
 *  student failed the exam.
 *
 *************************************************************/
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

const int NUMBER_OF_QUESTIONS = 20;

void readFileContentsIntoArray(char[], string[], const int);
void displayArray(const char[], const int);
void displayAnswers(vector<int>, char[]);
void checkAnswers(const char[], 
                  const char[], 
                  int &, 
                  vector<int> &, 
                  vector<int> &, 
                  int &, 
                  int &, 
                  const int);
void displayAllAnswers(const char[], const char[], const int);
double calculatePercentage(const int, const int);

int main()
{
    char correct_answers[NUMBER_OF_QUESTIONS],
         student_answers[NUMBER_OF_QUESTIONS];

    int number_of_incorrect_questions,
        total_correct_questions = 0,
        total_missed_questions  = 0;
    
    double percentage_correctly_answered;

    vector<int> incorrect_questions;
    vector<int> correct_questions;

    string fileNames[] = {"CorrectAnswers.txt", "StudentAnswers.txt"};
    
    readFileContentsIntoArray(correct_answers, fileNames, NUMBER_OF_QUESTIONS);
    // readFileContentsIntoArray(student_answers, "StudentAnswers.txt", NUMBER_OF_QUESTIONS);

    displayAllAnswers(correct_answers, student_answers, NUMBER_OF_QUESTIONS);
    
    checkAnswers(student_answers, 
                 correct_answers, 
                 number_of_incorrect_questions,
                 correct_questions, 
                 incorrect_questions, 
                 total_missed_questions,
                 total_correct_questions,
                 NUMBER_OF_QUESTIONS);


    percentage_correctly_answered = calculatePercentage(total_correct_questions, NUMBER_OF_QUESTIONS);
    
    cout << "Questions answered correctly: " << endl; 
    displayAnswers(correct_questions, correct_answers);
    cout << endl;

    cout << "Questions answered incorrectly: " << endl;
    displayAnswers(incorrect_questions, student_answers);
    cout << endl;
    
    cout << "Total missed questions : " 
         << total_missed_questions 
         << endl;

    cout << "Total correct questions: " 
         << total_correct_questions 
         << endl;
    cout << endl;

    cout << setprecision(1) << fixed;
    cout << "Percentage of questions answered: %" 
         << percentage_correctly_answered 
         << endl;

    cout << "You " 
         << (percentage_correctly_answered >= 70 ? "passed" : "failed")
         << " the exam."
         << endl;

    return 0;
    
}

void readFileContentsIntoArray(char array[], string fileNames[], const int ARRAY_SIZE)
{
    ifstream inputFile[2];

    for (int i = 0; i < 2; i++)
    {
        inputFile[i].open(fileNames[i]);

        if (inputFile[i].fail())
            cout << "Error opening file." << endl;
        else
        {
            for (int i = 0; i < ARRAY_SIZE; i++)
                inputFile[i] >> array[i];

            inputFile[i].close();

        }

    }
    
    // inputFile.open(fileName);

    // if (inputFile.fail())
    //     cout << "Error opening file." << endl;
    // else
    // {
    //     for (int i = 0; i < ARRAY_SIZE; i++)
    //         inputFile >> array[i];

    //     inputFile.close();

    // }
    
}

void displayArray(const char array[], const int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if(i == (ARRAY_SIZE - 1))
            cout << array[i];
        else
            cout << array[i] << ", ";
        
    }
        
    cout << endl;
}

void displayAnswers(vector<int> vector, char array[])
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << (vector[i] + 1) << ". "
             << array[vector[i]]
             << endl;
    }
    // Range-based for loop in C++11   
    // for (auto value : vector)
    //     cout << (value + 1) << ". " << array[value] << ", ";
}

void checkAnswers(const char student_answers[], 
                  const char correct_answers[], 
                  int &number_of_incorrect_questions, 
                  vector<int> &correct_questions,
                  vector<int> &incorrect_questions, 
                  int &total_missed_questions,
                  int &total_correct_questions, 
                  const int NUMBER_OF_QUESTIONS)
{
    for (int i = 0; i < NUMBER_OF_QUESTIONS; i++)
    {
        if (student_answers[i] != correct_answers[i])
        {
            number_of_incorrect_questions++; 
            incorrect_questions.push_back(i);
            total_missed_questions++;
        }
        else
        {
            correct_questions.push_back(i); 
            total_correct_questions++;
        }
        
    }
}
void displayAllAnswers(const char correct_answers[], const char student_answers[], const int NUMBER_OF_QUESTIONS)
{
    cout << "Correct Answers: " << endl;
    displayArray(correct_answers, NUMBER_OF_QUESTIONS);
    cout << endl;

    cout << "Student Answers: " << endl;
    displayArray(student_answers, NUMBER_OF_QUESTIONS);
    cout << endl;
}

double calculatePercentage(const int total_correct_questions, const int NUMBER_OF_QUESTIONS)
{
    return (total_correct_questions / static_cast<double>(NUMBER_OF_QUESTIONS)) * 100;
}
