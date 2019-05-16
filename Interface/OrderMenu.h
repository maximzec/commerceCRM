//
// Created by User on 17.05.2019.
//

#ifndef COMMERCECRM_ORDERMENU_H
#define COMMERCECRM_ORDERMENU_H

#include "Menu.h"

class OrderMenu : public Menu
{
public:
    OrderMenu():Menu()
    {
        this->type = "order";
    }
    void printMenu() override
    {
        std::cout << "-----------------------------------------------------------\n";
        std::cout << "********THE ORDER MENU********"<<std::endl;
        std::cout << "1.SHOW ORDERS BY ID\n"
                     "2.ADD ORDER TO ID\n"
                     "3.FIND ORDER BY UNIQUE KEY\n"
                     "4.BACK\n"
                     "5.EXIT\n";
        std::cout << "-----------------------------------------------------------\n";
    }
};
#endif //COMMERCECRM_ORDERMENU_H
