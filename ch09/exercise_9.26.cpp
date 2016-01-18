//
// Created by zhang zhixiang on 16/1/19.
//
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(){
    int a[] = {0,1,2,3,4,5,6,7,8,9,10};
    vector<int> vec(a,a+11);
    list<int> ilist(a,a+11);

    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter) {
        if( *iter %2 == 0) {
            iter = vec.erase(iter);
            --iter;
        }
    }
    for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter) {
        if (*iter %2 != 0 ) {
            iter = ilist.erase(iter);
            --iter;
        }
    }
    for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter) {
        cout << *iter;
    }
    cout <<endl;
    for (list<int>::iterator iter = ilist.begin(); iter != ilist.end(); ++iter) {
        cout << *iter;
    }
    cout <<endl;

}