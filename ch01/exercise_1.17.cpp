//
// Created by zhang zhixiang on 15/10/2.
//

#include <iostream>
// input a series of numbers， count the negative number
int main() {
    int count;
    int value;
    while (std::cin >> value) {
        if(value < 0) {
            count++;
        }
    }
    std::cout << "the count of negative numbers is " << count <<std::endl;

    return 0;

}