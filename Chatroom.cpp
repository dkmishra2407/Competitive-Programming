#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int targetIndex = 0;
    
    for (char c : s) {
        if (c == target[targetIndex]) {
            targetIndex++;
        }
        if (targetIndex == target.length()) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
