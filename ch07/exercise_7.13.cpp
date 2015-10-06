//
// Created by zhang zhixiang on 15/10/7.
//

#include <iostream>
using namespace std;

int sum1(const int arr[],size_t size) {
    int sum = 0;
    for(size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int sum2(const int *begin, const int *end ) {
    int sum = 0;
    while(begin != end) {
        sum += *begin;
        begin++;
    }
    return sum;
}
int sum3( int (&arr)[5],size_t size) {
    int sum = 0;
    for (size_t i = 0; i<size; i++) {
        sum +=arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    size_t  size  = sizeof(arr)/ sizeof(arr[0]);
    cout << sum1(arr, size) <<endl;
    cout << sum2(arr, arr + size) <<endl;
    cout << sum3(arr, size) <<endl;


    return 0;
}