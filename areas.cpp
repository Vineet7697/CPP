#include<iostream>
using namespace std;
int main(){
   int side1,side2,side3;
   cout<<"enter the side1=";
   cin>>side1;
   cout<<"enter the side2=";
   cin>>side2;
   cout<<"enter the side3=";
   cin>>side3;
   if(side1==side2 && side2==side3){
    cout<<"equilateral triangle";
   }else if(side1==side2 || side1==side3 ||side2==side3){
    cout<<"isoscalane triangle";
   }else{
    cout<<"scalane triangle";
   }
}