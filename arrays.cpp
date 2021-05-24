#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    vector<int> arr;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < n; i++) {
      cin>>a;
      arr.push_back(a);
    }
    for (int j = n-1; j >= 0; j--) {
      cout<<arr[j]<<" ";
    }

    return 0;
}
