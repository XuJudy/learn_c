#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        char start = 'a';

        // 上部
        int i;
        for(i=1; i<n; i++){

            // 空格
            int j;
            for(j=n; j>i; j--){

                printf(" ");
            }
            
            // 字母 
            for(j=0; j<i; j++){
            	
            	printf("%c", start+j);
				}
				
            printf("\n");
        }

        // 中間
        for(i=0; i<n; i++){
        		
        		printf("%c", start+i);
		  }
		  for(i=n-2; i>=0; i--){
		  	
		  		printf("%c", start+i);
		  }
		  printf("\n");

        // 下部
        for(i=1; i<n; i++){
        	
        		// 空格
				int j;
				for(j=1; j<n; j++){
					
					printf(" ");
				} 
				
				// 字母
				for(j=n-i-1; j>=0; j--){
					
					printf("%c", start+j);
				}
				
				printf("\n");
		  }
		  
		  printf("\n");
    }

    return 0;
}