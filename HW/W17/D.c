#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b) {
    char* s1 = *(char**)a;
    char* s2 = *(char**)b;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) {
        return len1 - len2;
    } else {
        return strcmp(s1, s2);
    }
}

int main() {
    char buf[1005];
    int i;
    while (fgets(buf, 1005, stdin) != NULL) {
        int n = atoi(buf);
        char** nums = (char**)malloc(n * sizeof(char*));
        for (i = 0; i < n; i++) {
            fgets(buf, 1005, stdin);
            int len = strlen(buf);
            nums[i] = (char*)malloc(len * sizeof(char));
            strcpy(nums[i], buf);
        }
        qsort(nums, n, sizeof(char*), cmp);
        for (i = 0; i < n; i++) {
            printf("%s", nums[i]);
            free(nums[i]);
        }
        free(nums);
    }
    return 0;
}