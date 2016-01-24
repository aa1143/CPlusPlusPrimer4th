//
// Created by zhang zhixiang on 16/1/24.
//

#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main(){

    string str("hello,world");
    for(string::iterator it = str.begin(); it != str.end(); ++it) {
        *it = toupper(*it);
    }
    cout << str << endl;

    cout << "----------" <<endl;
    vector<char> vec(10,'a');
    string str1(vec.begin(), vec.end());
    cout << str1 <<endl;
    return 0;

}