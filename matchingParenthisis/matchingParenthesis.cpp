#include <iostream>
#include <stack>
using namespace std;

void isValid(string s){
    stack<char> arr;
    for(int i=0;i<s.length();i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='('){
            arr.push(s[i]);
        }
        else if(s[i]==']' || s[i]=='}' || s[i]==')'){
            // for }
            if(arr.empty()) {
                    cout<<"invalid";  
            }
            if(
                (s[i]==']' && arr.top()=='[') ||
                (s[i]=='}' && arr.top()=='{') ||
                (s[i]==')' && arr.top()=='(')
            
            ){
                arr.pop();
            }
            // for (])
            else cout<<"invalid";
        }
    }
    if(arr.empty()){
        cout<<"valid";
    }
    else cout<<"invalid";
}

int main(){

    string s = "[{()}]";
    isValid(s);
    return 0;
}