#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=1;row<=(n+1)/2;row++){
        if(row==(n+1)/2){
            for(int i=1;i<=n;i++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int i=1;i<=(n-3)/2;i++){
                cout<<" ";
            
            }
            cout<<"*";
            if(row==1){
                for(int i=1;i<=(n-1)/2;i++){
                    cout<<"*";

                }

            }
            else{

                for(int i=1;i<=(n-3)/2;i++){
                    cout<<" ";
                }                
            }
        
        }        
        
        cout<<endl;

    }

    for(int row=(n+3)/2;row<=n;row++){
        if(row==n){
            for(int i=1;i<=(n+1)/2;i++){
                cout<<"*";


            }
            for(int i=1;i<=(n-3)/2;i++){
                cout<<" ";
            }
            cout<<"*";
            
        }
        else{
            for(int i=1;i<=(n-1)/2;i++){
                cout<<" ";
            }
            cout<<"*";
            for(int i=1;i<=(n-3)/2;i++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    
    
    
    return 0;
}
