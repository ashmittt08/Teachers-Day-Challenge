#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     string s;
     int X=0;
    while(n!=0){
        cin>>s;
        if(s=="++X" or s=="X++"){
            X+=1;
        }
        else{
            X-=1;
        }
        n--;
    }
  cout<<X<<endl;
  return 0;

}