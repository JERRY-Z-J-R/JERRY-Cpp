/*
* ???????????
* ????20190521340
* ?????2020 / 10 /15
*/

#include <iostream>
#include <time.h>
using namespace std;

#include "getTime.h"
#include "localTime.h"

void GetTime::disp_welcomemsg()
{
	cout << "????????????" << endl;
}

void GetTime::set_year()
{
	year = timeGet().tm_year + 1900;
}

void GetTime::set_month()
{
	month = timeGet().tm_mon + 1;
}

void GetTime::set_day()
{
	day = timeGet().tm_mday;
}

void GetTime::set_week()
{
	week = timeGet().tm_wday;
}

void GetTime::set_hour()
{
	hour = timeGet().tm_hour;
}

void GetTime::set_minute()
{
	minute = timeGet().tm_min;
}

void GetTime::set_second()
{
	second = timeGet().tm_sec;
}

int GetTime::get_year()
{
	return year;
}

int GetTime::get_month()
{
	return month;
}

int GetTime::get_day()
{
	return day;
}

int GetTime::get_week()
{
	return week;
}

int GetTime::get_hour()
{
	return hour;
}

int GetTime::get_minute()
{
	return minute;
}

int GetTime::get_second()
{
	return second;
}