#include <bits/stdc++.h>
using namespace std;

int main(){

  int d, m, y, a, b, c, ans = 0;
  cin>>d>>m>>y>>a>>b>>c;
  if(y > c){
    ans = 10000;
  }else if( y == c){
    if(m > b){
      ans = 500*(m-b);
    }else if( m == b){
      if(d > a){
        ans = 15*(d-a);
      }
    }
  }

  cout<< ans << endl;


 return 0;
}
