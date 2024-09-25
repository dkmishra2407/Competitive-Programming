// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
//     vector<int> ans(t+);
//     int min_index = -1;
//     int max_index = -1;
//     int maxi = INT_MIN,mini=INT_MAX;
//     for(int i=1;i<=t;i++){
//         cin>>ans[i];
//         if(ans[i]>maxi){
//             maxi = ans[i];
//             max_index = i;
//         }
//         if(ans[i]<=mini){
//             mini = ans[i];
//             min_index = i;
//         }
//     }
//     if(max_index>min_index){
//         cout << max_index - 1 + t - min_index - 1<< endl;
//         return 0;
//     }
//     else{
//         cout << max_index - 1 + t - min_index << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans(t+1);
    int min_index = -1;
    int max_index = -1;
    int maxi = INT_MIN, mini = INT_MAX;

    // Change loop to start from 0 and go to t-1
    for(int i = 1; i <= t; i++){
        cin >> ans[i];  // Accessing ans[i] correctly
        if(ans[i] > maxi){
            maxi = ans[i];
            max_index = i;
        }
        if(ans[i] <= mini){
            mini = ans[i];
            min_index = i;
        }
    }

    if(max_index > min_index){
        cout << max_index + t - min_index - 2 << endl;  // Corrected indexing
    } else {
        cout << max_index + t - min_index -1<< endl;  // Corrected indexing
    }
    
    return 0;
}