/*
* 姓名：周吉瑞
* 学号：20190521340
* 日期：2020 / 10 /15
*/

#include <time.h>

struct tm t;				  //声明一个tm类型的结构体
time_t now;					  //声明time_t类型变量

tm timeGet() {
	time(&now);				  //获取系统日期和时间
	localtime_s(&t, &now);    //获取当地日期和时间

	return t;				  //返回取得当前时间的结构体t
}
