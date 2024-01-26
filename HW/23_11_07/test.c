#include<stdio.h>

int main(){
    
	int n, m;
	scanf("%d%d", &n, &m);

	char z[10] = {0};
	scanf("%s", z);

	int a[30] = {0};
	int b[30] = {0};
	
	int i;
	
	for (i=0; i<n; i++){

		a[z[i]-'a']++;
		b[i] = a[z[i] - 'a'];

        printf("b[%d]=%d\n", i, b[i]);
	}

	for (i=0; i<m; i++){

		int k;
		scanf("%d", &k);
		printf("%d\n", b[k-1]);
	}
	return 0;
}