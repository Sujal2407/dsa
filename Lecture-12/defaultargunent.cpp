#include<iostream>
using namespace std;
int add(int a=0,int b=0,int c=0){
    return a+b+c;
}
int main(){
    cout<<add(10,20,30)<<endl;
    return 0;

}