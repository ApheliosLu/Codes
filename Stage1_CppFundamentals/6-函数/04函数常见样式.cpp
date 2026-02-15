#include<iostream>

//函数常见样式
//1、无参无返
void test01() {
	//void a = 10; //无类型不可以创建变量,原因：无法分配内存
	std::cout << "this is test01" << std::endl;
	//test01();	// 调用
}

//2、有参无返
void test02(int a) {
	std::cout << "this is test02" << std::endl;
	std::cout << "a = " << a << std::endl;
}

//3、无参有返
int test03() {
	std::cout << "this is test03" << std::endl;
	return 10;
}

//4、有参有返
int test04(int a, int b) {
	std::cout << "this is test04" << std::endl;
	int sum = a + b;
	return sum;
}

int main04() {

	test01();

	test02(10000);

	int num1 = test03();
	std::cout << num1 << std::endl;

	std::cout << test04(10, 20) << std::endl;

	return 0;
}