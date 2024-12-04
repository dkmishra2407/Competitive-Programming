#include<bits/stdc++.h>
using namespace std;
string sum(string t){
    int sum = 0;
    for(int i=0;i<t.length();i++){
        sum += (t[i] - '0');
    }

    string str = to_string(sum);
    return str;
}
int main(){
    string t;
    cin >> t;
    long long count = 0;
    while(t.length()>1){
        count++;
        t= sum(t);
    }
    cout << count << endl;
    return 0;
}