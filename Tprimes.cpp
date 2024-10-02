#include<bits/stdc++.h>
using namespace std;

bool check_prime( long long num) {
    if (num < 2) return false; 
    for ( long long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        long long n;
        cin >> n;

         long long p = sqrt(n); 
        if (p * p == n && check_prime(p)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
