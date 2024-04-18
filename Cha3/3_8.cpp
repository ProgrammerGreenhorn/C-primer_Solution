#include <iostream>
#include <string>
int main(){
    std::string s = "sdadasfasf";
    decltype(s.size()) index = 0;

    while(index != s.size()){
        s[index] = 'X';
        ++index;
    }
    std::cout<<s<<std::endl;

}