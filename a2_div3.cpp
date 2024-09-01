#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool check_recommendations(int n, const vector<int>& seats) {
    unordered_set<int> occupied;
    for (int i = 0; i < n; ++i) {
        int seat = seats[i];
        if (occupied.empty()) {
            occupied.insert(seat);
            continue;
        }
        if (occupied.find(seat - 1) == occupied.end() && occupied.find(seat + 1) == occupied.end()) {
            return false;
        }
        occupied.insert(seat);
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> seats(n);
        for (int i = 0; i < n; ++i) {
            cin >> seats[i];
        }
        if (check_recommendations(n, seats)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}