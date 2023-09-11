### 技巧整理
#### 1. 函數
```
//函數頭
void sum(int start, int end){   //返回類型 函數名 (參數表)

    //函數體
    int sum = 0;

    for(int i=start; i<=end; i++){

        sum = sum + i;
    }

    printf("%d\n", sum);
}
```
```
int main(){

    sum(1,10);  //函數名 (參數值);
                //沒有參數也要圓括號!!! eg.sum()

    return 0;
}
```
* 函數原型:
```
void sum(int start, int end);   //原型聲明: 告訴編譯器函數長怎樣

int main(){

    ...;
}

void sum(int start, int end){   //函數定義: 實際函數頭

    ...;
}
```
* 以下也行:
```
void sum(int , int );
```
* 以下無法編譯:
```
int main(){

    ...;
}

void sum(int start, int end){   //函數定義

    ...;
}
```