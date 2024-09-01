#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> s;
        int i = 1;
        while (n > 0) {
            int ans = (n % 10) * i;
            n = n / 10;
            if (ans != 0) {
                s.insert(ans);
            }
            i *= 10; 
        }
        cout << s.size() << endl;
        for (auto it : s) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}


