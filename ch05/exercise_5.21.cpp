//
// Created by zhang zhixiang on 15/10/6.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    for (int i = 0; i < 10; i++ ) {
        vec.push_back(i);
    }
    for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
        if( *iter % 2 == 1) {
            *iter = *iter * 2;
        }
    }
    for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
        cout << *iter <<endl;
    }
    return 0;
}