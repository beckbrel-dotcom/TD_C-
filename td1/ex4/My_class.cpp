#include <iostream>
#include "My_class.h"

void My_class::print_my_element(){
    std::cout << value << std::endl;
}

My_class::My_class(){
    value ="valeur par défaut";
}

My_class::My_class(std::string str){
    value = str;
}