#include <iostream>

int main04() {
	// 野指针：指针变量指向非法的内存空间
	int* w = (int*)0x1100;	// 访问权限冲突
	//std::cout << *w << std::endl;

	return 0;
}
