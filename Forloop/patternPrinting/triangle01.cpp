#include<iostream>
using namespace std;
int main(){
    for(int r=0; r<3; r++){
        for(int c=0; c<3; c++){
            cout<<(c+r)%2<<" ";

        }
        cout<<endl;
    }
}