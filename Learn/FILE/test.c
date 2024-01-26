#include <stdio.h>

int main() {

    FILE *fp;

    // 打开输入文件
    fp = fopen("test.txt", "a+");
    if (fp == NULL) {    // 打開失敗
        printf("Failed to open input.txt\n");
    }

    char ch;
    printf("Input a string:\n");

    //每次从键盘读取一个字符并写入文件
    while ( (ch=getchar()) != '\n' ){
        fputc(ch,fp);
    }

    // 換行
    ch = '\n';
    fputc(ch, fp);

    // 打开输入文件
    fp = fopen("test.txt", "r");
    if (fp == NULL) {    // 打開失敗
        printf("Failed to open input.txt\n");
    }

/*
    // 关闭文件指针
    fclose(fp_in);
    fclose(fp_out);
*/

    return 0;
}