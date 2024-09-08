#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        // Your code here
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                a.pop_back();
                a.push_back(b[i]);
                sort(a.begin(),a.end());
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}