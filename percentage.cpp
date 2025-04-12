#include<iostream>
using namespace std;
int main(){
    int hindi,english,c,percentage;
    int totalmarks=300;
    int totalobtainedmarkas;
    cout<<"enter the marks for hindi english c=";
    cin>>hindi>>english>>c;
    totalobtainedmarkas=hindi+english+c;
    percentage=(totalobtainedmarkas*100)/totalmarks;
    cout<<percentage;


    }
