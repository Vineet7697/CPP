#include<iostream>
using namespace std;
int main(){
    int a=1;
    label:
    if(a<=10)
    {
        cout<<2*a<<endl;
        a++;
        goto label;
    }
}