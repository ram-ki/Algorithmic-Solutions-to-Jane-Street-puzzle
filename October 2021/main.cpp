#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int double
class Solution{

  private:
    int comb(int n, int k){
      int res=1;
      if(k>n-k) k=n-k;
      for(int i=0; i<k; i++) res*=(n-i),res/=(i+1);
      return res;
    }

  public:
    int probability(int n){
      int ans=1;
      for(int i=0; i<n; i++){
        ans-=comb(n,i)*pow((1-i/n),3*n-1)*pow(-1,i);
      }
      return ans;
    }
};

signed main(){
   Solution solution;

   cout << setprecision(10);
   cout << "Searching ..." << endl;
   double p=(double) 1/3;
   for(int i=3; i<10; i++){
    if(solution.probability(i)>=p){
      cout << "Solution found" << endl;
      cout << i << " " << solution.probability(i) << endl;
      break;
    }
   }
   return 0;
}