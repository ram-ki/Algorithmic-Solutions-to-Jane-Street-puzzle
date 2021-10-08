#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

#define int double
class Solution{

  public:
    int function(int x){
      int ans=(sin(x)+cos(x))/(cos(0.5)+sin(0.5));
      return ans;
    }
};

signed main(){
   Solution solution;

   cout << setprecision(10);
   cout << "Searching ..." << endl;
   double p=(double) 1/2;
   double x=(double) -1/2;
   while(solution.function(x)-p<0.00000001){
    x+=0.00000001;
   }
   cout << "Solution found" << endl;
   cout << x << endl;
   return 0;
}