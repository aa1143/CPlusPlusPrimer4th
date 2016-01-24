//
// Created by zhang zhixiang on 16/1/24.
//

#include <iostream>
#include <utility>
#include <string>
#include <vector>

using namespace std;

int main() {
    pair<string, int> pai;
    string str;
    int val;

    vector< pair<string, int> > vec;

    cout << "enter a string and int " <<endl;

    while (cin >> str >> val) {
        pai = make_pair(str, val);
        vec.push_back(pai);
    }

    return 0;
}