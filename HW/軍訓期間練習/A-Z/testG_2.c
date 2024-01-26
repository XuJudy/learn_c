#include<stdio.h>
#include<math.h>

int main() {  
    int n;  
    while (scanf("%d", &n) != EOF) {  
        int sqrt_n = sqrt(n);  
        for (int i = sqrt_n; i > 1; i--) {  
            if (n % i == 0) {  
                printf("%d\n", n / i);  
                break;  
            }  
        }  
    }  
    return 0;  
}