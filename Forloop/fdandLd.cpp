#include<iostream>
using namespace std;
int main(){
    int n,fd,ld,sum=0;
    cout<<"enter the number:";
    cin>>n;
    ld=n%10;
    while(n>0){

        fd=fd%10;
        n=n/10;
        sum=fd+ld;
    }
    cout<<"first digit="<<fd<<endl;
    cout<<"last digit="<<ld<<endl;
    cout<<"sum="<<sum;

}