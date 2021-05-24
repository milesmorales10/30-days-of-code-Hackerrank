#include <bits/stdc++.h>
using namespace std;

// Int ("%d"): 32 Bit integer
// Long ("%ld"): 64 bit integer
// Char ("%c"): Character type
// Float ("%f"): 32 bit real value
// Double ("%lf"): 64 bit real value


int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.

     int a;
     double b;
     string p;
    // Read and save an integer, double, and String to your variables.
     cin>>a>>b;
     cin.ignore();
     getline(cin, p);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout<<a+i<<endl;

    // Print the sum of the double variables on a new line.

    printf("%.1f", d+b);
    cout<<"\n";

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    string init(s);
    string add(p);

    s.append(add);

    cout<<s<<endl;

    return 0;
}
