//
// Created by User on 28.04.2019.
//

#ifndef COMMERCECRM_ORDER_H
#define COMMERCECRM_ORDER_H

#include <iostream>
#include <map>
#include "product.h"
class Order
{
private:
    std::multimap <int , Product> order;
    int uniq_key;
public:
    Order(const std::multimap<int, Product> &order, int uniq_key) : order(order), uniq_key(uniq_key){} ;

    const std::multimap<int, Product> &getOrder() const {
        return this->order;
    }

    void addToOrder(const std::multimap<int, Product> &order) {
        int price , count;
        std::string name;
        std::cout << "Enter the count of product:";
        std::cin >> count;
        std::cout << std::endl;
        std::cout << "Enter the name and price of product: " ;
        std::cin >> name >> price;
        Product product = Product(name , price);
        order.(std::make_pair(count , product));
    }

    int getUniq_key() const {
        return this->uniq_key;
    }

    void setUniq_key(int uniq_key) {
        this->uniq_key = uniq_key;
    }

    void printOrder()
    {
        auto it = this->order.begin();
        std::cout << "Order`s key:" << this->uniq_key << std::endl;
        for(;it!=this->order.end() ;it++)
        {
            if(it==this->order.end())
            {
                std::cout << "Count :" << it->first << " " << it->second.getName() << "Price: " << it->second.getPrice();
            } else
            {
                std::cout << "Count :" << it->first << " " << it->second.getName() << "Price: " << it->second.getPrice()<<std::endl;
            }
        }

    }
};
#endif //COMMERCECRM_ORDER_H
