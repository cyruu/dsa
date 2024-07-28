#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void longestCommonPrefix(vector<string> arr){
    string res = "";
    // sort the array of strings
    sort(arr.begin(),arr.end());
    string initial = arr[0];
    string final = arr[arr.size()-1];
    for(int i=0;i<initial.length();i++){
        if(initial[i]==final[i]){
            res += initial[i];
        }
        else{
            break;
        }
    }
    cout<<res;
}

int main(){

    vector<string> arr = {"flower","flow","flight"};
    longestCommonPrefix(arr);
    return 0;
}