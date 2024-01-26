#include <stdio.h>
#include <stdlib.h>

// ?n?制的字符串????十?制?
int toDecimal(char* number, int base) {
    int decimal = 0;
    int multiplier = 1;
    int length = 0;

    // ?算字符串?度
    while (number[length] != '\0') {
        length++;
    }

    // ?字符串末尾?始?算十?制?值
    for (int i = length - 1; i >= 0; i--) {
        int digit;

        // ?字符?????的?值
        if (number[i] >= '0' && number[i] <= '9') {
            digit = number[i] - '0';
        } else {
            printf("?入的?不合法\n");
            exit(0);
        }

        // ?值不符合?制要求
        if (digit >= base) {
            printf("?入的?不符合?制要求\n");
            exit(0);
        }

        decimal += digit * multiplier;
        multiplier *= base;
    }

    return decimal;
}

// ?十?制????p?制的字符串?并打印?出
void toBaseP(int number, int base) {
    char pNumber[20];
    int index = 0;

    // ?十?制????p?制
    while (number > 0) {
        int remainder = number % base;
        
        // ?余??????的字符
        if (remainder < 10) {
            pNumber[index++] = remainder + '0';
        } else {
            pNumber[index++] = remainder - 10 + 'A';
        }

        number /= base;
    }

    // ?出??后的?果
    printf("%d<10>=", number);
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", pNumber[i]);
    }
    printf("<%d>\n", base);
}

int main() {
    char input[20];
    while (scanf("%s", input) != EOF) {
        int m, n, p;
        sscanf(input, "%d<%d>%d", &m, &n, &p);

        if (n < 2 || n > 10 || p < 2 || p > 10) {
            printf("?制?只能在2到10之?\n");
            continue;
        }

        int decimal = toDecimal(input, n);
        toBaseP(decimal, p);
    }
    return 0;
}