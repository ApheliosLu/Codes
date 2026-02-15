#include <iostream>
using namespace std;

int main04()
{
	//实数3.14的有效数字为3位

	float f1 = 3.1415926f;	//3.14后不加字母f则默认为double类型，使用float接收则会转换成float类型再使用

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1 = " << d1 << endl;//都仅输出6位有效数字，若想输出更多则需要配置

	cout << "float占用内存空间为： " << sizeof(float) << endl;	//占用4字节

	cout << "double占用内存空间为： " << sizeof(double) << endl;	//占用8

	//科学计数法
	float f2 = 3e2;		//3*10^2
	cout << "f2 = " << f2 << endl;	//f2 = 300

	float f3 = 3e-2;	//3*0.1^2或3*10^(-2)
	cout << "f3 = " << f3 << endl;		//f3 = 0.03

	system("pause");
	return 0;
}