//
// Created by zhang zhixiang on 15/10/11.
//

#include "Sales_item.h"
#include <iostream>
using namespace std;

int main() {
    Sales_item item;
    cout << "please Enter some transations" <<endl;

    item.input(cin);
    item.output(cout);
    cout <<endl;

    return 0;
}