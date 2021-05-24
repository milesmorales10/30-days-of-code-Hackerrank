#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  string a="",b="", c="";
  cin>>n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  for (int i = 0; i < n; i++) {
    getline(cin, a);
    for (int j = 0; j < a.size(); j++) {
      if(j%2 == 0){
        b += a[j];
      }else{
        c += a[j];
      }
    }
    cout<<b<<" ";
    cout<<c<<endl;
    b = "";
    c = "";
  }


  return 0;
}
