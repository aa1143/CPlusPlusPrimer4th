//
// Created by zhang zhixiang on 15/10/2.
//

#include <iostream>

int main(){
    int sumByFor = 0;
    int sumByWhile = 0;
    for (int i = 50; i <=100 ; ++i) {
        sumByFor = sumByFor + i;
    }
    int j = 50;
    while (j <= 100) {
        sumByWhile = sumByWhile + j;
        ++j;
    }
    std::cout << "sumBuFor is " << sumByFor <<std::endl;
    std::cout << "sumBywhile is " << sumByWhile <<std::endl;

    return 0;
}
