#include<iostream>
using namespace std;
int main(){
    int unit;
    cout<<"enter the unit:";
    cin>>unit;
    if(unit>0 && unit<=50){
cout<<unit*10;
    }else if(unit>50 && unit<=100){
        cout<<50*10+(unit-50)*20;
    }else if(unit>100 && unit<=150){
        cout<<50*10+50*20+(unit-100)*30;
    }else if(unit>150 && unit<=200){
        cout<<50*10+50*20+50*30+(unit-150)*40;
    }else if(unit>200){
        cout<<50*10+50*20+50*30+50*40+(unit-200)*50;
    }else {
        cout<<"default";
    }
}