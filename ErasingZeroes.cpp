#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        // Your code here
        string str;
        cin>>str;

        int n = str.length();
        int start;
        int c;
        int mini = 0;
        for(int i=0;i<n;i++){
            if(str[i]=='1' && str[i+1]=='0'){
                 c = 1;
                while (str[i+1] != 1)
                {
                    /* code */
                    c++;
                }
                if(c<mini){
                mini =c;
            }

            }
            i+= c;
            
        }
        cout<<mini<<endl;
    }
    return 0;
}