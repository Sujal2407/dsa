#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        int pt=1;
        cout<<pt;
        for (int i=1;i<=row;i++){
            int ct=pt*(row-i+1)/i;
            cout <<ct;
            pt=ct;

        }
        cout<<endl;

    }
    
    return 0;
}
