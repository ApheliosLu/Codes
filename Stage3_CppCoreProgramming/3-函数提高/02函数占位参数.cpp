#include<iostream>

void func(int a, int = 10) {	// 占位参数也可以有默认参数
	std::cout << "this is func" << std::endl;
}

int main02() {
	func(10, 1);		// 占位参数必须填补
	return 0;
}