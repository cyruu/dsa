#include <iostream>
using namespace std;

// TWO SUM
// return index of elements that add up to target

// arr = [3,5,7,2,8] and target = 10
// res = [0,2]

void twosum(int arr[],int target,int length){
    for(int i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if((arr[i]+arr[j])==target){
                cout<<"Result is ["<<i<<","<<j<<"]";
                return;
            }
        }
    }
}

int main(){
    int target = 10;
    int arr[5]= {3,5,7,2,8};
    cout<<"Array is :"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nTarget is: "<<target<<endl;
    twosum(arr,target,5);

    return 0;
}