#include<iostream>
#include <string>
int global_int;
std::string global_str;

int main(){
    int local_int;
    std::string local_str;

    std::cout<<global_int<<'\t'<<global_str<<'\t'<<local_int<<'\t'<<local_str<<std::endl;
}