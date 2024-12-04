#include<bits/stdc++.h>
using namespace std;

int main() {
    string str, nstr;
    cin >> str;
    vector<string> ans;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'W' && i + 2 < str.length() && str[i + 1] == 'U' && str[i + 2] == 'B') {
            ans.push_back(nstr);
            nstr = "";
            i += 2; // Skip over "WUB"
        } else {
            nstr += str[i];
        }
    }

    if (!nstr.empty()) {
        ans.push_back(nstr);
    }

    for (const auto& it : ans) {
        if (!it.empty()) {
            cout << it << " ";
        }
    }
    cout << endl;
    return 0;
}