#include <bits/stdc++.h>
using namespace std;

bool is_odd(int n){
    bool es;
    if(n<=1){
      return false;
    }
    if(n==2){
      return true;
    }
    if(n%2 == 0){
      return false;
    }
    int i = 3;
    while(i*i <= n){
      if(n%i == 0){
        return false;
      }else{
        i +=2;
        continue;
      }
      }
      return true;
      }

int main(){
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(n >= 2 && n<=5 && is_odd(n) == false){
      cout<<"Not Weird"<<endl;
    }else if(n >=6  && n<=20 && is_odd(n) == false){
      cout<<"Weird"<<endl;
    }else if(is_odd(n)== false && n>20){
      cout<<"Not Weird"<<endl;
    }else{
      if(is_odd(n)){
        cout<<"Weird"<<endl;
      }else{
        cout<<"Not Weird"<<endl;
      }
    }

    return 0;
}
