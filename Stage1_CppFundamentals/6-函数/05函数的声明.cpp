#include<iostream>

//声明可以多次，定义只能一次
int max(int a, int b);
int max(int a, int b);

int main05() {
	int a = 100, b = 200;
	std::cout << max(a, b) << std::endl;
	return 0;
}

// 定义 先声明后，可将定义放在main后面
int max(int a, int b) {
	return a > b ? a : b;
}