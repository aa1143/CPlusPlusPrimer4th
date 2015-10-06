//
// Created by zhang zhixiang on 15/10/6.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string cur;
    string pre;
    string output;
    int currCnt = 0;
    int maxCnt = 1;
    while(cin >> cur) {
        if (cur == pre) {
            currCnt++;
        } else {
            currCnt = 1;
        }
        if (currCnt > maxCnt) {
            maxCnt = currCnt;
            output = cur;
        }
        pre = cur;
    }
    cout << "output is " << output <<endl;
    cout << "maxCnt is " << maxCnt <<endl;
    return 0;

}