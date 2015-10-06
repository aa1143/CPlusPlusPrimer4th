//
// Created by zhang zhixiang on 15/10/6.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string cur;
    string pre;
    int count = 1;
    while(cin >> cur) {
        if (cur == pre) {
            count++;
            break;
        }
        pre = cur ;

    }
    if (count == 2) {
        cout << "the duplicate word is " <<cur <<endl;
    }else {
        cout << "No duplicate word" <<endl;
    }
    return 0;
}