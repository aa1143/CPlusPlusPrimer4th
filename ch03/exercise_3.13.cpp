//
// Created by zhang zhixiang on 15/10/4.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int input;
    vector<int> vec;
    while(cin >> input) {
        vec.push_back(input);
    }
    int vec_size = vec.size();
    if(vec_size == 0) {
        cout << "No element,Please check your input" <<endl;
        return -1;
    }

    for (vector<int>::size_type i = 0; i < vec_size-1 ; i +=2) {
        cout << vec[i]+vec[i+1] <<endl;
    }
    if( (vec_size % 2) != 0) {
        cout << "the last number " <<vec[vec_size-1] << " is odd number" <<endl;
    }

    //the second

    vector<int>::size_type begin = 0;
    vector<int>::size_type end = vec_size-1;
    while(begin < end){
        cout << vec[begin] + vec[end] <<endl;
        begin++;
        end--;
    }
    if ( begin == end){
        cout << vec[begin] <<endl;
    }

    return 0;
}