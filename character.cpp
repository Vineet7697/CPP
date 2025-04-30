#include<iostream>
using namespace std;
int main(){
   char ch;
    cout<<"enter the character:";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lowercase letter";
    }else if(ch>='A' && ch<='z'){
        cout<<"uppercase letter";
    }
        else{
        cout<<"invalid character";
    }

}