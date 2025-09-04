#include<bits/stdc++.h>
using namespace std;
int main(){
    string p;
    cin>>p;
    for( char ch:p){
        if(ch=='H' or ch=='Q' or ch=='9'   ){
            cout<<"YES"<<endl;
            return 0;
        }
              
    }
    cout<<"NO"<<endl;
      return 0;
}