#include <bits/stdc++.h>
using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;

	  Difference(vector<int> arr){
      this->elements = arr;
    }

    void computeDifference(){
      long dif = 0, ans = 0;
      for (int i = 0; i < elements.size(); i++) {
        for (int j = i+1; j < elements.size()-i; j++) {
          dif = elements[i] - elements[j];
          if(dif < 0){
            dif *=-1;
          }
          if(dif > ans){
            ans =dif;
          }
          dif = 0;
        }
      }
      maximumDifference = ans;
    }

};

int main() {
    int N, e;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        cin >> e;
        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
