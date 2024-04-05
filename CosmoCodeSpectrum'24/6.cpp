#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    int k = 0;
    int t;
    for(int i = 1; i <= n; i++){
        cin >> t;
        if(i == 1){
            a[++k] = t;
        }
        else{
            if(a[k] == t){
                continue;
            }
            else{
                a[++k] = t;
            }
        }
    }
    reverse(a.begin() + 1, a.end());
    int m;
    cin >> m;
    vector<int> b(m + 1);
    for(int i = 1; i <= m; i++){
        cin >> b[i];
    }
    for(int i = 1; i <= m; i++){
        int p = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << (int)a.size() - p + 1 << " \n";
    }
    return 0;
}