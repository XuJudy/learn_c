#include<math.h>
#include<stdio.h>
#include<string.h>

#define N 3000

int main(){

    char a[N], b[N];
    int A[N] = {0};
    int B[N] = {0};

    while(scanf("%s%s", a, b)!=EOF){

        int lenA = strlen(a);
        int lenB = strlen(b);
        int sum[2*N] = {0};

        for(int i=1; i<=lenA; i++){

            A[i] = a[lenA-i] - '0';
        }
        for(int i=1; i<=lenB; i++){

            B[i] = b[lenB-i] - '0';
        }

    /*     
           <3> <2> <1>
            a   b   c       -> B[j]
        *       d   e       -> A[i]
   --------------------
          e*a e*b e*c       -> sum[]
    + d*a d*b d*c           -> sum[]
   --------------------
    */
        
        int lenSum = lenA + lenB;

        for(int i=1; i<=lenA; i++){

            for(int j=1; j<=lenB; j++){

                sum[i+j-1] = sum[i+j-1] + A[i]*B[j];
                sum[i+j] = sum[i+j] + sum[i+j-1]/10;    // 進位
                sum[i+j-1] = sum[i+j-1]%10;
            }
        }

        while(sum[lenSum]==0 && lenSum>0){

            lenSum--;
        }

        for(int i=lenSum; i>=1; i--){
            
            printf("%d", sum[i]);
        }

        printf("\n");
    }

    return 0;
}