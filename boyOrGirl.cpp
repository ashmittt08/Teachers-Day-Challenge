// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//    int  count =1  ;
//    sort(s.begin(),s.end());
//    for(int i = 1 ;i<s.size();i++){
//     if(s[i]!=s[i-1])
//     count ++;

//    }
//    if((count%2)!= 0){
//     cout << "IGNORE HIM !"<<endl;
//    }
//    else{
//     cout<< "CHAT WITH HER !"<<endl;
//    }
//    return 0;
// }

// USE SETS (only stores unique elements)

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> unique_char(s.begin(),s.end());

    if(unique_char.size() %2 == 0) cout<< "CHAT WITH HER!"<<endl;
    else cout<< "IGNORE HIM!"<<endl;
    return 0;
}