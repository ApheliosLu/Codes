#include<iostream>

// 1、值传递
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = a;
}

// 2、地址传递
void swap02(int* a, int* b) {
	int temp = *a;
	*a = *b;	// 解引用
	*b = temp;
}

// 3、引用传递
void swap03(int& a, int& b) {	// 以引用方式接收
	int temp = a;
	a = b;
	b = temp;
}

int main03() {

	int a = 10;
	int b = 20;

	//swap01(a, b);		// 值传递，形参不会修饰实参
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	//swap02(&a, &b);	// 地址传递，形参会修饰实参
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	swap03(a, b);	// 引用传递，形参会修饰实参
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	// 总结：通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单

	return 0;
}