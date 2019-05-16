//
// Created by User on 17.05.2019.
//

#ifndef COMMERCECRM_CONSUMERSMENU_H
#define COMMERCECRM_CONSUMERSMENU_H

#include "Menu.h"
class ConsumersMenu : public Menu
{
    void printMenu() override
    {
        std::cout << "-----------------------------------------------------------\n";
        std::cout << "********THE CONSUMERS MENU********"<<std::endl;
        std::cout << "1.SHOW ALL\n"
                     "2.CHANGE INFORMATION OF CONSUMER\n"
                     "3.ADD CONSUMER\n"
                     "4.BACK\n"
                     "5.EXIT\n";
        std::cout << "-----------------------------------------------------------\n";
    }
};
#endif //COMMERCECRM_CONSUMERSMENU_H
