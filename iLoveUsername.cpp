#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     vector<int> points(n);
    int amazing =0;
     for(int i=0;i<n;i++){
    cin>>points[i];
    }
    int min=points[0],max=points[0];
  for(int i=1;i<n;i++){
   if(points[i]>max){
    amazing++;
    max=points[i];
   }
   else if(points[i]<min){
    amazing++;
    min=points[i];
   }
  }
  cout<<amazing<<endl;
  return 0;
}