#include<iostream>

void swap03(int num1, int num2) {
	std::cout << "发生交换前：" << std::endl;
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num2 << std::endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	std::cout << "发生交换后：" << std::endl;
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num2 << std::endl;
	//return ; 
	// 当函数不需要返回值时，可以不写return
}
int main03() {

	// 值传递，就是函数调用时实参将数值传入给形参
	// 值传递时，如果形参发生变化，并不会影响实参

	int a = 10, b = 20;
	swap03(a, b);

	std::cout << "main函数中的a = " << a << std::endl;	// 依旧10
	std::cout << "main函数中的b = " << b << std::endl;

	return 0;
}