#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int sol = 0;
    while(t!=0){
        int x,y,z;
        cin>>x>>y>>z;
        
        if((x==1 and y==1 and z==1) or (x==1 and y==1) or (x==1 and z==1)  or (y==1 and z==1) ){
            sol++;
        }
        t--;
        
    }
    cout<<sol<<endl;
    return 0;
}