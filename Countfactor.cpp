#include<iostream>
using namespace std;
int main(){
 int n,count=0;
 cout<<"enter the number:";
 cin>>n;
 int i=1;
 while(i<=n){
    if(n%i==0){
        count+=1;
    }
    i++;
 }
 cout<<count;

}