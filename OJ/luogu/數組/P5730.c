// P5730 【深基5.例10】顯示屏

#include<stdio.h>
#include<string.h>

int main(){

	int n;
    scanf("%d", &n);

    char tmpnum[250];
	scanf("%s", tmpnum);

	int flag = 0;				// 標記所在位置
	int show[10][400] = {0};
	int len = strlen(tmpnum);
    
    for(int j=0; j<len; j++){

        int num;
        num = tmpnum[j] - '0';	// 將字符轉為數字

        if(num==0){

			for(int i=0; i<5; i++){
			
				show[i][flag] = 1;
				show[i][flag+2] = 1;
			}

         show[0][flag+1] = 1;
         show[4][flag+1] = 1;
      	}
        else if(num==1){
      	
      	for(int i=0; i<5; i++){
      		
      		show[i][flag+2] = 1;
			}
		}
		else if(num==2){
			
			for(int i=0; i<3; i++){
				
				show[0][flag+i] = 1;
				show[2][flag+i] = 1;
				show[4][flag+i] = 1;
			}
			
			show[1][flag+2] = 1;
			show[3][flag] = 1;
		}
		else if(num==3){
			
			for(int i=0; i<3; i++){
				
				show[0][flag+i] = 1;
				show[2][flag+i] = 1;
				show[4][flag+i] = 1;
			}
			
			show[1][flag+2] = 1;
			show[3][flag+2] = 1;
		}
		else if(num==4){
			
			for(int i=0; i<5; i++){
				
				show[i][flag+2] = 1;
			}
			for(int i=0; i<3; i++){
				
				show[2][flag+i] = 1;
				show[i][flag] = 1;
			}
		}
		else if(num==5){
			
			for(int i=0; i<3; i++){
				
				show[0][flag+i] = 1;
				show[2][flag+i] = 1;
				show[4][flag+i] = 1;
			}
			
			show[1][flag] = 1;
			show[3][flag+2] = 1;
		}
		else if(num==6){
			
			for(int i=0; i<3; i++){
				
				show[0][flag+i] = 1;
				show[2][flag+i] = 1;
				show[4][flag+i] = 1;
			}
			show[1][flag] = 1;
			show[3][flag] = 1;
			show[3][flag+2] = 1;
		}
		else if(num==7){
			
			for(int i=0; i<5; i++){
				
				show[i][flag+2] = 1;
			}
			for(int i=0; i<3; i++){
				
				show[0][flag+i] = 1;
			}
		}
		else if(num==8){
			
			for(int i=0; i<3; i++){
				
				show[0][flag+i] = 1;
				show[2][flag+i] = 1;
				show[4][flag+i] = 1;
			}
			
			show[1][flag] = 1;
			show[1][flag+2] = 1;
			show[3][flag] = 1;
			show[3][flag+2] = 1;
		}
		else if(num==9){
			
			for(int i=0; i<3; i++){
				
				show[0][flag+i] = 1;
				show[2][flag+i] = 1;
				show[4][flag+i] = 1;
			}
			
			show[1][flag] = 1;
			show[1][flag+2] = 1;
			show[3][flag+2] = 1;
		}
				
		flag = flag + 4;		// 每填入一組數字，則標記往後4(包括要空出一行)
    }

    // 輸出
    for(int i=0; i<5; i++){
    
        for(int j=0; j<flag-1; j++){
        
            if(show[i][j]==0)
                printf(".");
            else
                printf("X");
        }
    
        printf("\n");
    }
	 
   return 0;
}