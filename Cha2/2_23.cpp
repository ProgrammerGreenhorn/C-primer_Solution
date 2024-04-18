

int main(int argc, char ** argv){

    const int i = 42;
    auto j = i;  //int  j
    const auto &k = i; //const int &k
    auto *p = &i;     //const int *p
    const auto j2 = i,&k2 = i; //const int j2,const int &k2

    decltype(i) o = 24;
}