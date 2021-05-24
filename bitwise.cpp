#include <bits/stdc++.h>
using namespace std;


int main(){

    int t, n, k, ans = -1;
    cin>>t;
    while(t-->0){
      cin>>n>>k;
      for (int i = 1; i < n; i++) {
        for (int j = i+1; j <= n; j++) {
          if((i&j) < k && (i&j) > ans){
            ans = (i&j);
          }else{
            continue;
          }
        }
      }
      cout<<ans<<endl;
      ans = -1;
    }



    return 0;

}
