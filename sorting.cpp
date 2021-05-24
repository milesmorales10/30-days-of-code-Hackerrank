#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr;
  int numberOfSwaps = 0;
  int n, a;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin>>a;
    arr.push_back(a);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {

        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            numberOfSwaps++;
        }
    }

    if (numberOfSwaps == 0) {
        break;
    }
}
cout<<"Array is sorted in "<<numberOfSwaps<<" swaps."<<endl;
cout<<"First Element: "<<arr[0]<<endl;
cout<<"Last Element: "<<arr[n-1]<<endl;

   return 0;
}
