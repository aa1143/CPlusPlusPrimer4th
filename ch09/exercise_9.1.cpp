//
// Created by zhang zhixiang on 16/1/17.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> vec;
    vec.push_back("ss");
    vec.push_back("");
    for(vector<string>::iterator iter = vec.begin(); iter != vec.end(); ++iter){
        if(iter->empty()){
            cout << "yes" << endl;
        }

    }
}