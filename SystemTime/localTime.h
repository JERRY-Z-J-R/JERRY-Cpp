/*
* �������ܼ���
* ѧ�ţ�20190521340
* ���ڣ�2020 / 10 /15
*/

#include <time.h>

struct tm t;				  //����һ��tm���͵Ľṹ��
time_t now;					  //����time_t���ͱ���

tm timeGet() {
	time(&now);				  //��ȡϵͳ���ں�ʱ��
	localtime_s(&t, &now);    //��ȡ�������ں�ʱ��

	return t;				  //����ȡ�õ�ǰʱ��Ľṹ��t
}
