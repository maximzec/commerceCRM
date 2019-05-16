//
// Created by User on 13.05.2019.
//

#ifndef COMMERCECRM_MENU_H
#define COMMERCECRM_MENU_H

#include <conio.h>
#include <iostream>
#include <list>

class Menu {
protected:
    int state;
    std::string type;
public:
    Menu() {
        this->state = 0;
    }


    virtual void printMenu() = 0;


    int getState() {
        return this->state;
    }

    int setState(int state) {

        this->state = state;
    }

    std::string getType()
    {
        return  this->type;
    }


};
#endif //COMMERCECRM_MENU_H
