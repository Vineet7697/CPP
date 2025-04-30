#include<iostream>
using namespace std;
int main(){
    int n,t,sum=0;
    cout<<"enter the number:";
    cin>>n;
while(n>0){
    t=n%10;
    sum+=t;
    n=n/10;
}
cout<<sum;
}
