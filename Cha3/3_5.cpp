

#include <cctype>
#include <iostream>
#include <string>
int main(){
    std::string word, res1,res2;
    
    while(std::cin >> word){
       res1 = res1 + word;
       res2 = res2 + word + " ";
    }
    std::cout<<res1<<std::endl<<res2<<std::endl;
    

    //change to upper until meet a space
    std::string s3 = "hello world";
    for(decltype(s3.size()) index = 0;index != s3.size() && !std::isspace(s3[index]);index++){
        s3[index] = std::toupper(s3[index]);
    }
    std::cout<<s3<<std::endl;
    return 0;
}