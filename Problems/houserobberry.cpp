#include<iostream>
#include<vector>
using namespace std;
class solution{
public:
    int solve(vector<int>num,int i,vector<int>&dp){
        //base case
        if(i>=num.size()){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        //recursive case
        int take=0;
        take=num[i]+solve(num,i+2,dp);
        int nottake=0+solve (num,i+1,dp);
        return dp[i]=max(take,nottake);
    }
    int rob(vector<int>&num){
        vector<int>dp(num.size()-1);
        return solve(num,0,dp);
    }
};
int main(){
    return 0;
}