#include <iostream>
#include <string>
#include "Main.h"

std::string print_string(std::string value){
    return value;
}

int main(){
    std::cout << print_string("Hello world") << std::endl;
    return 0;
}