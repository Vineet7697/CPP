#include<iostream>
using namespace std;
int main(){
    char a='a';
    for(char r='a'; r<='c'; r++){
        for(char c='a'; c<=r; c++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}