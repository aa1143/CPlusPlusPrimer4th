//
// Created by zhang zhixiang on 15/10/6.
//

#include <iostream>

using namespace std;

int main() {
    cout << "please enter two number";

    int a,b;
    cin >> a >> b;
    cout << "the bigger is " << (a > b ? a : b) << endl;
    return 0;
}