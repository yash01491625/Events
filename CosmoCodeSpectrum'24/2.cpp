#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    string ans = "hackerrank";
    int m = 10;
    while(q--){
        string s;
        cin >> s;
        int n = s.length();
        int k = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == ans[k]){
                k++;
            }
        }
        cout << (k == m ? "YES\n" : "NO\n");
    }
    return 0;
}