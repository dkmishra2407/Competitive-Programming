// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long x, y, k;
//         cin >> x >> y >> k;
//         long long moves = 0;
//         bool facing_x = true;
//         while (x > 0 || y > 0) {
//             long long jump = min(facing_x ? x : y, k);
//             if (facing_x) {
//                 x -= jump;
//             } else {
//                 y -= jump;
//             }
//             moves++;
//             facing_x = !facing_x;
//         }
//         cout << moves << endl;
//     }
//     return 0;
// }

