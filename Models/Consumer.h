//
// Created by User on 17.05.2019.
//

#ifndef COMMERCECRM_CONSUMER_H
#define COMMERCECRM_CONSUMER_H

#include <iostream>

class Consumer
{
private:
    std::string name;
    std::string surname;
    unsigned int id;
public:
    Consumer()
    {
        this->name = "";
        this->surname = "";
        this->id = 0;
    }
    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        this->name = name;
    }

    const std::string &getSurname() const {
        return surname;
    }

    void setSurname(const std::string &surname) {
        this->surname = surname;
    }

    int getId() const {
        return id;
    }

    void setId(unsigned int id) {
        this->id = id;
    }

};
#endif //COMMERCECRM_CONSUMER_H
