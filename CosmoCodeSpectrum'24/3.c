#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int m = n;
    for(int i = 1; i <= n; i++){
        int a = n;
        for(int j = 1; j <= i; j++){
            printf("%d ", a);
            a--;
        }
        a = m--;
        for(int j = 1; j < 2 * n - 2 * i + 1; j++){
            printf("%d ", a);
        }
        for(int j = 1; j <= i - 1; j++){
            printf("%d ", ++a);
        }
        printf("\n");
    }
    m = n;
    for(int i = n - 1; i >= 1; i--){
        int a = n;
        for(int j = 1; j <= i; j++){
            printf("%d ", a);
            a--;
        }
        a++;
        for(int j = 1; j <= 2 * (n - i) - 1; j++){
            printf("%d ", a);
        }
        for(int j = 1; j <= i; j++){
            printf("%d ", a++);
        }
        printf("\n");
    }
    return 0;
}