//
// Created by zhang zhixiang on 16/1/17.
//

#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list<int>::iterator iter1 = list1.begin(),
                        iter2 = list1.end();
    while(iter2 != iter1) {
        cout << *(--iter2) << endl;
    }
}