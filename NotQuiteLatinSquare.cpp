#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k = 3;
        while(k--){
            string str;
            cin >> str;

            if (str.find('?') != string::npos) {
                bool flag1 = (str.find('A') == string::npos);
                bool flag2 = (str.find('B') == string::npos);
                bool flag3 = (str.find('C') == string::npos);   

                if (flag1) {
                    cout << "A" << endl;
                }
                if (flag2) {
                    cout << "B" << endl;
                }
                if (flag3) {
                    cout << "C" << endl;
                }
            }
        }
    }
    return 0;
}
