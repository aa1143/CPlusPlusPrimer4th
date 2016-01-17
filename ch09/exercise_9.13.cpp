//
// Created by zhang zhixiang on 16/1/17.
//

#include <iostream>
#include <vector>
using namespace std;

vector<int>::iterator findInt(vector<int>::iterator begin, vector<int>::iterator end, int val) {
    while (begin != end) {
        if (*begin == val) {
            return begin;
        }else {
            ++begin;
        }
    }
    return begin;
}

int main(){
    int arry[] = {1, 2, 3, 4, 5, 6};
    vector<int> vec(arry,arry + 6);
    //enter a integer

    cout << "please inter a integer" <<endl;
    int val;
    cin >> val;

    vector<int>::iterator iter ;
    iter = findInt(vec.begin(), vec.end(), val);

    if (iter != vec.end()) {
        cout << val << "is a element of vector" <<endl;
    }else {
        cout << val << "is not a element of vector" <<endl;
    }
    return 0;
}