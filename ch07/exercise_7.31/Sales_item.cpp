//
// Created by zhang zhixiang on 15/10/11.
//

#include "Sales_item.h"

std::istream &Sales_item::input(std::istream &in) {
    double price;
    in >> isbn >>    >> price;
    if (in) {
        revenue = units_sold * price;
    }else {
        units_sold = 0;
        revenue = 0;
    }
    return in;
}
std::ostream &Sales_item::output(std::ostream &out) const {
    out << isbn << "\t" << units_sold << "\t"
        << revenue << "\t" << avg_price() ;
    return out;
}
double  Sales_item::avg_price() const {
    if (units_sold) {
        return revenue / units_sold;
    }else {
        return 0;
    }
}
