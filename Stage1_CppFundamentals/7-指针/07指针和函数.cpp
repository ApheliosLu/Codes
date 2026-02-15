#include <iostream>

void swap1(int a, int b) {	// 值传递
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* p1, int* p2) {	// 地址传递
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main07() {
	// 利用指针作函数参数，可以修改实参的值
	// 如果不想修改实参，就用值传递，如果想修改实参，就用地址传递

	int a = 10, b = 20;
	std::cout << "交换前a = " << a << std::endl;
	std::cout << "交换前b = " << b << std::endl;

	swap1(a, b);
	std::cout << "值传递后a = " << a << std::endl;
	std::cout << "值传递后b = " << b << std::endl;

	swap2(&a, &b);
	std::cout << "地址传递后a = " << a << std::endl;
	std::cout << "地址传递后b = " << b << std::endl;

	return 0;
}