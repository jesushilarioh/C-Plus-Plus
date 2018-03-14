#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter you user name: ";
    string username;
    cin >> username;

    ofstream personsFile;
    // Open personsFile
    personsFile.open(username);

    // write to file
    personsFile << "Ok now, ok. " << endl;
    // close pevious user files
    personsFile.close();

    // New user
    cout << "Enter another user name: ";
    cin >> username;
    personsFile.open(username);

    // write to file
    personsFile << "Oh up, grand! " << endl;
    // close pevious user files
    personsFile.close();

    cout << "Enter another username: ";
    cin >> username;


    ifstream personsBack;
    personsBack.open(username);
    vector<string> letsSEE;
    string ok;
    if (personsBack)
    {
        personsBack.open(username);
        cout << "I remember you!" << endl;
        cout << "Your " << username << endl;
        cout << "And here are your previous selections" << endl;

        for (int count = 0; count < letsSEE.size(); count++)
        {
            getline(personsBack, letsSEE[count]);
            cout << letsSEE[count] << endl;
        }
    }
    else
    {
        cout << "I dont remember you. :(" << endl;
    }

    return 0;
}
