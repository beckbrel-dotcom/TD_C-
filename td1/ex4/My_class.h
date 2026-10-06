#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <iostream>
#include <string>

class My_class{
private :
    std::string value;

public :
    void print_my_element();
    My_class(); 
    My_class(std::string str);
};

#endif