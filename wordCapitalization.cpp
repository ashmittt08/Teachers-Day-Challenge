#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  for(int i  = 0 ;i<s.size();i++){
    s[i]=tolower(s[i]);
  }
  if(!s.empty()){
    s[0]= toupper(s[0]);
  }
  cout<< s << endl;
  return 0;
}