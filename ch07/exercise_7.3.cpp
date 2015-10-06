//
// Created by zhang zhixiang on 15/10/6.
//

#include <iostream>
using namespace std;

int func(int a, int b) {
    int tmp = a;
    while (b > 1) {
        tmp *= a;
        b--;
    }
    return tmp;
}
int main() {
    int output = func(3,2);
    cout << output <<endl;
    return 0;
}