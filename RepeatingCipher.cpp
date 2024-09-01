#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    string nstr = "";
    int sum = 0;
    
    for (int i = 1; sum < n; ++i) {
        nstr += str[sum];
        sum += i;
    }
    
    cout << nstr << endl;
    return 0;
}
