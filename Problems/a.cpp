#include<iostream>
using namespace std;
bool flag = false;
void solve(char maze[][11],int op[][11],int m,int n, int i,int j){
	//base case 
	if(i==m-1 && j==n-1  and maze[i][j]=='O'){
        op[i][j]=1;
		for(int row=0;row<m;row++){
			for (int col=0;col<n;col++){
				cout<<op[row][col]<<" ";
			}
			cout<<endl;
		}
        cout<<endl;
		flag=true;
		return;
	}
	if(i>m-1 || j>n-1 || i<0 || j<0){
		return;
	}
	if(maze[i][j]=='X' || op[i][j]== 1){
		return;
	}
	//recursive case
	op[i][j]=1;
	solve(maze,op,m,n,i+1,j);
	solve(maze,op,m,n,i,j+1);
	solve(maze,op,m,n,i-1,j);
	solve(maze,op,m,n,i,j-1);
	op[i][j]=0;//backtracking
}
int main(){
	char maze[11][11];
	int op[11][11]={0};
	int m,n;
	cin>>m>>n;
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>maze[i][j];
		}
	}
	solve(maze,op,m,n,0,0);
	if(!flag){
		cout<<"NO PATH FOUND";
	}
	return 0;
}
