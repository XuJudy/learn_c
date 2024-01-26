// 问题 G: 纪念品分组
/*
    题目描述
    把购来的纪念品根据价格进行分组，但每组最多只能包括两件纪念品， 并且每组纪念品的价格之和不能超过一个给定的整数。
    为了保证在尽量短的时间内发完所有纪念品，乐乐希望分组的数目最少。
    你的任务是写一个程序，找出所有分组方案中分组数最少的一种，输出最少的分组数目。

    输入
    共n+2行：
    第一行包括一个整数w，为每组纪念品价格之和的上限。
    第二行为一个整数n，表示购来的纪念品的总件数G。
    第3∼n+2行每行包含一个正整数i表示所对应纪念品的价格。
    输出
    一个整数，即最少的分组数目。

    样例输入
    100 
    9 
    90 
    20 
    20 
    30 
    50 
    60 
    70 
    80 
    90
    样例输出 Copy
    6
*/

#include<stdio.h>

void quicksort(int *a, int low, int high){

	if(low>=high){
		return;
	}

	int left = low;
	int right = high;
	int t = a[left];
	
    while(left<right){
	
    	while(left<right && a[right]>=t){
			
            right--;
		}

		a[left] = a[right];
		
        while(left<right && a[left]<=t){
			    left++;
		}

		a[right] = a[left];
	}

	a[right] = t;
	quicksort(a, low, left-1);
	quicksort(a, left+1, high);
}

int main(){

    int w;

    while(scanf("%d", &w)!=EOF){

        int n;
        int money[500005] = {0};

        scanf("%d", &n);
        int sum = n;

        for(int i=0; i<n; i++){

            scanf("%d", &money[i]);
        }

        quicksort(money, 0, n-1);

        int i = 0;
        int j = n-1;

        while(i<j){

            if(money[i]+money[j]<=w){

                i++;
                j--;
                sum--;
            }
            else{

                j--;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}