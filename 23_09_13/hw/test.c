//打印當前時間
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	//獲取當前時間
	time_t now=time(NULL);

	//將當前時間轉換為本地時間
	struct tm * date = localtime(&now);

	printf("当前日期和时间：%04d-%02d-%02d %02d:%02d:%02d\n",
        date->tm_year + 1900, date->tm_mon + 1, date->tm_mday,
        date->tm_hour, date->tm_min, date->tm_sec);
	
	return 0;
}
