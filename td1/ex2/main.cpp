#include <iostream>

std::string print_string(char* string){
    return string ;
}

int main(){
    std::cout << print_string("Hello world")  << std::endl;
    return 0;
}