#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        string pstr, nstr;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                pstr += str[i]; // Characters at even indices
            } else {
                nstr += str[i]; // Characters at odd indices
            }
        }

        map<char, int> m, m1;

        // Count frequency of characters in pstr
        for (char c : pstr) {
            m[c]++;
        }

        // Count frequency of characters in nstr
        for (char c : nstr) {
            m1[c]++;
        }

        int ans = 0;

        // Find the maximum and minimum occurrence of any character in pstr
        int max_occ_pstr = 0;
        int min_occ_pstr = INT_MAX;
        char c = '\0';
        for (auto it : m) {
            max_occ_pstr = max(max_occ_pstr, it.second);
            if (it.second < min_occ_pstr) {
                min_occ_pstr = it.second;
                c = it.first;
            }
        }

        int max_occ_nstr = 0;
        for (auto it : m1) {
            max_occ_nstr = max(max_occ_nstr, it.second);
        }

        // Calculate the number of deletions required to balance the string
        if (n % 2 == 0) {
            ans += (pstr.length() - max_occ_pstr);
            ans += (nstr.length() - max_occ_nstr);
        } else {
            // Erase only the first occurrence of character 'c' from pstr
            auto pos = pstr.find(c);
            if (pos != string::npos) {
                pstr.erase(pos, 1); // Remove the first occurrence of 'c'
            }
            // Recompute frequency after removal
            m.clear();
            for (char ch : pstr) {
                m[ch]++;
            }
            max_occ_pstr = 0;
            for (auto it : m) {
                max_occ_pstr = max(max_occ_pstr, it.second);
            }
            ans += (pstr.length() - max_occ_pstr);
            ans += (nstr.length() - max_occ_nstr);
        }

        cout << ans << endl;
    }
    return 0;
}
