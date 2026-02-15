#include <iostream>
using namespace std;

/*
	两种方法定义常量
	define和const
*/

#define day 7	//定义宏常量

int main01()
{
	cout << "一周里共有" << day << "天" << endl;	//输出，一周里共有7天

	const int month = 12;	//const修饰的变量成为常量
	cout << "一年共有" << month << "个月" << endl;

	//month = 13;	//报错，“表达式必须为可修改的左值”，常量不可修改

	/*
		c的标准输入输出
		printf("a=%d\n", a);
		scanf_s("%c", &b);
	*/

	system("pause");

	return 0;
}