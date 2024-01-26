//打印當前時間
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	
	//獲取當前時間
	time_t now=time(NULL);

	//將當前時間轉換為本地時間
	struct tm * date = localtime(&now);

	int year = date->tm_year + 1900;
	int month = date->tm_mon + 1;
	int day = date->tm_mday;
	int hour = date->tm_hour;
	int minute = date->tm_min;
	int second = date->tm_sec;

	printf("当前日期和时间：%04d-%02d-%02d %02d:%02d:%02d\n",
        year, month, day, hour, minute, second);
	
	return 0;
}