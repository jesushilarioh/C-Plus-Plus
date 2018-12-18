/************************************************************
 *
 *   12. Star Search
 *
 *   A particular talent competition has five judges, each of 
 *   whom awards a score between 0 and 10 to each performer. 
 *   Fractional scores, such as 8.3, are allowed. A performer’s 
 *   final score is determined by dropping the highest and 
 *   lowest score received, then averaging the three remaining 
 *   scores. Write a program that uses this method to calculate 
 *   a contestant’s score. It should include the following 
 *   functions:
 *
 *   • void getJudgeData() should ask the user for a judge’s 
 *       score, store it in a reference parameter variable, 
 *       and validate it. This function should be called by 
 *       main once for each of the five judges.
 *
 *   • void calcScore() should calculate and display the average 
 *       of the three scores that remain after dropping the highest 
 *       and lowest scores the performer received. This function 
 *       should be called just once by main and should be passed 
 *       the five scores.
 *
 *   The last two functions, described below, should be called 
 *   by calcScore, which uses the returned information to 
 *   determine which of the scores to drop.
 *
 *   • int findLowest() should find and return the lowest of 
 *       the five scores passed to it.
 *
 *   • int findHighest() should find and return the highest of 
 *       the five scores passed to it.
 *
 *
 *   Input Validation: Do not accept judge scores lower than 
 *                       0 or higher than 10.
 *
 * 	Jesus Hilario Hernandez
 * 	December 17, 2018
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Function prototypes
void getJudgeData(double &);
void calcScore(double, double, double, double, double);
double inputValidate(double);
double averageScores(double, double, double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);
double lowestNum(double, double, double, double, double);
double highestNum(double, double, double, double, double);

int main()
{
    double score1, score2, score3, score4, score5;

    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);

    cout << endl
         << "score1 = " << score1 << endl
         << "score2 = " << score2 << endl
         << "score3 = " << score3 << endl
         << "score4 = " << score4 << endl
         << "score5 = " << score5 << endl
         << endl;

    calcScore(score1, score2, score3, score4, score5);

    return 0;
}

/****************************************************
 * Function definition for void getJudgeData():     * 
 * getJudgeData() should ask the user for a judge’s * 
 * score, store it in a reference parameter         *
 * variable, and validate it. This function should  *
 * be called by main once for each of the five      *
 * judges.                                          *
 ****************************************************/
void getJudgeData(double &score)
{
    cout << "What is the judge's score? ";
    score = inputValidate(score);
}

/****************************************************
 * Definition for inputValidate():                  *
 * inputValidate checks user input for a double     *
 * between 0 - 10. If a double bewteen 0 - 10       *
 * is not found, a while loop displays an error,    *
 * clears and ignores previous input, and prompts   *
 * the user to try again.                           *
 ****************************************************/
double inputValidate(double num)
{
    
    while(!(cin >> num) || (num < 0 || num > 10))
    {
        cout << "Error. Enter a integer between 0 - 10: ";
        cin.clear();
        cin.ignore(1234, '\n');
    }

    return num;
}

/****************************************************
 *  Definition for calcScore() should calculate     *
 * and display the average of the three scores that *
 * remain after dropping the highest and lowest     *
 * scores the performer received. This function     *
 * should be called just once by main and should be *
 * passed the five scores.                          *
 ****************************************************/ 
void calcScore(double score1,
               double score2,
               double score3,
               double score4,
               double score5)
{
    double lowest  = findLowest(score1, score2, score3, score4, score5),
           highest = findHighest(score1, score2, score3, score4, score5),
           average;
        
    average = averageScores(score1, score2, score3, score4, score5, lowest, highest);
    average = averageScores(score2, score3, score4, score5, score1, lowest, highest);
    average = averageScores(score3, score4, score5, score1, score2, lowest, highest);
    average = averageScores(score4, score5, score1, score2, score3, lowest, highest);
    average = averageScores(score5, score1, score2, score3, score4, lowest, highest);

    cout << endl
         << "lowest  = " << lowest << endl
         << "highest = " << highest << endl
         << endl;
    cout << "average = " << average << endl
         << endl;
}

/****************************************************
 *  Definition for averageScores():                 *
 * averageScores find the lowest and highest score  *
 * then excludes them fromt he average of the       *
 * remaining scores.                                *
 ****************************************************/ 
double averageScores(double score1,
                     double score2,
                     double score3,
                     double score4,
                     double score5,
                     double lowest,
                     double highest)
{
    double average;

    if (score1 == lowest)
    {
        cout << "Scores being averaged: " << endl;
        if (score2 == highest)
        {
            cout << "score3 = " << score3 << endl
                 << "score4 = " << score4 << endl
                 << "score5 = " << score5 << endl
                 << endl;
            average = (score3 + score4 + score5) / 3;
        }   
        else if (score3 == highest)
        {
            cout << "score2 = " << score2 << endl
                 << "score4 = " << score4 << endl
                 << "score5 = " << score5 << endl
                 << endl;
            average = (score2 + score4 + score5) / 3;
        }   
        else if (score4 == highest)
        {
            cout << "score2 = " << score2 << endl
                 << "score3 = " << score3 << endl
                 << "score5 = " << score5 << endl
                 << endl;
            average = (score2 + score3 + score5) / 3;
        }   
        else if (score5 == highest)
        {
            cout << "score2 = " << score2 << endl
                 << "score3 = " << score3 << endl
                 << "score4 = " << score4 << endl
                 << endl;
            average = (score2 + score3 + score4) / 3;
        }
    }
    return average;
}

/****************************************************
 * Definition for findlowest():                     *
 * findLowest() finds and return the lowest of the  *
 * five scores passed to it.                        *
 ****************************************************/
double findLowest(double score1,
                  double score2,
                  double score3,
                  double score4,
                  double score5)
{
    double lowest;

    lowest = lowestNum(score1, score2, score3, score4, score5);
    lowest = lowestNum(score2, score1, score3, score4, score5);
    lowest = lowestNum(score3, score2, score1, score4, score5);
    lowest = lowestNum(score4, score2, score3, score1, score5);
    lowest = lowestNum(score5, score2, score3, score4, score1);
    
    return lowest;
}

/********************************************************
 * Definition of lowestNum():                           *
 * lowestNum() uses an if statmenent to find the lowest *
 * number.                                              *
 ********************************************************/
double lowestNum(double score1,
                 double score2,
                 double score3,
                 double score4,
                 double score5)
{
    double lowestNum;
    if (score1 < score2)
    {
        if (score1 < score3)
        {
            if (score1 < score4)
            {
                if (score1 < score5)
                {
                    lowestNum = score1;
                }
            }
        }
    }
    return lowestNum;
}

/************************************************
 * Definition for findHighest():                *
 * findHighest() finds and return the highest   *
 * of the five scores passed to it.             *
 ************************************************/
double findHighest(double score1,
                   double score2,
                   double score3,
                   double score4,
                   double score5)
{
    double highest;

    highest = highestNum(score1, score2, score3, score4, score5);
    highest = highestNum(score2, score3, score4, score5, score1);
    highest = highestNum(score3, score4, score5, score1, score2);
    highest = highestNum(score4, score5, score1, score2, score3);
    highest = highestNum(score5, score1, score2, score3, score4);

    return highest;
}

/********************************************************
 * Definition of highestNum():                          *
 * highestNum() uses an if statmenent to find the       *
 * highest number.                                      *
 ********************************************************/
double highestNum(double score1,
                  double score2,
                  double score3,
                  double score4,
                  double score5)
{
    double highestNum;

    if (score1 > score2)
    {
        if (score1 > score3)
        {
            if (score1 > score4)
            {
                if (score1 > score5)
                {
                    highestNum = score1;
                }
            }
        }
    }

    return highestNum;
}