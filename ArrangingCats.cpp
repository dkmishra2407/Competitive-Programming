#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // number of test cases
    while (t--) {
        int n;
        cin >> n;  
        string str1, str2;
        cin >> str1 >> str2;
        
        int count1 = 0,count2 = 0;

        for(int i=0;i<n;i++){
            if(str1[i]=='1' && str2[i]=='0'){
                count1++;
            }
            if(str2[i]=='1' && str1[i]=='0'){
                count2++;
            }
        }

        cout << min(count1,count2) + abs(count1-count2) << endl;
    }
    return 0;
}
