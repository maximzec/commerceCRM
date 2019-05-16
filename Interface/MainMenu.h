//
// Created by User on 17.05.2019.
//

#ifndef COMMERCECRM_MAINMENU_H
#define COMMERCECRM_MAINMENU_H

#include "Menu.h"


class MainMenu : public Menu {
public:

    MainMenu():Menu()
    {
       this->type = "main";
    }
    void printMenu() override
    {
        std::cout << "-----------------------------------------------------------\n";
        std::cout << "********THE MAIN MENU********"<<std::endl;
        std::cout << "1.CONSUMERS MENU\n"
                     "2.ORDER MENU\n"
                     "3.PRODUCTS MENU\n"
                     "4.SETTINGS\n"
                     "5.EXIT\n";
        std::cout << "-----------------------------------------------------------\n";
    }
};

#endif //COMMERCECRM_MAINMENU_H
