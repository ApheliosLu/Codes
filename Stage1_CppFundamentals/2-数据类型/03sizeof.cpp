#include <iostream>
using namespace std;

int main03()
{
	//整型：short（2） int（4） long（4） long long（8）
	//sizeof（数据类型/变量）

	short num1 = 10;
	cout << "short占用的内存空间为： " << sizeof(short) << endl;	//返回2
	cout << "short占用的内存空间为： " << sizeof(num1) << endl;		//返回2

	int num2 = 20;
	cout << "int占用的内存空间为： " << sizeof(num2) << endl;		//返回4

	cout << "long 类型所占内存空间为： " << sizeof(long) << endl;	//返回4

	cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;		//返回8


	system("pause");
	return 0;
}