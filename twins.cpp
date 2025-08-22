#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n ;
   cin>>n;
   vector<int>coins(n);
   int total=0;
   for(int i = 0 ;i<n;i++){
    cin>>coins[i];
    total+=coins[i];
   }
   sort(coins.rbegin(),coins.rend());
int sum =0;
int count = 0;
int half_sum=total/2;
for(int coin:coins){
    sum+=coin;
    count++;
    if(sum>half_sum){
        break;
    }
}
   cout << count << endl;
   return 0;
    
    
}