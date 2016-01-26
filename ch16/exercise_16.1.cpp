//
// Created by zhang zhixiang on 16/1/27.
//

#include <iostream>
using namespace std;

template <typename  T>
int compare(const T &v1, const T &v2) {
    if (v1 > v2) {
        return v1;
    }
    if (v1 <= v2) {
        return v2;
    }
    return 0;
}
int main(){
    cout << compare(1, 2) <<endl;
}