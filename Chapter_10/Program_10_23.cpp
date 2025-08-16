//
// Created by Yang on 8/4/25.
//
// This program help user to tokenize a string.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function prototype
void split(const string &, char, vector<string> &);

int main() {
    // Strings to tokenize
    string str1 = "one two three four";
    string str2 = "10:20:30:40:50";
    string str3 = "a/b/c/d/e/f";

    // Vector to hold the tokens.
    vector<string> tokens;

    // Tokenize str1, using ' ' as tbe delimiter.
    split(str1, ' ', tokens);
    for (auto e: tokens)
        cout << e << " ";
    cout << endl;
    tokens.clear();

    // Tokenize str2, using ':' as the delimiter.
    split(str2, ':', tokens);
    for (auto e: tokens)
        cout << e << " ";
    cout << endl;
    tokens.clear();

    // Tokenize str3, using '/' as the delimiter.
    split(str3, '/', tokens);
    for (auto e: tokens)
        cout << e << " ";
    cout << endl;
    tokens.clear();

    return 0;

}

//*************************************************************************************
// Definition of the split function.
// This function accepts a string reference object, a character and a string vector
// as arguments.
// The function splits the string with specified delimiter, then push the token into
// the vector.
//*************************************************************************************

void split(const string &s, char delim, vector<string> &tokens) {
    int tokenStart = 0; // Starting position of the next token

    // Find the first occurrence of the delimiter.
    int delimPosition = s.find(delim);

    // While we haven't run out of delimiters...
    while (delimPosition != string::npos) {
        // Extract the token
        string token = s.substr(tokenStart, delimPosition - tokenStart);

        // Push the token onto the tokens vector
        tokens.push_back(token);

        // Move the delimPositon to the next character position
        delimPosition++;

        // Move the tokenStart to delimPosition
        tokenStart = delimPosition;

        // Find the next occurrence of the delimiter
        delimPosition = s.find(delim, delimPosition);

        // If no more delimiters, extract the last token
        if (delimPosition == string::npos) {
            // Extract the token
            string token = s.substr(tokenStart, delimPosition - tokenStart);

            // Push the token onto the tokens vector
            tokens.push_back(token);
        }
    }

}
