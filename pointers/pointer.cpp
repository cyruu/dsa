#include <iostream>
using namespace std;

int main(){
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    *q=*p;
    cout<<"address of a is :"<<&a<<endl;
    cout<<"address of b is :"<<&b<<endl;
    cout<<"after *q=*p"<<endl;
    *q=*p;
    cout<<"address of a is :"<<&a<<endl;
    cout<<"address of b is :"<<&b<<endl;

  


    return 0;
}