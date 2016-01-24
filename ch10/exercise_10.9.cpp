//
// Created by zhang zhixiang on 16/1/24.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    map<string, int> wordCount;
    string str;

    cout << "inter word" <<endl;
    while(cin >> str) {
        ++wordCount[str];
    }

    for(map<string, int>::iterator it = wordCount.begin(); it != wordCount.end(); ++it) {

        cout<< it->first << "--" <<it->second <<endl;
    }
    return 0;
}