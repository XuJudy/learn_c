#include<stdio.h>
#include<string.h>

int main(){

   char num[2000] = {0};

	while(scanf("%s", num)!=EOF){
	
		int sum7 = 0;
		int sumNum = 0;
		int len = strlen(num);
		
		int i;
		for(i=0; i<len; i++){
			
			if(num[i]=='7')
				sum7++;
			
			sumNum = sumNum + (num[i]-'0');
		}
		
		if(sum7>len/2 || sumNum%7==0)
			printf("Yes\n");
		else
			printf("No\n");
	}

   return 0;
}