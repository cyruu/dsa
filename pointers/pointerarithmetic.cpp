#include <iostream>
using namespace std;
 
int main(){
    int *p;
    int *arr = (int*)malloc(5*sizeof(int));
    p=&arr[0];
    cout<<"Address of 0th element is: "<<p<<endl;
    p++;
    cout<<"Address of 1th element is: "<<p<<endl;
    int *f,*l;
    f = &arr[0];
    l = &arr[4];
    cout<<"Subtaction of array with size 5[0-4] is : "<<l-f<<endl;
    return 0;
}