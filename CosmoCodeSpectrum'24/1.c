#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int m = 1;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] > m){
            m = a[i];
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += (a[i] == m);
    }
    printf("%d\n", ans);
    return 0;
}