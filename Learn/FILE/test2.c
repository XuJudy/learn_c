// 格式化讀寫

#include <stdio.h>

int main(){
    FILE *fp = fopen("example.txt", "w");
    char str[] = "Hello World";
    int num = 1234;
    fprintf(fp, "String: %s, Number: %d\n", str, num);
    fclose(fp);
    return 0;
}