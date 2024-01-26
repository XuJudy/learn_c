
#include<stdio.h>

int main(){

    int n, m, number;  //有n層、要找m本書、編號為number
    int book[1000000]= {0}; //每一層書的數量

    while(scanf("%d", &n)!=EOF){

        for(int i=1; i<=n; i++){

            scanf("%d", &book[i]);
        }

        int book_floor[1000000] = {0};  //要找的書的層數

        scanf("%d", &m);

        for(int i=1; i<=m; i++){

            scanf("%d", &number);

            int j=1;

            while(number-book[j]>0){

                number = number - book[j];
                j++;
            }

            book_floor[i] = j;
        }

        for(int i=1; i<=m; i++){

            printf("%d\n", book_floor[i]);
        }
    }

    return 0;
}