#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>ans;
    for(char ch:s){
        if(ch!='+'){
            ans.push_back(ch-'0');
        }
    }
    sort(ans.begin(),ans.end());

    for(int i =0 ; i<ans.size();i++){
        if(i>0) cout<<'+';
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}