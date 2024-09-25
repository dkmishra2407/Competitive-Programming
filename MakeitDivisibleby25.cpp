#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        string str = to_string(n);

        int a = str.find("25");
        int b = str.find("75");
        int c = str.find("50");
        int d = str.find("00");
        int m = str.length();

        if (max({a, b, c, d}) != -1) {
            cout << m - max({a, b, c, d}) - 2 << endl;
            continue;
        } else {
            if (str[m - 1] == '5') {
                cout << m - min({str.rfind('2'), str.rfind('7')}) - 2 << endl; // Use rfind for last occurrence
            } else {
                cout << m - min({str.rfind('0'), str.rfind('5')}) - 2 << endl; // Use rfind for last occurrence
            }
        }

        
    }
    return 0;
}