#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    long long sum = 0;

    for (int i = 0; i < t; ++i) {
        int a;
        cin >> a;  
        sum += a;  
    }

    double avg = (double)sum / t;
    cout << fixed << setprecision(12) << avg << endl;

    return 0;
}
