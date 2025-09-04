#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int>heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
     //index of leftmost tallest
     int max_height=*max_element(heights.begin(), heights.end());
     int max_index =-1;
     for(int i=0;i<n;i++){
        if(heights[i]==max_height){
            max_index=i;
            break;
        }
     }
     //rightmost shortest
     int min_height =*min_element(heights.begin(),heights.end());
     int min_index=-1;
     for(int i=n-1;i>=0;i--){
        if(heights[i]==min_height){
         min_index=i;
         break;
        }
        
     }
   
int seconds = max_index + (n-1-min_index);
if(min_index<max_index) seconds--;
cout<<seconds<<endl;
   
   
}