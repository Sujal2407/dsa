#include<iostream>
using namespace std;
void copystring(char*a,char*b){
    //a main b ko copy karna 
    int len=strlen(b);
    for(int i=0;i<len;i++){
        a[i]=b[i];

    }
}
int main(){
    char a[100],largest[100]="";
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a,100);
        if(strlen(a)>strlen(largest)){
            copystring(largest,a);
        }
    }
    cout<<largest<<endl;
    return 0;
}
