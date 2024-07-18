// double pointer holds the address of the pointer
#include <iostream>
using namespace std;

int main(){
    int a=5;
    int *p;
    cout<<"Address of variable a is: "<<&a<<endl;
    p=&a;
    cout<<"Address hold by p pointer is: "<<p<<endl;
    cout<<"both are same:"<<endl;
    cout<<"Address of pointer p is :"<<&p<<endl;
    int **q;
    q=&p;
    cout<<"Address hold by q pointer is: "<<q<<endl;
    cout<<"q pointer holds the address of p pointer"<<endl;
    return 0;
}