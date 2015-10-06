//
// Created by zhang zhixiang on 15/10/7.
//

#include <iostream>
using namespace std;

int getMax(int x, const int *y) {
    return x > *y ? x : *y;
}
int main() {
    int a = 2;
    int b = 3;
    cout << getMax(a, &b) << endl;
}