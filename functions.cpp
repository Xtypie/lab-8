#include <iostream>
#include "functions.hpp"
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


namespace mt
{   
    string to_lower(string s)
    {
        
        for (int i = 0; i < s.length(); i++)
            if ('A' <= s[i] && s[i] <= 'Z')
                s[i] += 32;
        return s;
    }

    bool no_same_letter(string s)
    {
        bool flag = true;
        string vowel = "eyuioa";
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = i + 1; j < s.length(); j++)
            {
                if ((s[i] == s[j]) && (vowel.find(s[i])))
                {
                    flag = false;
                }
            }
        }
        return flag;
    }

    bool is_palindrom(string s)
    {
        if (s.length() < 2) {return 0;}
        string reversed_s = s;
        reverse(reversed_s.begin(), reversed_s.end());
        if (s == reversed_s)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }

    int count_consonants(string s)
    {
        int count = 0;
        string vowel = "eyuioa";
        for (int i = 0; i < s.length(); i++)
        {
            if (!vowel.find(s[i]))
            {
                count += 1;
            }
        }
        return count;
    }


    string erase_vowels(string s)
    {
        string vowels = "aeiouy";
        for (int i = 0; i < s.length(); i++)
        {
            if (vowels.find(s[i]))
            {
                s.erase(s.begin() + i + 1);
            }
        }
        return s;
    }

}