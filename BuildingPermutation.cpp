    #include<bits/stdc++.h>
    using namespace std;

    int main() {
        int n;
        cin >> n;  // Read the size of the permutation

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];  // Read the sequence
        }

        sort(a.begin(), a.end());  // Sort the sequence

        long long moves = 0;
        for(int i = 0; i < n; i++) {
            moves += abs(a[i] - (i + 1));  // Calculate the difference with the expected permutation [1, 2, ..., n]
        }

        cout << moves << endl;  // Output the total number of moves
        return 0;
    }
