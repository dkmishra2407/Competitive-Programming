#include <iostream>
#include <vector>

using namespace std;

vector<int> countConsecutiveRepeats(string s, vector<pair<int, int>> queries) {
    vector<int> result;
    for (auto query : queries) {
        int count = 0;
        for (int i = query.first - 1; i < query.second - 1; i++) {
            if (s[i] == s[i + 1]) {
                count++;
            }
        }
        result.push_back(count);
    }
    return result;
}
 
int main() {
    string s;
    cin >> s;
    int m;
    cin >> m;
    vector<pair<int, int>> queries(m);
    for (int i = 0; i < m; i++) {
        cin >> queries[i].first >> queries[i].second;
    }
    vector<int> result = countConsecutiveRepeats(s, queries);
    for (auto r : result) {
        cout << r << endl;
    }
    return 0;
}