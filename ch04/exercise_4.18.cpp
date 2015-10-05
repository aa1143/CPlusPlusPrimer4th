//
// Created by zhang zhixiang on 15/10/5.
//

#include <iostream>
using namespace std;
int main() {
    const size_t array_size = 10;
    int array[array_size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int *p = array, *end = array + array_size; p != end; ++p) {
            *p = 0;
    }
    for (int i = 0; i <array_size ; ++i) {
      cout <<  array[i];
    }
}