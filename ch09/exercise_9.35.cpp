//
// Created by zhang zhixiang on 16/1/24.
//

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string str("hello,World");
    for(string::iterator it = str.begin(); it != str.end(); ++it) {
        if (isupper(*it)) {
            str.erase(it);
            --it;
        }
    }
    cout << str << endl;
    return 0;

}