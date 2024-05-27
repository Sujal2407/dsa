#include<iostream>
#include<vector>
using namespace std;
void solve(vector<long long int> inp){
    int runningsum=0;
    unordered_map<int,int> sumMap;
    for(int i=0;i<inp.size();i++){
        runningsum+=inp[i];
        sumMap[runningsum]=i+1;
    }
    if(runningsum%2==0 &&sumMap.find(runningsum/2)!=sumMap.end()){
            
    }
}

int main(){
    return 0;
}