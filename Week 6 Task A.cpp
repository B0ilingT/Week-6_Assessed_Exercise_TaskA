// Week 6 Task A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void replace(char* s, char c1, char c2)
{
    char symbol = '!';
    while (*(s + 1) != '\0')
    {
        if (symbol == *(s-1) && *s == c1)
        {
            *s = c2;
        }
        s++;
    }
}
int main()
{
    string Originalstring;
    string string;
    char char1;
    char char2;
    char* ptr = &string[0]; // pointer stores the mem address of the string[0] 
    cout << "Enter the desired phrase to be altered ( make sure to put ! before letter to change )\n";
    cin >> string;
    cout << "Which letter would you like to replace?\n";
    cin >> char1;
    cout << "What would you like to replace " << char1 << " with?\n";
    cin >> char2;
    Originalstring = string;
    replace(ptr, char1, char2);
    cout << "Original Phrase: " << Originalstring << "\nAltered Phrase: " << string;
    cin;
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
