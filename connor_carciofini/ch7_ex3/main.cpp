
//*************************************************************
// Author: D.S. Malik
//
// Program: Pig Latin Strings
// This program reads a string and outputs the pig latin form
// of the string.
//*************************************************************

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

bool isVowel(char ch);
string rotate(string pStr);
string pigLatinString(string pStr);

// FROM GEEKSFORGEEKS.COM
vector<string> split_sentence(string sen)
{

    // Create a stringstream object
    stringstream ss(sen);

    // Variable to hold each word
    string word;

    // Vector to store the words
    vector<string> words;

    // Extract words using getline with space as the delimiter
    while (getline(ss, word, ' '))
    {

        // Add the word to the vector
        words.push_back(word);
    }

    return words;
}

int main()
{
    string str, pig_latin_sentence;
    vector<string> words_vector;
    vector<string> pl_words_vector;
    char punctuations[] = {',', '.', '?', ';', ':'};

    cout << "Enter a string: ";
    getline(cin, str);
    cout << endl;

    words_vector = split_sentence(str);

    if (words_vector.size() > 1)
    {
        for (int i = 0; i < (words_vector.size()); i++)
        {
            pl_words_vector.push_back(pigLatinString(words_vector[i]));
            for (int j = 0; j < 5; j++)
            {
                if (pl_words_vector[i].find(punctuations[j]) != string::npos)
                {
                    pl_words_vector[i].erase(remove(pl_words_vector[i].begin(), pl_words_vector[i].end(), punctuations[j]), pl_words_vector[i].end());
                    pl_words_vector[i] = pl_words_vector[i] + punctuations[j];
                }
            }
            pig_latin_sentence = pig_latin_sentence + pl_words_vector[i] + " ";
        }
        cout << "The pig Latin form of " << str << " is: "
             << pig_latin_sentence << endl;
    }
    else
    {
        pig_latin_sentence = pigLatinString(str);
        cout << "The pig Latin form of " << str << " is: "
             << pig_latin_sentence << endl;
    }

    ofstream outfile;
    outfile.open("Ch7_Ex3Out.txt");
    outfile << pig_latin_sentence;
    outfile.close();

    return 0;
}

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        return true;
    default:
        return false;
    }
}

string rotate(string pStr)
{
    string::size_type len = pStr.length();

    string rStr;

    rStr = pStr.substr(1, len - 1) + pStr[0];

    return rStr;
}

string pigLatinString(string pStr)
{
    string::size_type len;

    bool foundVowel;

    string::size_type counter;

    if (isVowel(pStr[0])) // Step 1
        pStr = pStr + "-way";
    else // Step 2
    {
        pStr = pStr + '-';
        pStr = rotate(pStr); // Step 3

        len = pStr.length(); // Step 3.a
        foundVowel = false;  // Step 3.b

        for (counter = 1; counter < len - 1;
             counter++) // Step 3.d
            if (isVowel(pStr[0]))
            {
                foundVowel = true;
                break;
            }
            else // Step 3.c
                pStr = rotate(pStr);

        if (!foundVowel) // Step 4
            pStr = pStr.substr(1, len) + "-way";
        else
            pStr = pStr + "ay";
    }

    return pStr; // Step 5
}