#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>> n >> k;
     int count =0;
     vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int threshold = arr[k-1];
    for(int i =0;i<n;i++){
        if(arr[i]>= threshold and arr[i]>0) count++;
    }
    cout<<count<<endl;
    return 0;
    
}
