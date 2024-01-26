#include<stdio.h>

int main(){

    int n, num;
    int flag;   //標記掠過幾位

    while(scanf("%d", &n)!=EOF){

        int i = 1;

        int arr[51];

        for(int j=0; j<=50; j++){

            arr[j] = 1;
        }

        num = n;
        flag = 0;

        while(num>2){

            while(i<=n){

                if(arr[i]==1 && flag==1){   //仍存在 與上一個隔一: 可刪除

                    arr[i] = 0;
                    flag = 0;
                    num--;

                    printf("%d ", i);

                    i++;
                }
                else if(arr[i]==1 && flag==0){  //仍存在 但與上一個沒隔一: 不可刪除

                    i++;
                    flag = 1;
                }
                else{   //已不存在
                    
                    i++;
                }
            }

            while(i>n)  {
                
                i = 1;
                flag = 0;
            }
        }
    }

    return 0;
}