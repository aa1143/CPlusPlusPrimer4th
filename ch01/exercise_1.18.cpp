//
// Created by zhang zhixiang on 15/10/2.
//
#include <iostream>
//input two numbers, print every number in the scope of  two numbers
int main() {
    int v1;
    int v2;
    int upper;
    int lower;

    std::cin >> v1 >> v2 ;
    if (v1 >= v2) {
        upper = v1;
        lower = v2;
    }else {
        upper = v2;
        lower = v1;
    }
    int cout = 0 ;
    for (int i = lower; i <=upper ; ++i) {
        std::cout << i << " ";
        cout++;
        if(cout % 10 == 0) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;

    return 0;
}
