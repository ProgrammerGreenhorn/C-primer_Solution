#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cin ;
using std::cout;


int main(){
    vector<vector<int>> ivec;
    
    //wrong
    //vector<string> svec = ivec;

    vector<string > svec(10,"null");

    cout<<svec.size()<<std::endl;

    
}