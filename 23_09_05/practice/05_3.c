//05-3. 求a的连续和
#include<stdio.h>

int main(){

    int a, n, sum, total;

    scanf("%d %d", &a, &n);
    
    sum = a;
    total = a;

    for(int i=1; i<n; i++){

        sum = sum*10+a;
        total = sum + total;
    }
    
    printf("%d\n", total);

    return 0;
}