//
// Created by zhang zhixiang on 15/10/2.
//

#include <iostream>

int main() {
    int i = 10;
    while (i >= 0) {
        std::cout << i << " " ;
        --i;
    }
    std::cout << std::endl;
    for (int j = 10; j >=0 ; --j) {
        std::cout << j << " ";
    }

    return 0;
}