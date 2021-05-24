#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
string name;
long num;
cin >> n;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
map <string, long> pBook;
for (int i = 0; i < n; i++) {
    cin >> name >> num;
    pBook[name] = num;
}
while(cin >> name) {
    if (pBook.find(name) != pBook.end()) {
        cout << name << "=" << pBook.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
}

  return 0;
}
