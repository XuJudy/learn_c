#include<stdio.h>

int main(){

   int n;

   while(scanf("%d", &n)!=EOF){

      // ��a
      int i;
      for(i=0; i<=n; i++){
				
			int j;
      	for(j=0; j<n-i; j++){

            printf(" ");
         }

			for(j=0; j<2*i+1; j++){
				
         	printf("*");
			}
			
			printf("\n");
      }
      
      // ��K
		for(i=0; i<n; i++){
			
			int j;
			for(j=0; j<n; j++){
				
				printf(" ");
			}
			
			printf("*\n");
		} 
   }

   return 0;
}
