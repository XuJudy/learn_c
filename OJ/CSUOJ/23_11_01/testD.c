#include<stdio.h>
#define N 1000000

int main(){
    
	int n, m;
	scanf("%d%d", &n, &m);

	char z[N] = {0};
	scanf("%s", z);

	int a[N] = {0};
	int b[N] = {0};
	
	int i;
	
	for (i=0; i<n; i++){

		a[z[i] - 'a']++;
		b[i] = a[z[i] - 'a'];
	}

	for (i=0; i<m; i++){

		int k;
		scanf("%d", &k);
		printf("%d\n", b[k - 1]);
	}
	return 0;
}
