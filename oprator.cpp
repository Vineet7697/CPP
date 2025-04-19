// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int b=11;
//     // int c= a++ - ++b + ++a + b--;   
//     int c=22;
//     int d=a++ - c-- +b++ +c++ - a--;
//     cout<<d;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"enter the number=";
//     cin>>a;
//     (a>10 && a<20)?cout<<a:cout<<"invalid number";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number=";
//     cin>>n;
//     (n>20 && n<50)?(n%2==0 && n%3==0)?
//     cout<<n:cout<<"invalid number":cout<<"number is not between 20-50";
// }

// degree to farenheit

// #include<iostream>
// using namespace std;
// int main(){
//     int temp,option;
//     cout<<"enter temp and farenheit=";
//     cin>>temp>>option;
//    (option==1)?cout<<(temp*9)/5+32<<"in farenheit":
//    (option==2)?cout<<((temp-32)*5)/9<<"in celcius":cout<<"invalid input";
// }


// ATM password
// #include<iostream>
// using namespace std;
// int main(){
//     int password;
//     cout<<"enter your password=";
//     cin>>password;
//     (password==1234)?cout<<"cw":cout<<"wp":

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int password;
//     cout<<"enter your password=";
//     cin>>password;
//     (password==1234)?cout<<"cw":
//     (
//         cout<<"invalid input try again=",
//         cin>>password,
//         (password==1234)?cout<<"cw":

//         (cout<<"invalid input try again=",
//         cin>>password,
//         (password==1234)?cout<<"cw":
//         cout<<"card block")
//     );
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number=";
    cin>>n;
    if(n==1){
        cout<<"jan"<<"31";
    }else if(n==2){
        cout<<"feb"<<"28";
    }else if(n==3){
        cout<<"march"<<"31";
    }else if(n==4){
        cout<<"april"<<"30";
    }else if(n==5){
        cout<<"may"<<"31";
    }else if(n==6){
        cout<<"june"<<"30";
    }else if(n==7){
        cout<<"july"<<"31";
    }else if(n==8){
        cout<<"august"<<"31";
    }else if(n==9){
        cout<<"september"<<"30";
    }else if(n==10){
        cout<<"october"<<"31";
    }else if(n==11){
        cout<<"november"<<"30";
    }else if(n==12){
        cout<<"december"<<"31";
    }
}