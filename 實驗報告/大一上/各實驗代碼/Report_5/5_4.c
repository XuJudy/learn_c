// 从键盘键入字符串，将此字符串从m个字符开始的n个字符复制成另一个字符串

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100

int main(){

    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    int m, n;
    char *p1, *p2;

    printf("Enter the original string: ");
    fgets(str1, MAX_LENGTH, stdin);
    
    printf("Enter the start position m: ");
    scanf("%d", &m);
    
    printf("Enter the number of characters n: ");
    scanf("%d", &n);
    
    printf("Enter the string to be copied: ");
    scanf("%s", str2);

    if(m<0 || m>=strlen(str1) || n<=0 || n>strlen(str1)-m){

        printf("Invalid input\n");
        return 0;
    }

    p1 = str1 + m;
    p2 = str2;

    while(n-- && *p2!='\0'){

        *p1++ = *p2++;
    }

    printf("The new string is: %s\n", str1);

    return 0;
}