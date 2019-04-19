#include <iostream> //menghitung modulus
using namespace::std;
int Modulus(int nilai,int x){
    if(x==0){
        return (nilai%x);
    }
    else if(x==nilai){
        return (0);
    }
    else{
        return (nilai%x);
    }
}
main(){
    int a,b;
cout<<" Bilangan adalah     : ";cin>>a;
cout<<" Modulus adalah      : ";cin>>b;
cout<<" Hasil setelah diubah: "<<a<<" % "<<b<<" = "<<Modulus(a,b);
}


