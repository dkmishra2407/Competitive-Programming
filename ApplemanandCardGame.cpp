#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    map<char, int> m;
    for (char i : str) {
        m[i]++;
    }

    vector<int> counts;
    for (auto it = m.begin(); it != m.end(); it++) {
        counts.push_back(it->second);
    }
    sort(counts.rbegin(), counts.rend());

    long long sum = 0;
    for (int count : counts) {
        if (count > k) {
            sum += (long long)k * k;
            break;
        } else {
            sum += (long long)count * count;
            k -= count;
        }
    }

    cout << sum << endl;

    return 0;
}
