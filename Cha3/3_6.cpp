

#include <iostream>
#include <string>
int main(){
    std::string s = "sdafasagag";
    for (auto &x : s){
       x = 'X';
    }
    std::cout<<s<<std::endl;
}