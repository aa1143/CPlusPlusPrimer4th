//
// Created by zhang zhixiang on 15/10/4.
//


#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    string result;
    char ch;
    getline(cin,line);
    for (string::size_type i = 0; i <= line.size() ; ++i) {
        ch = line[i];
        if(!ispunct(ch)) {
            result += ch;
        }
    }
    cout << result << endl;
    return 0;
}