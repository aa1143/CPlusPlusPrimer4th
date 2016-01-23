//
// Created by zhang zhixiang on 16/1/23.
//

#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
    
    char* a[] = {"hello","world"};
    list<char*> slit(a,a+2);
    vector<string> svec;

    svec.assign(slit.begin(),slit.end());

    for (list<char*>::iterator iter = slit.begin(); iter !=slit.end(); ++iter){
        cout << *iter <<endl;
    }
    for (vector<string>::iterator iter = svec.begin(); iter !=svec.end(); ++iter){
        cout << *iter <<endl;
    }

 }
