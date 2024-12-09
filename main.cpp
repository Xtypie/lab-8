#include <iostream>
#include "functions.hpp"
#include <string>
#include <fstream>
#include <vector>

using namespace std;

string to_lower(string s)
{
    
    for (int i = 0; i < s.length(); i++)
        if ('A' <= s[i] && s[i] <= 'Z')
            s[i] += 32;
    return s;
}

bool no_same_letter(string s)
{
    char letter;
    for (int i = 0; i < s.length(); i++)
    {
        letter = s[i];
        if (!s.find(letter))
            continue;
        string consonant = "qwrtpsdfghjklzxcvbnm";
        for (int j = 0; j < j < s.length(); j++)
            if (letter == s[j])
                return false;
    }
}

void sort(vector<string> s)
{
    for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < s.size(); j++)
                {
                string s1 = s[i];
                string s2 = s[j];
                if (s1.length() > s2.length())
                {
                    string tmp = s2;
                    s1 = s2;
                    s2 = tmp;
                }
                }
        }

}



int main()
{

    ifstream in("input.txt");
    while (!in.eof())
    {
        string s1;
        vector<string> str;
        in >> s1;
        //getline(in, s);
        str.push_back(s1);
        sort(str);
        for (int i = 0; i < str.size(); i++)
        {
            cout << str[i] << endl;
        }
        
    }
    
    
    // // удаление элемента

    // string s4 = "Hello";
    // s4.erase(2);
    // cout << s4 << endl;

    // // вставить(продублировать)

    // string s5 = "Hello";
    // s5.insert(1, 1, 'a');
    // cout << s5 << endl;

    // // поиск
    // string s6 = "Hello";
    // if (s6.find('e'))
    // {
        
    // }

    // //поиск подстроки
    // cout << s6.substr(s6.find("Hel"), 3) << endl;

    // // файловый ввод-вывод

}