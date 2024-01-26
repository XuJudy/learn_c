//问题 K: 超级计算机
/*
    题目描述
    小李组织设计了一台实验用的计算机，命名为超级计算机。
    虽然叫做超级计算机，但是由于小李的憨憨的技术，所以它只能执行简单的六种命令A，B，C，D，E，F；只有二个内存M1，M2；三个寄存器R1，R2，R3。六种命令的含义如下：

    命令A：将内存M1的数据装到寄存器R1中；
    命令B：将内存M2的数据装到寄存器R2中；
    命令C：将寄存器R3的数据装到内存M1中；
    命令D：将寄存器R3的数据装到内存M2中；
    命令E：将寄存器R1中的数据和寄存器R2中的数据相加，结果放到寄存器R3中；
    命令F：将寄存器R1中的数据和寄存器R2中的数据相减，结果放到寄存器R3中。

    你的任务是：设计一个程序模拟PpMm的运行。

    输入
    有若干组，每组有2行，
    第一行是2个整数，分别表示M1和M2中的初始内容；
    第二行是一串长度不超过200的由大写字母A到F组成的命令串，命令串的含义如上所述。
    输出
    对应每一组的输入，输出只有一行，二个整数，分别表示M1，M2的内容；其中M1和M2之间用逗号隔开。

    其他说明：R1，R2，R3的初始值为0，所有中间结果都在-2^31和2^31之间
    样例输入 Copy
    100 288
    ABECED
    样例输出 Copy
    388,388
*/

#include<stdio.h>
#include<string.h>

int main(){

    int M1, M2;
    char step[200];

    while(scanf("%d%d", &M1, &M2)!=EOF){

        scanf("%s", step);

        int R1 = 0;
        int R2 = 0;
        int R3 = 0;
        int len = strlen(step);

        for(int i=0; i<len; i++){

            if(step[i]=='A')
                R1 = M1;
            else if(step[i]=='B')
                R2 = M2;
            else if(step[i]=='C')
                M1 = R3;
            else if(step[i]=='D')
                M2 = R3;
            else if(step[i]=='E')
                R3 = R1 + R2;
            else if(step[i]=='F')
                R3 = R1 - R2;
        }

        printf("%d,%d\n", M1, M2);
    }

    return 0;
}