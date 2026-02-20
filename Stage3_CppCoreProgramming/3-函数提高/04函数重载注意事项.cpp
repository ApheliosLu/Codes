#include<iostream>

// 1、引用作为重载条件
void func(int& a) {	 // int& a =10;	不合法
	std::cout << "func(int& a)调用！" << std::endl;
}

void func(const int& a) {	// const int& a=10; 合法
	std::cout << "func(const int&a)调用！" << std::endl;
}

// 2、函数重载碰到函数默认参数
void func2(int a, int b = 20) {
	std::cout << "func2(int a,int b = 20)调用" << std::endl;
}

void func2(int a) {
	std::cout << "func2(int a)调用" << std::endl;

}

int main() {
	int a = 10;
	func(a);	// 调用不带const
	func(10);	// 调用带const

	//func2(a);	// ×碰到默认参数产生歧义，需要避免
	func2(a, 10);
}