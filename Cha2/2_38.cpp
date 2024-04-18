

int main(){
    int a = 2;
    //auto and decltype same
    auto j = a;
    decltype(a) k = a;

    //not same
    const int b =3 ;
    auto l = b;
    decltype(b) m = b;
}