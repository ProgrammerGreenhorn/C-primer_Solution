#include <iostream>
template<typename T>
auto sum(const T& _1,const T& _2) ->decltype(_1+_2){
    return _1+_2;
}

int main(){
    std::cout<<sum(132432535,242515)<<std::endl;
}