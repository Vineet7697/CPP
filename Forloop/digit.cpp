#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter the number:";
    cin>>n;
   while(n>0){
        count+=1;
        n/=10;
      
    }
    cout<<count;
}