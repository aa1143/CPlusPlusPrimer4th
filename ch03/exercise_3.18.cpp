//
// Created by zhang zhixiang on 15/10/5.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> vec(10,5);

    for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter) {
        *iter = *iter * 2;
    }
    for(vector<int>::iterator iter = vec.begin(); iter !=vec.end(); ++iter) {
        cout << *iter <<endl;
    }
    return 0;
}