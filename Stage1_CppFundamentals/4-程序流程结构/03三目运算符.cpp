#include <iostream>
using namespace std;

int main03() {
	int a = 10, b = 20, c;
	c = a > b ? a : b;
	cout << "c的值是： " << c << endl;

	//C++中三目运算符返回的是变量,可以继续赋值
	a > b ? a : b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;	
	return 0;
}