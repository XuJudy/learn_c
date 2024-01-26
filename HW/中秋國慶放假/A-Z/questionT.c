//问题 T: 22-循环-2-多项式相加
#include<stdio.h>

int main(){

    int m, n;   //多项式A的项数, 多项式B的项数
    int a, b;   //a:係數 b:指數
    int A[100] = {0};

    scanf("%d%d", &m, &n);

    for(int i=0; i<m; i++){ //輸入多項式A

        scanf("%d%d", &a, &b);

        A[b] = a;
    }

    for(int i=0; i<n; i++){ //加上多項式B

        scanf("%d%d", &a, &b);

        A[b] = A[b] + a;
    }

    if(m>n){    //另n較多項

        int tmp = m;
        m = n;
        n = tmp;
    }

    for(int i=n; i>=0; i--){    //由最高項開始輸出

        if(A[i]!=0)    printf("%d %d\n", A[i], i);
    }

    return 0;
}