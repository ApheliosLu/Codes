#include <iostream>
using namespace std;

int main05()
{
	//1.字符型变量创建

	char ch = 'a';
	cout << ch << endl;		//直接输出字符a

	//2.占用内存大小

	cout << "char字符型变量所占内存： " << sizeof(char) << endl;		//占用1字节

	//3.常见错误

	//char ch2 = "b";		//不可用双引号创建char型
	//char ch2 = 'abcdef';	//字符常量中的字符过多

	//4.对应的ASCII码

	cout << (int)ch << endl;	//!!!输出ch对应的ASCII码，输出97

	ch = 98;	//!!!可以直接用ASCII给字符型变量赋值
	cout << ch << endl;		//输出b

	//0(48) A(65) a(97)

	system("pause");

	return 0;
}