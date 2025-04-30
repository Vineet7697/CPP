#include<iostream>
using namespace std;
int main(){

int n,digit,sum=0,temp;
cout<<"enter the number:";
cin>>n;
temp=n;
while(temp>0){
    digit=temp%10;
    sum=sum+(digit*digit*digit);
    temp/=10;
}if(n==sum){
    cout<<"palindrome ";
}else{
cout<<"not palindrome";
}
}