#include <cstddef>
#include <iostream>
#include <ostream>
#include <random>
unsigned int func(){
    static std::default_random_engine e;
    static std::uniform_int_distribution<int> u(0,9);
    return u(e);
}

int main(){
     
     for(std::size_t i = 0; i< 10;++i){
        std::cout<<func()<<" ";
     }
     std::cout<<std::endl;
}