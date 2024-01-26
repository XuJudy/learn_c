#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF){

        int Ax, Bx;
        int count = 0;
        int id[1005] = {0};

        for(int i=0; i<n; i++){

            scanf("&d->%d", &Ax, &Bx);

            if(i==0){

                id[i] = Ax;
                id[i+1] = Bx;
        
                count = 2;
            }
            else{

                int posA = 0;
                int posB = 0;

                for(int j=0; j<count; j++){

                    if(id[j]==Ax){  //A已經存在

                        posA = j;
                    }

                    if(id[j]==Bx){  //B已經存在

                        posB = j;
                    }
                }

                if(posA!=0 && posB==0){ //A存在、B還不存在

                    for(int k=count-1; k>posA; k--){  //A後面先全部往後移

                        id[k+1] = id[k];
                    }

                    id[posA+1] = Bx;
                    count++;
                }

                if(posA==0 && posB!=0){ //A還不存在、B存在

                    for(int k=count-1; k>=posB; k--){  //B後面先全部往後移

                        id[k+1] = id[k];
                    }

                    id[posB] = Ax;
                    count++;
                }               
            }


            for(int j=0; j<count; j++){
            
                if(j==0)
                    printf("%d", id[0]);
                else
                    printf("->%d", id[j]);
            }

            printf("\n");
        }
    }

    return 0;
}