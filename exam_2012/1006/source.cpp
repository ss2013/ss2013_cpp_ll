/*
 * =====================================================================================
 *
 *       Filename:  source.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2013年06月04日 21时45分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include <string>
#include <map>
#include <cctype>
#include <iostream>
using namespace std;


const string no_exist_string = "*** not in dictionary";

class Dict
{
public:

    string& operator[](const string& word) {
        string tmp_word(word);
        for (int i = 0; i < tmp_word.length(); i++)
            tmp_word[i] = tolower(tmp_word[i]);
        map<string, string>::iterator iter = word_definitions.find(tmp_word);
        if (iter == word_definitions.end()) {
            iter = word_definitions.insert(iter, pair<string, string>(tmp_word, no_exist_string));
        }

        return iter->second;
    }

    bool remove(const string& word) {
        string tmp_word(word);
        for (int i = 0; i < tmp_word.length(); i++)
            tmp_word[i] = tolower(tmp_word[i]);
        map<string, string>::iterator iter = word_definitions.find(tmp_word);
        if (iter == word_definitions.end()) return false;

        word_definitions.erase(iter);
        return true;
    }

    unsigned int size() {
        unsigned int acutal_size = 0;
        for (map<string, string>::iterator iter = word_definitions.begin();
                iter != word_definitions.end(); iter++)
            if (iter->second != no_exist_string) acutal_size++; 

        return acutal_size;
    }

    friend ostream& operator <<(ostream& out, const Dict& dict) {
        for (map<string, string>::const_iterator iter = dict.word_definitions.begin();
                iter != dict.word_definitions.end(); iter++)
            if (iter->second != no_exist_string) {
                out << iter->first << "->" << iter->second << endl;
            }

        return out;
    }

private:
    map<string, string> word_definitions;
};

