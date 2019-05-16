#include <iostream>
#include "Models/Order.h"
#include "Models/product.h"
#include "list"
#include "Interface/Menu.h"
#include "Interface/MainMenu.h"
#include "Interface/ConsumersMenu.h"
#include "Interface/OrderMenu.h"
#include "Interface/ProductMenu.h"

int main() {
    ///инициализация интерфейса
    MainMenu mainMenu = MainMenu();
    ConsumersMenu consumersMenu = ConsumersMenu();
    OrderMenu orderMenu = OrderMenu();
    ProductMenu productMenu = ProductMenu();
    std::string currentMenuType = "main";
    int state=0;

    ///загрузка данных из даты TBA
    for(bool b = true ;b ; )
    {


        if(currentMenuType == "main" )
        {
        switch (mainMenu.getState())
            {
                case 1:currentMenuType="consumer";break;
                case 2:currentMenuType="order";break;
                case 3:currentMenuType="product";break;
                case 4:currentMenuType="settings";break;
                case 5:exit(0);break;
            }
            mainMenu.setState(state);
            mainMenu.printMenu();

        }
        if(currentMenuType == "consumer")
        {
            switch (consumersMenu.getState())
            {
                case 1:break;
                case 2:break;
                case 3:;break;
                case 4:currentMenuType = "main";break;
                case 5:exit(0);break;
            }
            consumersMenu.setState(state);
            consumersMenu.printMenu();

        }
        if(currentMenuType == "order")
        {
            switch (orderMenu.getState())
            {
                case 1:break;
                case 2:break;
                case 3:;break;
                case 4:currentMenuType = "main";break;
                case 5:exit(0);break;
            }

            orderMenu.printMenu();

        }
        if(currentMenuType == "product")
        {
            switch (productMenu.getState())
            {
                case 1:break;
                case 2:break;
                case 3:;break;
                case 4:currentMenuType="main";break;
                case 5:exit(0);break;
            }
            productMenu.printMenu();

        }
        std::cout << "What you want to do?:";
        std::cin >> state;

    }


    return 0;
}