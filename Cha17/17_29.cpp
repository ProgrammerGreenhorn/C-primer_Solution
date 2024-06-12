#include <cstddef>
#include <iostream>
#include <ostream>
#include <random>
unsigned int func(unsigned int seed = 0){
    static std::default_random_engine e(seed);
    static std::uniform_int_distribution<int> u(0,9);
    return u(e);
}

int main(){
     
     for(std::size_t i = 0; i< 10;++i){
        std::cout<<func()<<" ";
     }
     std::cout<<std::endl;
       for(std::size_t i = 0; i< 10;++i){
        std::cout<<func(10)<<" ";
     }
     std::cout<<std::endl;
}