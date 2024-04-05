#include <bits/stdc++.h>
using namespace std;
string solve(string ans, int &k, int n){
    if(k == 0 || k == 1){
        return ans;
    }
    else{
        for(int i = 0; i < n / 2; i++){
        if(k == 0){
            break;
        }
        if(ans[i] == ans[n - i - 1]){
            if(ans[i] != '9'){
                if(k >= 2){
                    ans[i] = '9';
                    ans[n - i - 1] = '9';
                    k -= 2;
                }
            }
        }
        else{
            if(ans[i] == '9' && ans[n - i - 1] != '9'){
                ans[n - i - 1] = '9';
                k--;
            }
            else if(ans[i] != 9 && ans[n - i - 1] == '9'){
                ans[i] = '9';
                k--;
            }
            else{
                if(k >= 2){
                    ans[i] = '9';
                    ans[n - i - 1] = '9';
                    k -= 2;
                }
                else{
                    int a = ans[i] - '0';
                    int b = ans[n - i - 1] - '0';
                    if(a > b){
                        ans[n - i - 1] = ans[i]; 
                    }
                    else{
                        ans[i] = ans[n - i - 1];
                    }
                    k--;
                }
            }
        }
    }
    return solve(ans, k, n);
    }
}

int main(){
    string s;
    int n, k;
    cin >> n >> k >> s;
    string ans = s;
    ans = solve(ans, k, n);
    if(k == 1){
        int i = 0;
        while(i != n / 2 && ans[i] == ans[n - i - 1]){
            i++;
        }
        if(i != n / 2){
            while(i < n / 2){
                if(ans[i] == '9' && ans[n - i - 1] != '9'){
                    ans[n - i - 1] = '9';
                    k--;
                }
                else if(ans[i] != 9 && ans[n - i - 1] == '9'){
                    ans[i] = '9';
                    k--;
                }   
                else{
                    int a = ans[i] - '0';
                    int b = ans[n - i - 1] - '0';
                    if(a > b){
                        ans[n - i - 1] = ans[i]; 
                    }
                    else{
                        ans[i] = ans[n - i - 1];
                    }
                    k--;
                }
            }
        }
        else
            ans[i] = '9';
    }
    for(int i = 0; i < n / 2; i++){
        if(s[i] != s[n - i - 1]){
            cout << -1 << "\n";
        }
    }
    cout << ans << "\n";
    return 0;
}