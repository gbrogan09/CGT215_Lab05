// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> charVector({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });

char cipher(char str)
{
    if ((str >= 65) && (str <= 90))
    {
        return charVector.at(str - 65);
    }
    else if ((str >= 97) && (str <= 122))
    {
        char upperCaseLetter = str - 32;
        char upperCaseCode = charVector.at(upperCaseLetter - 65);
        return upperCaseCode + 32;
    }
    else
    {
        return str;
    }
}

int main()
{
    string text;
    cout << "Enter a line of text to cipher below: " << endl;
    getline(cin, text);
    for (int i = 0; i < text.size(); i++)
    {
        cout << cipher(text.at(i));
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
