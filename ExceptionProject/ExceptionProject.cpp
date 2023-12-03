// Alexander Rosencrantz
// CIS 1202 501
// 12/2/2023

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char character(char, int);

int main()
{
    
    //Tests the function for an exception with the character 'a' and an offset of 1
    try
    {
        cout << character('a', 1) << endl;
    }
    catch (string exception)
    {
        cout << exception;
    }

    //Tests the function for an exception with the character 'a' and an offset of -1
    try
    {
        cout << character('a', -1) << endl;
    }
    catch (string exception)
    {
        cout << exception;
    }

    //Tests the function for an exception with the character 'Z' and an offset of -1
    try
    {
        cout << character('Z', -1) << endl;
    }
    catch (string exception)
    {
        cout << exception;
    }

    //Tests the function for an exception with the character '?' and an offset of 5
    try
    {
        cout << character('?', 5) << endl;
    }
    catch (string exception)
    {
        cout << exception;
    }

}

char character(char start, int offset)
{

    if (!isalpha(start))
    {
        //Checks whether the initial character is a letter of the alphabet
        string invalidCharacterException = "ERROR: Not a letter.\n";
        throw invalidCharacterException;
    }
    else if (!isalpha(start + offset))
    {
        //Checks whether the character + offset is a letter of the alphabet
        string invalidRangeException = "ERROR: Outside of range.\n";
        throw invalidRangeException;
    }
    else
    {
        //Returns the character + offset
        return start + offset;
    }

}