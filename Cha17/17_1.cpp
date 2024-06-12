#include <cstddef>
#include <iostream>
#include <tuple>
int main(){
    std::tuple<int,int,int> t (10,20,30);
    using trans = decltype(t);

    std::size_t sz= std::tuple_size<trans>::value;

    std::cout<<sz<<std::endl;
    
    std::tuple_element<0,trans>::type ele = std::get<0>(t);

    std::cout<<ele<<std::endl;
    return 0;
    
}