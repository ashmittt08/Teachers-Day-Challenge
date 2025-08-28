#include<bits/stdc++.h>
using namespace std;
int main(){
   int k ;     //no of testcases 
   cin>>k;
   while(k--){    
    string s;
    cin>>s;
    int n= s.size();
    if(n<=10){
        cout<<s<<endl;
        
    }
    else{
        cout<<s[0]<<n-2<<s[n-1]<<endl; 
    }
  
   }
  return 0;
}