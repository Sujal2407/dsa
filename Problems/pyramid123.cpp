#include<iostream>
using namespace std;
int main(){
    int n,r=1,c,space,no;
    cin>>n;
    while(r<=n){
        space=1;
        while(space<=n-r){
            cout<<" ";
            space=space+1;

        }
        no=r;
        c=1;
        while(c<=r){
            cout<<no;
            no=no+1;
            c=c+1;
        } 
        no=2*r-2;
        c=1;
        while(c<=r){
            cout<<no;
            no=no-1;
            c=c+1;

        }
        cout<<endl;
        r=r+1;
    }
    return 0;    


            



    
}