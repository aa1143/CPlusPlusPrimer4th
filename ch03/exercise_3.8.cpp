//
// Created by zhang zhixiang on 15/10/4.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    string output;
    string output2;
    while(cin >> input) {
        output += input;
        output2 +=  input + " ";
    }
    cout << output << endl;
    cout << output2 << endl;
}