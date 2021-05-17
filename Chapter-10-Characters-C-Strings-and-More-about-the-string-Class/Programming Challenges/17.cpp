/**
 * 
 * 17. Morse Code Converter
 * 
 * Morse code is a code where each letter of 
 * the English alphabet, each digit, and various 
 * punctuation characters are represented by a 
 * series of dots and dashes. Table 10-9 shows 
 * part of the code.
 * 
 * Write a program that asks the user to enter 
 * a string, and then converts that string to 
 * Morse code.
 * 
 * 
 **/
#include <iostream>

using namespace std;

string getMorseCode(string);

int main()
{
    string user_string;

    cout << "Enter a string: ";
    getline(cin, user_string);

    string morse_code_string = getMorseCode(user_string);

    cout << endl;
    cout << "Your string: " << user_string << endl;
    cout << "Morse code : " << morse_code_string << endl;
    cout << endl;

    return 0;
}
string getMorseCode(string user_string)
{
    string new_string;
    for (int i = 0; i < user_string.length(); i++)
    {
        switch (static_cast<int>(toupper(user_string[i])))
        {

        // Puctuations & spaces
        case 32: // space
            new_string += " ";
            break;
        case 44: // comma
            new_string += "--..--";
            break;
        case 46: // period
            new_string += ".-.-.-";
            break;
        case 63: // question mark
            new_string += "..--..";
            break;

        // Numbers
        case 48: // 0
            new_string += "-----";
            break;
        case 49:
            new_string += ".----";
            break;
        case 50:
            new_string += "..---";
            break;
        case 51:
            new_string += "...--";
            break;
        case 52:
            new_string += "....-";
            break;
        case 53: // 5
            new_string += ".....";
            break;
        case 54:
            new_string += "-....";
            break;
        case 55:
            new_string += "--...";
            break;
        case 56:
            new_string += "---..";
            break;
        case 57: // 9
            new_string += "----.";
            break;

        // Letters
        case 65: // A
            new_string += ".-";
            break;
        case 66: // B
            new_string += "-...";
            break;
        case 67:// C
            new_string += "-.-.";
            break;
        case 68: // D
            new_string += "-..";
            break;
        case 69: // E
            new_string += ".";
            break;
        case 70: // F
            new_string += "..-.";
            break;
        case 71: // G
            new_string += "--.";
            break;
        case 72: // H
            new_string += "....";
            break;
        case 73: // I
            new_string += "..";
            break;
        case 74: // J
            new_string += ".---";
            break;
        case 75: // K
            new_string += "-.-";
            break;
        case 76: // L
            new_string += ".-..";
            break;
        case 77: // M
            new_string += "--";
            break;
        case 78: // N
            new_string += "-.";
            break;
        case 79: // O
            new_string += "---";
            break;
        case 80: // P
            new_string += ".--.";
            break;
        case 81: // Q
            new_string += "--.-";
            break;
        case 82: // R
            new_string += ".-.";
            break;
        case 83: // S
            new_string += "...";
            break;
        case 84: // T
            new_string += "-";
            break;
        case 85: // U
            new_string += "..-";
            break;
        case 86: // V
            new_string += "...-";
            break;
        case 87: // W
            new_string += ".--";
            break;
        case 88: // X
            new_string += "-..-";
            break;
        case 89: // Y
            new_string += "-.--";
            break;
        case 90: // Z
            new_string += "--..";
            break;
        default:
            break;

        }

    }
    
    return new_string;
}