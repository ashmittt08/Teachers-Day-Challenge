#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lower =0;
    int upper = 0;
    for(char ch:s){
        if(islower(ch)) lower++;
        else if(isupper(ch)) upper++;
    }
    if(lower>=upper){
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
    }
    else {
        for(int i=0;i<s.size();i++){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s<<endl;
    return 0;

}