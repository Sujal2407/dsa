#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v={2,1,3,4,5};
    auto t=10;
    auto f=10.11;
    cout<<t<< " "<<f<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<< " ";

    }
    cout<<endl;
    //we can use for each loop
    for (int merival : v){
        cout<<merival<<"  ";
    }
    cout<<endl;
    return 0;
}