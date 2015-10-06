//
// Created by zhang zhixiang on 15/10/7.
//

#include <iostream>
#include <vector>
using namespace std;

double sum(vector<double>::iterator begin, vector<double>::iterator end) {
    double sum = 0.0;
    while(begin != end) {
        sum += *begin;
        begin++;
    }
    return sum;
}

int main() {
    vector<double> vec;
    double input = 0.0;
    while (cin >> input) {
        vec.push_back(input);
    }
    cout << sum(vec.begin(), vec.end()) <<endl;
    return 0;
}