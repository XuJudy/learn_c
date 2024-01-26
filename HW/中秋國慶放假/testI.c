#include<stdio.h>
#include<string.h>

int main()
{
    int m=0;
    while (scanf("%d",&m)!=EOF){

		getchar();//scanf与gets之间吃掉回车

        double x=0, y=0;
		int flag1=0;

        for (int  i=0; i<m; i++){

            //getchar();
            char str[10000]={0};
            
            gets(str);
            
            if (strcmp(str,"TURN")==0){

                flag1++;//puts(str);
                //printf("%d\n",flag1);
            }
            else{

                double n=0;

                sscanf(str,"%*[A-Z]%*[ ]%lf",&n);
                //printf("%lf\n",n);
                //printf("%d\n",flag1);

                if (flag1%4==0){

                    y+=n;
                }
                else if (flag1%4==1){

                    x+=n;
                }
                else if (flag1%4==2){

                    y-=n;
                }
                else if (flag1%4==3){

                    x-=n;
                }
            }
        }

        printf("%.3f %.3f\n",x,y);
    }
    
    return 0;
}