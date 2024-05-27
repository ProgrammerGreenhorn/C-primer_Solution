#include <iostream>
#include <string>
#include <vector>
template <typename  container>
void print_container(const container & c){
    typename container::const_iterator it = c.begin();
    while(++it != c.cend()){
        std::cout<<*it<<std::endl;
    }
    return;
}

int main(){
    print_container<std::vector<int>>({1,2,3,4,5});
    print_container<std::vector<std::string>>({"hello","world","ok"});
    return 0;
}