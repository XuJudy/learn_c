//22-选择-2-表达式值
/*
    题目描述
    老师出了这样一个题：
    给你三个数，在这三个数中间任意加*或者是+，然后可以随便打括号，只要这个表达式合法
    比如说1 2 3可以得到：（不止以下三个）
    1+2*3=7
    1*(2+3)=5
    1*2*3=6
    (1+2)*3=9
    不能改变这三个数的原顺序，要求输出最大化的表达式的值。
    
    输入
    多样例，每个样例输入一行，包括三个整数分别表示a，b，c（1≤a,b,c≤100），保证结果满足int类型范围。
    
    输出
    每行样例输出一个整数，表示这三个整数构成的表达式能达到的最大值。每个样例的输出结果占一行。
    
    样例输入 Copy
    1 2 3
    2 10 3
    样例输出 Copy
    9
    60
*/