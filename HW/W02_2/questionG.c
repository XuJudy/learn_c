//问题 G: Muniar的胡思乱写【3】——某年某月的某一天
#include<stdio.h>

int main(){

    int year, month;

    while(scanf("%d/%d", &year, &month) != EOF){

        if(year<=0 || month>12 || month<1)  printf("-1\n");

        else{

            if((year%4==0 && year%100!=0) || year%400==0){  //閏年
                
                if(month==2)    printf("29\n"); 
                else if(month<=7){

                    if(month%2==0) printf("30\n");
                    else    printf("31\n");
                }
                else{

                    if(month%2==0) printf("31\n");
                    else    printf("30\n");
                }
            }

            else{   //平年

                if(month==2)  printf("28\n");
                else if(month<=7){

                    if(month%2==0) printf("30\n");
                    else    printf("31\n");
                }
                else{

                    if(month%2==0) printf("31\n");
                    else    printf("30\n");
                }
            }
        }
    }

    return 0;
}

/*
//问题 G: Muniar的胡思乱写【3】——某年某月的某一天
#include<stdio.h>

//閏年
int year(int x){

    int flag;

    if((x%4==0 && x%100!=0) || x%400==0)    //閏年    
        flag = 1;

    else    //平年
        flag = 0;   

    return flag;
}

//天數
int day(int flag, int month){   //此flag是指上面閏年的flag

    int day;

    switch(month){

        default:
            day = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            day = 30;
            break;
        case 2:
            if(flag == 1)   day = 29;
            else day = 28;
    }

    return day;
}

int main(){

    int y, m, d, flag;

    while(scanf("%d/%d", &y, &m) != EOF){

        if(y<1 || m<1 || m>12){

            d = -1;
        }
        else{

            flag = year(y);
            d = day(flag, m);
        }

        printf("%d\n", d);
    }

    return 0;
}
*/