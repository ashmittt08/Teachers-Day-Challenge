#include<bits/stdc++.h>
using namespace std;
int main(){
    string num1;
    cin>>num1;
    string num2;
    cin>>num2;
    string ans="";
    for(int i=0;i<num1.size();i++){
       
            if(num1[i]!=num2[i]) ans+='1';
            else ans+='0';
        
    }
    cout<<ans<<endl;
    return 0;
}