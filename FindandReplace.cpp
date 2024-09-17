#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool flag = true;
        unordered_map<char, int> m; // Stores character and its last index

        for (int i = 0; i < n; i++) { // Loop starts from 0 because strings are 0-indexed
            if (m.find(str[i]) != m.end()) {
                // Check if the parity (even/odd) of the current index matches the previous index
                if (m[str[i]] % 2 != i % 2) {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            } else {
                // Store the index of the character
                m[str[i]] = i;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
