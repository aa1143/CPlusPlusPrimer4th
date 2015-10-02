//
// Created by zhang zhixiang on 15/10/2.
//

#include <iostream>

// print the bigger of two numbers
int main() {
    int v1 , v2;
    std::cin >> v1 >> v2;

    if(v1 >= v2) {
        std::cout << "the bigger number is " << v1 <<std::endl;
    }else {
        std::cout << "the bigger number is " << v2 <<std::endl;
    }
}