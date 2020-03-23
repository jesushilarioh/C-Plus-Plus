/************************************************************
 *
 *   16. World Series Champions
 * 
 *  If you have downloaded this book’s source code from the 
 *  companion Web site, you will find the following files in 
 *  this chapter’s folder:
 * 
 *  • Teams.txt—This file contains a list of several Major 
 *      League baseball teams in alphabetical order. Each 
 *      team listed in the file has won the World Series at 
 *      least once.
 * 
 *  • WorldSeriesWinners.txt—This file contains a 
 *      chronological list of the World Series’ winning teams 
 *      from 1903 to 2012. (The first line in the file is the 
 *      name of the team that won in 1903, and the last line 
 *      is the name of the team that won in 2012. Note that 
 *      the World Series was not played in 1904 or 1994.)
 * 
 *  Write a program that displays the contents of the 
 *  Teams.txt file on the screen and prompts the user 
 *  to enter the name of one of the teams. The program 
 *  should then display the number of times that team has 
 *  won the World Series in the time period from 1903 to 2012.
 * 
 *  TIP: Read the contents of the WorldSeriesWinners.txt file 
 *  into an array or vector. When the user enters the name of 
 *  a team, the program should step through the array or 
 *  vector counting the number of times the selected team appears.
 *
 *************************************************************/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    ifstream inputFile;
    string team;
    string user_team;
    int number_of_titles_won = 0;
    vector<string> world_series_winners;
    

    inputFile.open("Teams.txt");

    if(inputFile.fail())
        cout << "Error opening file" << endl;
    else
    {
        cout << endl;
        while(getline(inputFile, team))
            cout << team << endl;

        inputFile.close();
    }
    cout << endl;

    cout << "\nEnter the name of one of these teams: \n" << endl;
    getline(cin, user_team);

    inputFile.open("WorldSeriesWinners.txt");
    if(inputFile.fail())
        cout << "Error opening file." << endl;
    else
    {
        string winning_team;
        while(getline(inputFile, winning_team))
        {
            world_series_winners.push_back(winning_team);
        }
        inputFile.close();
    }
    
    for(int i = 0; i < world_series_winners.size(); i++)
    {
        if(user_team == world_series_winners[i])
            number_of_titles_won++;
    }

    cout << user_team << " have won the world series " 
         << number_of_titles_won 
         << " times."
         << endl
         << endl;

    return 0;
}