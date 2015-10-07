//
// Created by zhang zhixiang on 15/10/7.
//

#include <iostream>

using namespace std ;

int factorial(int i) {
    int sum = i;
    while(i > 1) {
        sum *= i-1;
        i--;
    }
    return sum;
}
int recusionFac(int i) {
    while(i > 1) {
        return recusionFac(i-1) * i;
    }
    return 1;
}
int main() {
    cout << factorial(3) <<endl;
    cout << recusionFac(3) <<endl;
    return 0;
}