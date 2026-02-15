#include <iostream>
using namespace std;

// 运算符优先级		!>算数运算符>比较运算符>&&>||>赋值运算符
int main01() {
	// 加减乘除模
	int a1 = 10;
	int b1 = 20;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;	// 整除 两个整数相除结果依然是整数
	cout << a1 % b1 << endl;	// 仅整数可取模

	// 自增减
	//int c1 = ++a1 * 10;
	int d1 = a1++ * 10;
	//cout << c1 << endl;	// 110
	cout << d1 << endl;		// 100


	return 0;
}