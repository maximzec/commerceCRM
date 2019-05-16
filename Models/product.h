//
// Created by User on 28.04.2019.
//

#ifndef COMMERCECRM_PRODUCT_H
#define COMMERCECRM_PRODUCT_H

#include <iostream>

class Product {
private:
    std::string name;
    int price;
public:
    Product()
    {
        this->name = "";
        this->price = 0;
    }
    Product(std::string name , int price)
    {
        this->name = name;
        this->price = price;
    }
    ~Product() = default;

    const std::string &getName() const {
        return this->name;
    }

    void setName(const std::string &name) {
        this->name = name;
    }

    int getPrice() const {
        return this->price;
    }

    void setPrice(int price) {
        this->price = price;
    }
};

#endif //COMMERCECRM_PRODUCT_H
