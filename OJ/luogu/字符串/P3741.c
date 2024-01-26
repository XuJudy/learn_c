// P3741 honoka的键盘

#include<stdio.h>
#include<math.h>

int main(){

    int len;
    char word[150] = {0};

    while(scanf("%d%s", &len, word)!=EOF){

        int sum = 0;
		
        // 找VK
        for(int i=0; i<len-1; i++){

            if(word[i]=='V' && word[i+1]=='K'){
            	
                sum++;
                word[i] = 'X';
                word[i+1] = 'X';
            }
        }

        // VV->VK || KK->VK
        for(int i=0; i<len-1; i++){

            if(word[i]=='V' && word[i+1]=='V'){
            	
                sum++;
                break;
            }
            else if(word[i]=='K' && word[i+1]=='K'){
            	
                sum++;
                break;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}