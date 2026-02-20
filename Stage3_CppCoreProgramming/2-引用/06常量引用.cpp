#include<iostream>

// 常量引用主要用来修饰形参，防止误操作
void showValue(const int& val) {
	//val = 1000;	// 引用修改了main函数中的a值
	std::cout <<"val = "<<val << std::endl;
}

int main() {

	//int a = 10;
	//int& ref = 10;	// × 引用必须引一块合法的内存空间
	//const int& ref = 10;	// 加上const后，编译器将代码修改 int temp = 10; int& ref = temp;
	//ref = 20;	// ×，加上const之后只读

	int a = 100;
	showValue(a);
	std::cout << "a = "<<a << std::endl;
}