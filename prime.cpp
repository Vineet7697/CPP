#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<n+1;i++){
        if(n%i==0)
        count+=1;
    }
    if(n==0 || n==1){
        cout<<"given number is not prime"<< n;
    }else if(count>2){
        cout<<"given number is not prime"<< n;
    }else{
        cout<<"given number is prime"<< n;
    }
}