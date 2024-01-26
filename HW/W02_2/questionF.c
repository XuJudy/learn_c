//问题 F: Muniar的胡思乱写【2】——比大小
#include <stdio.h>
#include<math.h>

int main(){

    double A, B;

    while(scanf("%lf%lf", &A, &B) != EOF){

        A = fabs(A);    //fabs():對雙精度浮點數求絕對值
        B = fabs(B);

        if(A>B) printf("BIGGER\n");
        else if(A<B) printf("SMALLER\n");
        else printf("EQUAL\n");
    }
    
    return 0;
}