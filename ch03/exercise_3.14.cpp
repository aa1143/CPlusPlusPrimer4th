//
// Created by zhang zhixiang on 15/10/4.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string word;
    vector<string> vec;
    while (cin >> word) {
        for (string::size_type i = 0; i < word.size(); i++) {
            word[i] =  toupper(word[i]);
        }
        vec.push_back(word);
    }
    int count= 0;
    for (vector<string>::size_type j = 0; j < vec.size() ; ++j) {
        cout << vec[j] << " ";
        count++;
        if (count % 8 == 0) {
            cout << endl;
        }

    }
    return -1;
}