//
// Created by zhang zhixiang on 15/10/6.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    vector<string *> vec;
    string input;
    while(cin >> input) {
        string *str = new string;
        *str = input;
        vec.push_back(str);
    }
    for(vector<string *>::iterator iter = vec.begin(); iter !=vec.end(); ++iter ) {
        cout << **iter <<" " << (**iter).size()<<endl;
    }
    return 0;
}