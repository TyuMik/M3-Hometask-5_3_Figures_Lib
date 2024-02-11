#pragma once
#include <string>
#include <iostream>

class Figure {
protected:
    std::string name;
public:
    Figure();
    std::string get_name();
    virtual void print_info();
};
