#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main(){
    string str = "HELLO World";
    string temp = "";
    for(int i=0;i<str.length();i++){
        for(int j=65;j<91;j++){
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
            if(str[i]==(char)j || str[i]==char(j+32) || str[i]==' '){
                temp+=str[i];
                break;
            }
            cout<<temp<<(char)j<<endl;
        }
    }
    cout<<temp<<endl;
    return 0;
}