#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <regex>
using std::regex;
using std::sregex_iterator;

int main()
{
    string s;
    cout << "Please input a sequence of words:" << endl;
    getline(cin, s);
    cout << endl;
    cout << "Word(s) that violiate the \"ei\" grammar rule:" << endl;
    string pattern("[^c]ei");
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    regex r(pattern, regex::icase);
    for (sregex_iterator it(s.begin(), s.end(), r), end_it; it != end_it; ++it)
        cout << it->str() << endl;
    cin.get();
    return 0;
}