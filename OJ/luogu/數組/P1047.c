// P1047 [NOIP2005 普及组] 校门外的树

#include<stdio.h>

int main(){

    int l, m;
    int cnt = 0;
    int tree[20000] = {0};

    scanf("%d%d", &l, &m);

    for(int i=0; i<m; i++){

        int u, v;

        scanf("%d%d", &u, &v);

        for(int j=u; j<=v; j++){

            tree[j] = 1;
        }
    }

    for(int i=0; i<=l; i++){

        if(tree[i]==0)  cnt++;
    }

    printf("%d", cnt);

    return 0;
}