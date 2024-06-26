#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[]={1,2,0,-1,-2,-2,0,2,-2};
    int n=sizeof (a)/sizeof (int);
    sort(a,a+n);
    int target =0;
    for(int i=0;i<n-3;i++){
        if(i>0 and a[i]==a[i-1]){
            continue;
        }
        for(int l=0;l<n-2;l++){
            if(a[l]==a[l-1]){
                continue;
            }
            int j=l+1;
            int k=n-1;
            while(j<k){
                if(a[i]+a[l]+a[k]+a[j]>target){
                    k--;
                }
                else if(a[i]+a[j]+a[k]+a[l]<target){
                    j++;
                }
                else{
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<< " "<<a[l]<<endl;
                }
                j++;
                k--;
                while(j<k and a[j]==a[j-1]){
                    j++;
                }
                while(k>j and a[k]==a[k-1]){
                    k--;
                }
            }
        }
    }
    return 0;
}    
