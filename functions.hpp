#pragma once

using namespace std;
namespace mt
{    
    string to_lower(string s);
    bool no_same_letter(string s);
    bool is_palindrom(string s);
    int count_consonants(string s);
    string erase_vowels(string s);
    bool palindrom_in_txt(const vector<string>& vec);
    void print_vec(const vector<string> vec); 
}