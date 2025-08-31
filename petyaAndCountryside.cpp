#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
   vector<int>height(n);
   
    for(int i=0;i<n;++i){
        cin>>height[i];
    }
    int res=0;
    for(int i=0;i<n;++i){
        int cnt =1;
        int l=i-1,r=i+1;
        while(l>=0 and height[l]<=height[l+1]){
            cnt++;
            l--;
        }
        while(r<n and height[r]<=height[r-1]){
            cnt++;
            r++;
        }
        res =max(res,cnt);
    }
    cout<<res<<endl;
    return 0;
   
}