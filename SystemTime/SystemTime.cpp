/*
* 姓名：周吉瑞
* 学号：20190521340
* 日期：2020 / 10 /15
*/

#include <iostream>
using namespace std;

#include "getTime.h"

int main(void)
{
	GetTime* getTime = new GetTime();

	while (true) {
		getTime->disp_welcomemsg();

		getTime->set_year();
		getTime->set_month();
		getTime->set_day();
		getTime->set_week();
		getTime->set_hour();
		getTime->set_minute();
		getTime->set_second();

		cout << "年份：" << getTime->get_year() << endl;
		cout << "月份：" << getTime->get_month() << endl;
		cout << "日期：" << getTime->get_day() << endl;
		cout << "星期：" << getTime->get_week() << endl;
		cout << "小时：" << getTime->get_hour() << endl;
		cout << "分钟：" << getTime->get_minute() << endl;
		cout << "秒钟：" << getTime->get_second() << endl;

		system("cls");
	}

	delete getTime;
	return 0;
}