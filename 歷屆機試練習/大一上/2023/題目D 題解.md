### 2023年大一上期末考 | 題目D 消消樂

##### 解題思路
1. 建立兩個二維數組`data[]`、`out[]`。
2. 將圖形存於data，再從頭依序查找。
3. 將可連線的地方於out內進行標記。
4. 向右查找是否有相連
   ```
   if(data[i][j]==tmp && data[i][j+1]==tmp && data[i][j+2]==tmp && tmp!=0){

        int add = 3;

        while(data[i][j+add]==tmp && j+add<m){

            out[i][j+add] = 0;
            add++;
        }
    }
   ```
5. 向下查找是否有相連
   ```
   if(data[i][j]==tmp && data[i+1][j]==tmp && data[i+2][j]==tmp && tmp!=0){

        int add = 3;

        while(data[i+add][j]==tmp && i+add<n){
  
            out[i+add][j] = 0;
            add++;
        }
    }
   ```
6. 聲明add，查找是否可連以上
7. 輸出時，若out有被標記，則輸出0

##### 完整代碼
```
#include<stdio.h>

int main(){

    int n, m;

    while(scanf("%d%d", &n, &m)!=EOF){
 
        int data[60][60] = {0};
        int out[60][60];

        // 輸入
        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                scanf("%d", &data[i][j]);

                out[i][j] = 1;
            }
        }

        for(int tmp = 1; tmp<=9; tmp++){

            for(int i=0; i<n; i++){

                for(int j=0; j<m; j++){

                    // 右邊
                    if(data[i][j]==tmp && data[i][j+1]==tmp && data[i][j+2]==tmp && tmp!=0){

                        out[i][j] = 0;
                        out[i][j+1] = 0;
                        out[i][j+2] = 0;

                        int add = 3;

                        while(data[i][j+add]==tmp && j+add<m){

                            out[i][j+add] = 0;
                            add++;
                        }
                    }

                    // 往下
                    if(data[i][j]==tmp && data[i+1][j]==tmp && data[i+2][j]==tmp && tmp!=0){

                        out[i][j] = 0;
                        out[i+1][j] = 0;
                        out[i+2][j] = 0;

                        int add = 3;

                        while(data[i+add][j]==tmp && i+add<n){

                            out[i+add][j] = 0;
                            add++;
                        }
                    }
                }
            }
        }

        // 輸出
        for(int i=0; i<n; i++){

            for(int j=0; j<m; j++){

                if(out[i][j]==1)
                    printf("%d ", data[i][j]);
                else
                    printf("%d ", out[i][j]);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
```
