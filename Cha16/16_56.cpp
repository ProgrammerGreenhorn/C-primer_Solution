#include <ostream>
#include <sstream>
#include <string>
template <typename  T>
std::string debug_rep(const T&t){
    std::ostringstream ret;
    ret<<t;
    return ret.str();
}

template <typename  T>
std::string debug_rep(T *p){
    std::ostringstream ret;
    ret<<"pointer: "<<p;
    if(p){
        ret <<" "<<debug_rep(*p);
    }
    else{
        ret<<"null pointer";
    }
    return ret.str();
}
template <typename T> std::ostream &print(std::ostream &os, const T &t) {
  return os << t;
}

template <typename T, typename... Args>
std::ostream &print(std::ostream &os, const T &t, const Args &...rest) {
  os << t;                   // print the first t
  return print(os, rest...); // print the rest,when comes to the last
                             // parameter,it will call the above print()
}
template <typename ...Args>
std::ostream & errmsg(std::ostream &os,const Args & ...args){
    return print(os,debug_rep(args)...);
}