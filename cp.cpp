// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<pair<int, int>> points(n);
//         for (int i = 0; i < n; i++) {
//             cin >> points[i].first >> points[i].second;
//         }

//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             const int x1 = points[i].first;
//             const int y1 = points[i].second;

//             for (int j = i + 1; j < n; j++) {
//                 const int x2 = points[j].first;
//                 const int y2 = points[j].second;

//                 for (int k = j + 1; k < n; k++) {
//                     const int x3 = points[k].first;
//                     const int y3 = points[k].second;

//                     const int a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//                     const int b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
//                     const int c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

//                     const int arr[3] = {a, b, c};
//                     sort(arr, arr + 3);

//                     if (pow(arr[2], 2) == (pow(arr[1], 2) + pow(arr[0], 2))) {
//                         count++;
//                     }
//                 }
//             }
//         }

//         cout << count << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int c = 0;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if(y == 1) {
            c++;
        }
    }
    cout << c * 2 << endl; // Corrected 'end' to 'endl'
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}


// // #include <bits/stdc++.h>
// // using namespace std;

// // int main(){
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int t;
// //     cin >> t;
// //     while(t--){
// //         int n;
// //         cin >> n;
// //         unordered_map<int, int> countX; // count of points with each x-coordinate
// //         unordered_map<int, int> countY[2]; // count of points with y=0 and y=1 for each x-coordinate

// //         vector<pair<int, int>> points(n);
// //         for(int i = 0; i < n; i++){
// //             cin >> points[i].first >> points[i].second;
// //             countX[points[i].first]++;
// //             countY[points[i].second][points[i].first]++;
// //         }

// //         int count = 0;
// //         for(int i = 0; i < n; i++){
// //             int x = points[i].first, y = points[i].second;
// //             // Calculate the number of right triangles using this point as one of the vertices
// //             int otherY = (y == 0) ? 1 : 0; // opposite y-coordinate
// //             count += (countX[x] - 1) * (countY[otherY][x]);
// //         }

// //         cout << count << endl;
// //     }

// //     return 0;
// // }

