//
// Created by zhang zhixiang on 15/10/3.
//

#include <iostream>

int main() {
    int base = 0;
    int exponent = 0;
    long result = 1;
    std::cout << "please inter two numbers :" <<std::endl;
    std::cin >> base >> exponent;

    if (base < 0 || exponent < 0) {
        std::cout << "cant inter negative number"  <<std::endl;
        return -1;
    }
    for (int i = 1; i <= exponent; i++) {
        result = result * base;
    }
    std::cout << result <<std::endl;
    return 0;
}
