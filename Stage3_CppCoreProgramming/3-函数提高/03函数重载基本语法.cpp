#include<iostream>

void func() {
	std::cout << "func的调用！" << std::endl;
}

void func(int a) {
	std::cout << "func(int a)的调用！" << std::endl;
}

void func(double a) {
	std::cout << "func(double a)的调用！" << std::endl;
}

void func(int a,double b) {
	std::cout << "func(int a,double b)的调用！" << std::endl;
}

void func(double a,int b) {
	std::cout << "func(double a,int b)的调用！" << std::endl;
}

// 函数返回值不可以作为函数重载条件
//int func(double a, int b) {
	//std::cout << "func(double a,int b)的调用！" << std::endl;
//}

// 函数重载作用：函数名可以相同，提高复用性
int main03() {
	//func();
	//func(10);
	//func(10.0);
	//func(10, 3.14);
	func(3.14, 10);
	return 0;
}