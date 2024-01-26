// P1217 [USACO1.5] 回文质数 Prime Palindromes
// 9989899

#include<stdio.h>
#include<stdbool.h>

bool chack1(int num){

    if((num>=1000 && num<=9999) || (num>=100000 && num<=999999))
        return false;
    
    return true;
}

// 判斷素數
bool isPrime(int x){

	if(x<2)     return false;
	if(x==2)    return true;

	for(int i=2; i*i<=x; i++){

		if(x%i==0)  return false;
	}
    
	return true;
}

// 判斷回文數
bool isPalNum(int num){

    int original = num;
    int reversed = 0;

    while(num>0){

        reversed = reversed*10 + num%10;
        num = num/10;
    }

    if(original==reversed)
        return true;
    else
        return false;
}

int main(){

    int a, b;
    scanf("%d%d", &a, &b);

    if(a%2==0)  a++;

    for(int i=a; i<=b; i=i+2){

        if(chack1(i)==0)    continue;
        if(isPalNum(i)==0)  continue;
        if(isPrime(i)==0)   continue;

        printf("%d\n", i);
    }

    return 0;
}