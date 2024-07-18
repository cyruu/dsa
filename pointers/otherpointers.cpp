#include <iostream>
using namespace std;

int main(){

    int *p; // wild pointer => no initialize to the pointer
    int *np = NULL; // Null is equals to 0
    // 0 address cannot be derefrenced
    
    // dangling pointer
    //=> pointer that points to address that is freed
    int *dp;
    int *a=(int*)malloc(sizeof(int));
    dp=a;
    cout<<"Address of dp before a is freed: "<<dp<<endl;
    free(dp);
    // is frees the address that is hold by dp 
    // address of a is freed
    // not dp holds address that is not valid or that doesnt exists
    cout<<"Address of dp after a is freed: "<<dp<<endl;
    cout<<"Address is there but not in memory."<<endl;

    return 0;
}