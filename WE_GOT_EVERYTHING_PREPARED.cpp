#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string start = "abcdefghijklmnopqrstuvwxyz";

    while (n--) {
        string t = start.substr(0, k);
        cout << t;
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}