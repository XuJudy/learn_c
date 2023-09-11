//打印當前時間(未完成)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	time_t now=time(NULL);
	struct tm * date = localtime(&now);
	int year=date->tm_year;
	int month=date->tm_mon;
	int day=date->tm_mday;
	int hour=date->tm_hour;
	int minute=date->tm_min;
	int second=date->tm_sec;
	
	//continue your work
	//
	//----------------
	
	return 0;
}
