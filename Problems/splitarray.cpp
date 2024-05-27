#include<iostream>
using namespace std;
void solve(int *arr,int n,int sum1,string s1,int sum2,string s2,int i,int &count){
	if(i==n){
		if(sum1==sum2){
			cout <<s1.substr(1)<<" and "<<s2.substr(1)<<endl;
			count++;
		}
		return;
	}
	solve(arr,n,sum1+arr[i],s1+" "+to_string(arr[i]),sum2,s2,i+1,count);
	solve(arr,n,sum1,s1,sum2+arr[i],s2+" "+to_string(arr[i]),i+1,count);

}
int main() {
	int n;
    int count=0;
	cin>>n;
	int arr[100];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	solve(arr,n,0,"",0,"",0,count);
    cout<<count<<endl;
	return 0;
}