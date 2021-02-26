/*
* 姓名：周吉瑞
* 学号：20190521340
* 日期：2020 / 10 /15
*/

#ifndef DETTINE_H
#define GETTIME_H

class GetTime
{
public:
	void disp_welcomemsg();
	void set_year();
	void set_month();
	void set_day();
	void set_week();
	void set_hour();
	void set_minute();
	void set_second();
	int get_year();
	int get_month();
	int get_day();
	int get_week();
	int get_hour();
	int get_minute();
	int get_second();

private:
	int year;
	int month;
	int day;
	int week;
	int hour;
	int minute;
	int second;
};

#endif