#include <iostream>
#include "functions.hpp"
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
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

    // Задание 2
    
    // Заполним вектор словами из текста:
    ifstream in2("input2.txt");
    vector<string> str2;
        while (!in2.eof())
    {
        string s4;
        in2 >> s4;
        str2.push_back(s4);
    }

    if (mt::palindrom_in_txt(str2))
    {
        stable_sort(str2.begin(), str2.end(),
        [](string s1, string s2)
        {return mt::count_consonants(s1) > mt::count_consonants(s2);}); // Сортировка вектора по убыванию кол-ва согласных букв
    }
    else
    {
        for (int i = 0; i < str2.size(); i++)
        {
            mt::erase_vowels(str2[i]);
        }
        sort(str2.begin(), str2.end(), greater<>()); //  Сортировка вектора по неалфавитному порядку
    }
    mt::print_vec(str2);
    
    
    
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