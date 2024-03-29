// 问题 E: 22-循环-2-七夕节
/*
    题目描述
    七夕节那天，月老来到数字王国，他在城门上贴了一张告示，并且和数字王国的人们说："你们想知道你们的另一半是谁吗?那就按照告示上的方法去找吧!" 人们纷纷来到告示前，都想知道谁才是自己的另一半。告示如下： 值此七夕佳节来临之际，为感谢广大群众对我月老的热爱，特此将大家的另一半的寻找方法公布如下：将你的编号（数字王国的每一个人都有自己的一个编号）的所有因子加起来得到的一个编号，这个编号的主人就是你的另一半。 ——月老 
    小南是个热心人，想帮助大家快速地找到另一半。于是他想编写了一个程序，每运行一次，就可以帮助t个人找到对应的另一半编号。聪明的你，能帮他实现吗？
    说明：数字N的因子就是所有比N小又能被N整除的所有正整数，如12的因子有1、2、3、4、6，且1的因子是1。
    输入
    多组样例，样例的个数由输入的第一行整数t（1≤t≤500000）决定。接下来的t行数据，每行输入一个整数n（1≤n≤500000），代表要找另一半编号的人的编号。
    输出
    输出t行数据。对于每一个输入的n，输出一个整数表示找到的另一半的编号。每个输出占一行。
    样例输入 Copy
    3
    2
    10
    20
    样例输出 Copy
    1
    8
    22
    提示
    由于测试数据量和测试数据比较大，所以部分样例会超时，要考虑程序的优化。
*/