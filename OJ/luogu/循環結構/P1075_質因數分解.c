// P1075 [NOIP2012 普及组] 质因数分解

#include<stdio.h>
#include<stdbool.h>

// 判斷素數
int isPrime(long long x){

	if(x<2)     return 0;
	if(x==2)    return 1;

	for(long long i=2; i*i<=x; i++){

		if(x%i==0)  return 0;
	}
    
	return 1;
}

int main(){

    long long n;
    scanf("%lld", &n);

    int flag = 1;

    for(long long i=2; i<n; i++){

        if(isPrime(i)==1 && n%i==0 && isPrime(n/i)==1){

            printf("%lld", n/i);
            flag = 0;
            break;
        }
    }

    if(flag==1) printf("%lld", n);

    return 0;
}