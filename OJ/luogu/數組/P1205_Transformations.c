// P1205 [USACO1.2] 方块转换 Transformations

#include<stdio.h>

int n;
char arr[15][15], new[15][15];
char tmp[15][15], ttmp[15][15];

int compare(void){

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            if(tmp[i][j]!=new[i][j]){

                return 0;
            }
        }
    }

    return 1;
}
int test1(void){

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            tmp[i][j] = arr[n-1-j][i];

    return (compare());
}
int test2(void){

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            tmp[i][j] = arr[n-1-i][n-1-j];

    return (compare());
}
int test3(void){

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            tmp[i][j] = arr[j][n-1-i];

    return (compare());
}
int test4(void){

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            tmp[i][j] = arr[i][n-1-j];

    return (compare());
}
int test5(void){

    // test4
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            ttmp[i][j] = arr[i][n-1-j];
    }

    // test1
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            tmp[i][j] = ttmp[n-1-j][i];
    }
    if(compare()==1)    return 1;

    else{

        // test2
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                tmp[i][j] = ttmp[n-1-i][n-1-j];
        }
        if(compare()==1)    return  1;

        else{

            // test3
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++)
                    tmp[i][j] = ttmp[j][n-1-i];
            }
            if(compare()==1)    return 1;

        }
    }
    
    return 0;
}
int test6(void){

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            tmp[i][j] = arr[i][j];

    return (compare());
}

int main(void){

    scanf("%d", &n);
    getchar();
    getchar();

    // 輸入
    for(int i=0; i<n; i++){

        for(int j=0; j<=n+1; j++){

            arr[i][j] = getchar();
        }
    }
    for(int i=0; i<n; i++){

        for(int j=0; j<=n+1; j++){

            new[i][j] = getchar();
        }
    }

    if(test1()==1)      printf("1");
    else if(test2()==1) printf("2");
    else if(test3()==1) printf("3");
    else if(test4()==1) printf("4");
    else if(test5()==1) printf("5");
    else if(test6()==1) printf("6");
    else                printf("7");

    return 0;
}