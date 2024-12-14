#include <iostream>
#include "functions.hpp"
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // Задание 1
    vector<string> str;
    ifstream in("input.txt");
    ofstream out("output.txt");
    while (!in.eof())
    {
        string s1;
        in >> s1;
        str.push_back(s1);
    }
    // Сортировка вектора по невозрастанию кол-ва символов:
    stable_sort(str.begin(), str.end(),
    [](string_view s1, string_view s2)
    {return s1.size() > s2.size();});

    int N = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if ((mt::no_same_letter(str[i])) && (N <= 2000))
        {
            out << str[i] << endl;
            N += 1;
        }
    }
    in.close();
    out.close();
    str.clear();
    // Задание 2
    
    // Заполним вектор словами из текста:
    ifstream in2("input2.txt");
        while (!in2.eof())
    {
        string s4;
        in2 >> s4;
        str.push_back(s4);
    }
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl;
    }
    
    bool palindrom_in_txt = false;
        for (int i = 0; i < str.size(); i++)
    {
        if (mt::is_palindrom(str[i]))
        {
            palindrom_in_txt = true;
            break;
        }
    }
    if (palindrom_in_txt)
    {
        stable_sort(str.begin(), str.end(),
        [](string s1, string s2)
        {return mt::count_consonants(s1) < mt::count_consonants(s2);}); // Сортировка вектора по убыванию кол-ва согласных букв
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            mt::erase_vowels(str[i]);
        }
        sort(str.begin(), str.end(), greater<>()); //  Сортировка вектора по неалфавитному порядку
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << endl;
    }
    in2.close();
    str.clear();


    // Задание 3
    ifstream in3("input3.txt");
    ofstream out3("output3.txt");

    string word;
    while (in >> word) {
        if (mt::count_diff_vowels(word) >= 4) {
            std::transform(word.begin(), word.end(), word.begin(), ::toupper);
            out << word << " (" << mt::found_vowels(word) << ") ";
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