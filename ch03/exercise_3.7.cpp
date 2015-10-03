//
// Created by zhang zhixiang on 15/10/4.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    string s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout <<"s1 == s2";
    }else if (s1 > s2) {
        cout << "the bigger is s1";
    }else {
        cout << "the bigger is s2";
    }
    cout <<endl;
    string::size_type len_s1 = s1.size();
    string::size_type len_s2 = s2.size();

    if (len_s1 == len_s2) {
        cout << " the length of s1 is equal to s2";
    }else if (len_s1 > len_s2) {
        cout << "the longer is s1";
    }else {
        cout << "the long is s2";
    }
    return 0;
}
