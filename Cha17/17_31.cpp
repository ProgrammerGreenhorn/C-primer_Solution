#include <iostream>
#include <random>
#include <string>
int main(){
    std::string resp;
    std::default_random_engine e;
    std::bernoulli_distribution b;

    do{
        auto first = b(e);
        std::cout<<(first?"We go first":"You get to go first")<<std::endl;
        std::cout<<"--------------"<<std::endl;
        std::cout<<"play again?Enter 'yes' or 'no'."<<std::endl;
    }while(std::cin>>resp && resp[0] == 'y');

    return 0;
}