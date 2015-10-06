//
// Created by zhang zhixiang on 15/10/6.
//
#include <iostream>

using namespace std;

int main() {
    char ch;
    char before = '\0';
    int ffCnt = 0;
    int flCnt = 0;
    int fiCnt = 0;

    while(cin >> ch) {
        if(before == 'f') {
            switch (ch) {
                case 'f':
                    ffCnt++;
                    break;
                case 'l':
                    flCnt++;
                    break;
                case 'i':
                    fiCnt++;
                    break;
            }
        }
        before = ch;
    }
    cout << "ffCnt " <<ffCnt <<endl;
    cout << "flCnt " <<flCnt <<endl;
    cout << "fiCnt " <<fiCnt <<endl;
}

