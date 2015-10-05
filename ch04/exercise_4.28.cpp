//
// Created by zhang zhixiang on 15/10/6.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(10,38);
    int *arr = new int[vec.size()];
    int *tmp = arr;
    for(vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++) {
         *arr = *iter;
         arr++;
    }

    for (int *p = tmp; p != tmp + vec.size(); p++) {
        cout << *p <<" ";
    }

    arr = NULL;
    delete [] arr;
    return 0;
}