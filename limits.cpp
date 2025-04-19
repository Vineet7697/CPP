#include<iostream>
#include<limits>
using namespace std;
 int main(){
    //int float double void
    //size
    // cout<<sizeof(int)<<endl;
  
  
    // cout<<sizeof(double);

    //address
    // int a;
    // cout<<&a;

    //limits
    // cout<<numeric_limits<double>::max();
   //  cout<<numeric_limits<int>::max();
   //  cout<<numeric_limits<char>::min();

   //typecasting
    cout<<static_cast<int>(numeric_limits<char>::min());
    cout<<endl;
    cout<<static_cast<int>(numeric_limits<char>::max());
 }