//
// Created by User on 17.05.2019.
//

#ifndef COMMERCECRM_PRODUCTMENU_H
#define COMMERCECRM_PRODUCTMENU_H

#include "Menu.h"

class ProductMenu : public Menu
{
public:
    ProductMenu():Menu()
    {
        this->type = "product";
    }
    void printMenu() override
    {
        std::cout << "-----------------------------------------------------------\n";
        std::cout << "********THE PRODUCT MENU********"<<std::endl;
        std::cout << "1.SHOW ALL PRODUCTS\n"
                     "2.ADD NEW PRODUCT\n"
                     "3.CHANGE INFO ABOUT PRODUCT\n"
                     "4.BACK\n"
                     "5.EXIT\n";
        std::cout << "-----------------------------------------------------------\n";
    }
};
#endif //COMMERCECRM_PRODUCTMENU_H
