#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool flag = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                cout << "#";
            } else {
                if (flag && j == m - 1) {
                    cout << "#";
                } else if (!flag && j == 0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        if (i % 2 != 0) {
            flag = !flag;  
        }
        cout << endl;
    }

    return 0;
}
