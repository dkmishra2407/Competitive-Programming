#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n;
        vector<int> r(n);
        for(int i = 0; i < n; i++) {
            cin >> r[i];
        }

        cin >> m;
        vector<int> b(m);
        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }

        // Calculate the maximum prefix sum for the red sequence
        int max_red = 0, current_sum = 0;
        for(int i = 0; i < n; i++) {
            current_sum += r[i];
            max_red = max(max_red, current_sum);
        }

        // Reset current_sum for blue sequence
        int max_blue = 0;
        current_sum = 0;
        for(int i = 0; i < m; i++) {
            current_sum += b[i];
            max_blue = max(max_blue, current_sum);
        }

        // The result for this test case
        int max_ans = max_red + max_blue;
        cout << max_ans << endl;
    }

    return 0;
}
