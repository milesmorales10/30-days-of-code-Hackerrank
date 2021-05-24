#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    string name, email;
    regex e("[a-zA-z].+@gmail.com");
    vector <string> arr;
    cin>>n;
    while(n-->0){
      cin>>name>>email;
      if(regex_match(email, e)){
        arr.push_back(name);
      }
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
      cout<<arr[i]<<endl;
    }
    return 0;
}
