// 读入用户输入的一条消息，检测是否是回文，分别用数组、指针来解决。
//数组
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LENGTH 100

int main() {

    char message[MAX_LENGTH];

    printf("Enter a message: ");
    
    for(int i=0; i<MAX_LENGTH; i++){

        message[i] = getchar();
        
        if(message[i] == '\n')
            break;
    }

    for (int i=0, j=strlen(message)-1; i<j; i++, j--){

        while(!isalpha(message[i])){

            i++;
        }
        while(!isalpha(message[j])){

            j--;
        }

        if(tolower(message[i])!=tolower(message[j])){

            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}