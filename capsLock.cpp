#include<iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
       bool allUpper=true;
       for(int i=1;i<s.size();i++){
        if(!isupper(s[i])){
            allUpper=false;
            break;
        }
       }

      if(allUpper){
        for(int i=0;i<s.size();i++){
            if(isupper(s[i]))
            s[i]=tolower(s[i]);
            else
            s[i]=toupper(s[i]);
        }
     
    }
   
    cout<<s<<endl;
    return 0;
}