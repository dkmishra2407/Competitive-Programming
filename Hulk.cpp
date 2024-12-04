#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout << "I hate it" << endl;
        return 0;
    }

    bool flag = 1;
    string str;
    
    for(int i = 1; i < n; i++){
        if(flag){
            str = "hate";
            flag = 0;
        } else {
            str = "love";
            flag = 1;
        }

        cout << "I " << str << " that ";
    }
    
    if(flag){
        str = "hate";
    } else {
        str = "love";
    }

    cout << "I " << str << " it" << endl;

    return 0;
}
