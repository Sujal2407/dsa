#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>lastindex(26,0);
    //int lastindex[26]={0};
    for(int i=0;i<s.size();i++){
        lastindex[s[i]-'a']=i;

    }
    vector<bool>visited(26,false);
    stack<char> stk;
    for(int i=0;i<size();i++){
        if(visited[s[i]-'a']){
            continue;
        }
        while(!stk.empty() and stk.top()>s[i] and i<lastindex[stk.top-'a']){
            visited[stk.top()-'a']=false;
            stk.pop();
        }
        stk.push(s[i]);
        visited[s[i]-'a']=true;
    }
    string op="";
    while(!stk.empty()){
        op+=stk.top();
        stk.pop();

    }
    reverse(op.begin(),op.end());
    cout<<op;
    return 0;
}