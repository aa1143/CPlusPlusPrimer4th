//
// Created by zhang zhixiang on 15/10/5.
//

#include <iostream>

using namespace std;

int main() {
    int x = 100;
    int y = 200;
    int *p = &x;
    int *q = &y;

    // step1
    p = q ;

    // step2
    *p = 300;

    cout << *q <<endl;
    return 0;
}