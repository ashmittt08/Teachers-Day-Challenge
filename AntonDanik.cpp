#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int countD =0,countA=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') countA++;
        else countD++;
        
    }
    if(countA>countD){
        cout<<"Anton"<<endl;

    }
    else if(countA == countD){
        cout<<"Friendship"<<endl;

    }
    else{
        cout<<"Danik"<<endl;
    }
}