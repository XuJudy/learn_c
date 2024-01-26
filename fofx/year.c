#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
#include<math.h>
#include<time.h>
#include<stdbool.h>

// 判斷是否為閏年
int IsLeapYear(int year){

	//设置闰年标志，默认不是闰年
	int LeapFlag=0;

	//能被400整除
	if(year%400==0){

		LeapFlag=1;
	}
	else{

		//能被4整除并且不能被100整除
		if(year%4==0 && year%100!=0){

			LeapFlag=1;
		}
	}
	
	return LeapFlag;
}

//判断某年某月一共有多少天
int DaysOfMonth(int year,int month){

	//设置变量，表示当月的天数
	int day;
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day=31;
			break;

		case 4:
		case 6:
		case 9:
		case 11:
			day=30;
			break;
            
		case 2:
			//调用上面的IsLeapYear函数
			if(IsLeapYear(year))
				day=29;
			else
				day=28;
			break;

		default:
			//默认day是30天
			day=30;
			break; 
	}
	
	return day;
}

//计算某年某月某日是该年的第几天
int DayofYear(int year,int month,int day){

	//如果年和月的参数错误，直接返回0
	if(year<0 || month<1 || month>12){
        
		return 0;
	}
  
	//如果日期小于1或者超过当月最大日期，直接返回0 
	//其中当月的最大天数用上面的DaysOfMonth函数计算
	if(day<1 || day>DaysOfMonth(year,month)){

		return 0;
	} 
	
	int dayofyear=0;
	//先把从1月份到month-1月份的日期加起来
	for(int i=1;i<month;i++){

		dayofyear+= DaysOfMonth(year,i);
	}

	//再把当月的日期加起来
	dayofyear+=day;
	
	return dayofyear;
}

