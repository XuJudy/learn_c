// 凱薩密碼

#include<stdio.h>

int main(){

    char word[100000] = {0};
    int shift = 0;  // 移動距離
    int len = 0;

    printf("Enter message to be encrypted: ");  // 輸入明文
    while((word[len]=getchar())!='\n')
        len++;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");
    for(int i=0; i<len; i++){

        word[i] = word[i] + shift;

        if(word[i]>='A' && word[i]<='Z'){

            if(word[i]>'Z')
                word[i] = word[i] - 26;
        }
        else if(word[i]>='a' && word[i]<='z'){

            if(word[i]>'z')
                word[i] = word[i] - 26;
        }

        printf("%c", word[i]);
    }

    printf("\n");

    return 0;
}