#include<iostream>
using namespace std;
int main(){
    int num1=18;
    int num2=45;
    int gcd;
    for(int i=1; i<=num1 ||i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
      
    }
    cout<<gcd;
}