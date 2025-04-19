#include<iostream>
using namespace std;
int main(){
    int path;
    cout<<"enter your path:";
    cin>>path;
    //path 1
    if(path==1){
        cout<<"enter your path:";
        cin>>path;
        //path 2
        if(path==2){
            cout<<"enter your path:";
            cin>>path;
            if(path==3){
                cout<<"enter your path:";
                cin>>path;

                if(path==4){
                    cout<<"reached";
                    
                }else {
                    cout<<"invalid path";
                    
                }
            }else if(path==4){
                cout<<"reached";
               
            }else{
                cout<<"invalid path";
                
            }
        }
        //path 3
        else if(path==3){
            cout<<"enter your path:";
            cin>>path;
            if(path==2){
                cout<<"enter your path:";
                cin>>path;
                if(path==4){
                    cout<<"reached";
                    
                }else{
                    cout<<"invalid path";
                    
                }
            }else if(path==4){
                cout<<"reached";
            }else{
                cout<<"invalid path";
            }
        }
        //path 4
        else if(path==4){
            cout<<"reached";
            
        }else{
            cout<<"invalid path";
            
        }
    }
}