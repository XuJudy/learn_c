#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>

// 泡沫排序(升序)
void BubbleSort(int data[], int len){

    for(int i=0; i<len-1; i++){

        int flag = 1;

        for(int j=0; j<len-i-1; j++){

            if(data[j]>data[j+1]){

                int tmp = data[j];
                data[j] = data[j+1];
                data[j+1] = tmp;

                flag = 0;
            }
        }

        if(flag)
            break;
    }
}

// 快速排序
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

// 泡沫排序-結構體
void BubbleSort2(struct XX data[], int len){

    for(int i=1; i<len; i++){

            struct XX tmp;

            for(int j=i+1; j<=len; j++){
                
                // 分數較低的往後
                if(data[i].xx<data[j].xx){

                    tmp = data[i];
                    data[i] = data[j];
                    data[j] = tmp;
                }

                // 分數相同則需比較號碼
                else if(data[i].xx==data[j].xx){

                    if(strcmp(data[i].x2, data[j].x2)>0){ // 返回值>0， 則str1>str2

                        tmp = data[i];
                        data[i] = data[j];
                        data[j] = tmp;
                    }
                }
            }
        }
    }
}