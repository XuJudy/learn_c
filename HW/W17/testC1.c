#include <stdio.h>

int toDecimal(long long y, int x){
	
   int decimalNumber=0, i=0, remainder;
    
   while (y!=0){
    	
      remainder = y%10;
      y /= 10;
      decimalNumber += remainder*pow(x,i);
      ++i;
   }
    
   return decimalNumber;
}

int main(){
	
   long long m;
	int n, p;
  
  	while(scanf("%lld<%d>%d", &m, &n, &p)!=EOF){

	   int num[20];
		int len = 0;
		long long temp = toDecimal(m, n);
	   
	   while (temp > 0) {
	      num[len++] = temp % p;
	      temp /= p;
	   }
	   printf("%d<%d>=", m, n);
	   
	   int i;
	   for (i = len-1; i >= 0; i--) {
	      printf("%d", num[i]);
	   }
	   printf("<%d>\n", p);
	}
	 
   return 0;
}
