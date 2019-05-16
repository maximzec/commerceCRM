cmake_minimum_required(VERSION 3.13)
project(commerceCRM)

set(CMAKE_CXX_STANDARD 14)

add_executable(commerceCRM main.cpp Models/product.h Models/Order.h Interface/Menu.h Interface/MainMenu.h Interface/ConsumersMenu.h Interface/OrderMenu.h Interface/ProductMenu.h Models/Consumer.h)