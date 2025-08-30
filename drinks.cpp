#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int p;
    double sum=0.0;
   for(int i=0;i<n;i++){
    cin>>p;
    sum+=p;
   }
    double total= (sum/n);
    cout.precision(12);  //precision up to 12
    cout <<  fixed << total << endl;  //fixed for fixed point notation
    return 0;
  
}