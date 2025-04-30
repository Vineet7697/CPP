#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number:";
    cin>>n;
    do
    {
        sum=sum+n;
       cout<<sum<<endl;
       n++;
    }while(n<=10);
}