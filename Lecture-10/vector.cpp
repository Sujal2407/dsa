#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v){
    for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void update(vector<int> &v){
    for(int i=0;i<=v.size();++i){
        v[i]+=100;
    }


}
int main(){
    vector<int> v;
    for(int i=1;i<=9;i++){
        v.push_back(i);
        cout<<"after inserting "<<i<<"size :"<<v.size()<<"capacity :"<<v.capacity()<<endl;

    }
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    update(v);
    print (v);
    return 0;

}