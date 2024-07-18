#include <iostream>
using namespace std;

int main(){
    // void pointer holds the address of any data type 
    // needs to be typecasted to data type before dereferencing the pointer
    void *vp;
    int a=5;
    char b='h';
    vp=&a;
    // cout<<"Dereferencing the void pointer vp as int : "<<*vp<<endl; //(need to typecast before indirection operator/ derefrencing)
    cout<<"Dereferencing the void pointer vp as int : "<<*(int*)vp<<endl;
    vp=&b;
    cout<<"Dereferencing the void pointer vp as char : "<<*(char*)vp<<endl;

    return 0;
}