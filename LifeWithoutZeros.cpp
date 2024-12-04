#include<bits/stdc++.h>
using namespace std;
int reverseDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) { 
        rev_num = rev_num * 10 + num % 10; 
        num = num / 10; 
    } 
    return rev_num; 
} 
int main(){
    long long a,b;
    cin>>a>>b;
    if(a==b){
        string str1 = to_string(a);
        string str2 = to_string(b);

        if(str1.find('0') == string::npos || str2.find('0') == string::npos){
            cout << "YES" << endl;
            return 0;
        }
    }
    long long sum1 = 0,sum2 = 0;
    sum1 =  a +b;
    long long c = 0,d = 0;
    while(a>0){
        if(a%10!=0){
            c = c *10 + a % 10 ;
        }
        a = a/ 10 ;
    }

    while(b>0){
        if(b%10!=0){
            d = d *10 + b % 10 ;
        }
        b = b/ 10 ;
    }

    while(sum1>0){
        if(sum1%10!=0){
            sum2 = sum2 *10 + sum1 % 10 ;
        }
        sum1 = sum1/ 10 ;
    }
    
    if(reverseDigits(sum2) == reverseDigits(c) + reverseDigits(d)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}