//
// Created by zhang zhixiang on 15/10/7.
//

#include <iostream>
using namespace std;

void getSwap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main() {
    int testA = 1;
    int testB = 2;

    getSwap(&testA, &testB);
    cout << testA << " " << testB <<endl;
    return 0;
}