#include<bits/stdc++.h>
using namespace std;
int  main(){
    string s;
    cin>>s;
    string result="";
    for(char ch:s){
        char lower = tolower(ch);   //convert in lower case
         if (lower != 'a' && lower != 'o' && lower != 'y' &&
            lower != 'e' && lower != 'u' && lower != 'i'){     //check if not a vowel
                result+='.';      //add . before consonent 
                result+=lower;      // add the consonent itself
            }
    }
    cout<<result<<endl;
    return 0;
    
}