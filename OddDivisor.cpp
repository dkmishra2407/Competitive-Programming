#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n <= 1) {
            cout << "NO" << endl;
            continue;
        }

        if (n % 10 % 2 == 1) {
            cout << "YES" << endl;
            continue;
        }

        bool flag = false;
        
        while(n>2){
            n = n/2;
            if(n%2==1){
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "NO" << endl;
        }
    }
    return 0;
}