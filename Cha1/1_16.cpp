

#include <iostream>
int main(){
   int res = 0,value = 0;
   while(std::cin >> value){
    res += value;
   }
   std::cout<<res<<std::endl;
}