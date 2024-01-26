#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
   
 
int main()
{  
    //每行输入一个样例包括两个用空格分开的实数x和y，其中x和y是长度不大于400位的非负实数。
    char op1[405],op2[405];
    while(scanf("%s%s",op1,op2)!=EOF)
    {
         
        int len1 = strlen(op1);
        int len2 = strlen(op2);
         
        //找op1和op2的小数点的位置
        //默认是整数，那么小数点应该在后面
        int pos1=len1,pos2=len2;
         
        for(int i=0;i<len1;i++)
        {
            if(op1[i]=='.')
            {
                pos1=i;
                break;
            }
        }
         
        for(int i=0;i<len2;i++)
        {
            if(op2[i]=='.')
            {
                pos2=i;
                break;
            }
        }
       
        int carry=0;    //进位标志
        int p,q;    //用于对齐相加
         
        //由于小数加法产生的进位会影响整数，因此先计算小数部分，注意carry
          
        /*-------------处理小数----------------*/
         
        //小数先从高位向低位存起来，再反向相加
        int fraPart[405]={0};
        int fraLen=0;
         
        //p，q从小数点的后面开始
        p=pos1+1;
        q=pos2+1;
         
        //先计算都有的位数
        while(p<len1 && q<len2)
        {
            fraPart[fraLen]=op1[p]-'0'  + op2[q]-'0';       //先存起来，可能超过10
            p++;
            q++;
            fraLen++;
        }
        //再处理多余的位数。 由于不知道哪个多余，都算一遍
        while(p<len1)
        {
            fraPart[fraLen]=op1[p]-'0' ;        //先存起来，可能超过10
            p++;
            fraLen++;
        }
        while(q<len2)
        {
            fraPart[fraLen]=op2[q]-'0' ;        //先存起来，可能超过10
            q++;
            fraLen++;
        }
        //最后从最低位开始检查是否有进位 
        for(int i=fraLen-1;i>=0;i--)
        {
            //每位加上上一位的进位，只保留各位，十位给进位
            fraPart[i]+=carry; 
            carry=fraPart[i]/10;
            fraPart[i]=fraPart[i]%10;
        }
         
         
        /*-------------处理整数-----------------*/
        //整数部分分开表达， intPart[0]表示个位
        int intPart[405]={0};
        int intLen =0;  //整数的长度
         
        p=pos1-1;   //小数点前面，从各位开始
        q=pos2-1;
         
        //先处理2者都有的位数
        while(p>=0 && q>=0)
        {
            //从个位开始相加，记得ascii转digital，加上进位
            int tmp =  op1[p]-'0'  + op2[q]-'0'+carry;              
            intPart[intLen]=tmp%10;
            carry = tmp/10; //更新进位
            p--;
            q--;
            intLen++;
        }
        //再处理多余的位数。 由于不知道哪个多余，都算一遍
        while(p>=0)
        {
            int tmp =  op1[p]-'0' +carry;   
            intPart[intLen]=tmp%10;
            carry = tmp/10; //更新进位
            p--; 
            intLen++;
        }
         
        while(q>=0)
        {
            int tmp =  op2[q]-'0' +carry;   
            intPart[intLen]=tmp%10;
            carry = tmp/10; //更新进位
            q--; 
            intLen++;
        } 
        //最后别忘了进位
        if(carry)
        {
            intPart[intLen]=carry;
            intLen++;
        }
         
        /*--------------输出结果--------------------*/
      
        //检查小数的最低位
         
         
        //打印整数部分
        for(int i=intLen-1;i>=0;i--)
        {
            printf("%d",intPart[i]);
        }
        //可能的话打印小数部分
        if(fraLen>0)
        {
            //寻找真正的最低位
            int fraRealLen = -1;
            for(int i=fraLen-1;i>=0;i--)
            {
                if(fraPart[i]!=0)
                {
                    fraRealLen=i;
                    break;
                }
            }
            if(fraRealLen!=-1)
            {
                printf(".");
                for(int i=0;i<=fraRealLen;i++)
                {
                    printf("%d",fraPart[i]);    
                }
            } 
        }
         
        printf("\n");
         
         
    }
    return  0;
}