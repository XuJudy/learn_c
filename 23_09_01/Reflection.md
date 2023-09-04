### 技巧整理
#### 1.計算位數
key.
從最右邊一個個劃掉

step.
~~~
while(x>0)
{ 
  x = x/10;
  sum++;
}
~~~
link. [class/4.1.1](https://github.com/XuJudy/learn_c/blob/6a1796ec436bd4aa6de4406313a49e5bec23b275/23_09_01/class/4_1_1.c)
 | [practice/04-1](https://github.com/XuJudy/learn_c/blob/6a1796ec436bd4aa6de4406313a49e5bec23b275/23_09_01/practice/04_1.c)

#### 2.隨機數
step.
```
#include<stdlib.h>
#include<time.h>

srand(time(0));
int x = rand();  //取隨機數
int x = rand()%100;  //取100以內隨機數
```
link. [class/4.2.2](https://github.com/XuJudy/learn_c/blob/6a1796ec436bd4aa6de4406313a49e5bec23b275/23_09_01/class/4_2_2.c)

---
