// 读入用户输入的一条消息，检测是否是回文，分别用数组、指针来解决。
//指针
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX_LENGTH 100

int is_letter(char c) {

    return isalpha(c);
}

int is_palindrome(char *message) {

    char *p, *q;
    for (p=message, q=message+strlen(message)-1; p<q; p++, q--){

        while(!is_letter(*p) && p<q){

            p++;
        }
        while(!is_letter(*q) && p<q) {
            q--;
        }
        if(tolower(*p)!=tolower(*q)) {
            return 0;
        }
    }

    return 1;
}

int main(){

    char message[MAX_LENGTH];

    printf("Enter a message: ");
    fgets(message, MAX_LENGTH, stdin);

    message[strlen(message)-1] = '\0';

    if (is_palindrome(message)) {
        printf("Palindrome\n");
    }
    else {
        printf("Not a palindrome\n");
    }

    return 0;
}