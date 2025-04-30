#include<iostream>
using namespace std;
int main(){
    int num1=12,num2=14,lcm;
    for(int i=1;i<=num1;i++){
        if(num1%i==0 && num2%i==0){
            lcm=i;
        }
    }
    lcm=(num1*num2)/lcm;
    cout<<lcm;
}