#include "Sales_item.h"
#include <iostream>


int main(){
    Sales_item temp,res;
    while(std::cin>>temp){
       res = res + temp;
    }
    std::cout<<res<<std::endl;
}