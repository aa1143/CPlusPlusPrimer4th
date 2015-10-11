//
// Created by zhang zhixiang on 15/10/11.
//

#ifndef CPLUSPLUSPRIMER4TH_SALES_ITEM_H
#define CPLUSPLUSPRIMER4TH_SALES_ITEM_H

#include <iostream>
#include <string>

class Sales_item {

public:
    std::istream &input(std::istream &in);
    std::ostream &output(std::ostream &out) const ;
    double avg_price() const ;
    bool same_isbn(const Sales_item &rhs) const {
        return rhs.isbn == isbn;
    }
    Sales_item() : units_sold(0), revenue(0.0) {}
private:
    std::string isbn;
    unsigned units_sold;
    double revenue;


};

#endif //CPLUSPLUSPRIMER4TH_SALES_ITEM_H
