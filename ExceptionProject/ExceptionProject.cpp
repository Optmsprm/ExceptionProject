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
    
    try
    {
        cout << character('a', 1) << endl;
    }
    catch (string exception)
    {
        cout << exception << endl;
    }

}

char character(char start, int offset)
{

    if (!isalpha(start))
    {
        string invalidCharacterException = "ERROR: Not a letter.\n";
        throw invalidCharacterException;
    }
    else if (!isalpha(start + offset))
    {
        string invalidRangeException = "ERROR: Outside of range.\n";
        throw invalidRangeException;
    }
    else
    {
        return start + offset;
    }

}