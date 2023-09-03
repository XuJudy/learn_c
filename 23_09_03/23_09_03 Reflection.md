### 技巧整理
#### 1.跳出多層迴圈
key1.利用變量exit 接力跳出所有迴圈

step.
~~~
for(...){  //迴圈1
  for(...){  //迴圈2
    for(...){  //迴圈3
      if(...){

        printf("...");
        exit = 1;
        break;  //跳出迴圈3
      }
    }

    if(exit == 1)   break;  //跳出迴圈2
  }

  if(exit == 1)   break;  //跳出迴圈1
}
~~~
link.[class/5.2.3.01](https://github.com/XuJudy/learn_c/blob/e1fece6271b3d45b446edb72195550710fa364df/23_09_03/class/5_2_3_01.c)

---
key2.使用goto    *建議只在多層迴圈時使用goto

step.
~~~
for(...){  //迴圈1
  for(...){  //迴圈2
    for(...){  //迴圈3
      if(...){

        printf("...");
        
        goto out;  //跳出迴圈
      }
    }
  }
}
out:  //跳脫至這一層
~~~
link.[class/5.2.3.02](https://github.com/XuJudy/learn_c/blob/e1fece6271b3d45b446edb72195550710fa364df/23_09_03/class/5_2_3_02.c)

#### 2.輾轉相除法求最大公因數
step.
1. 如果b=0,計算結束,a是最大公因數;
2. 否則,計算a除以b的餘數,讓a=b,而b=餘數;
3. 回到第一步。
~~~
eg.
    a   b   t
    12  18  12
    18  12  6
    12  6   0  
    6   0       --->end
~~~
link.[class5.3.3](https://github.com/XuJudy/learn_c/blob/e1fece6271b3d45b446edb72195550710fa364df/23_09_03/class/5_3_3.c)

---
