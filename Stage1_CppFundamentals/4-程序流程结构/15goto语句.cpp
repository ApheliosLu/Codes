#include<iostream>

int main() {
	std::cout << "1" << std::endl;
	goto FLAG;	// 如果标记的名称存在，执行到goto语句时，会跳转到标记的位置

	std::cout << "2" << std::endl;
	std::cout << "3" << std::endl;
	std::cout << "4" << std::endl;

	FLAG:	// :
	std::cout << "5" << std::endl;
}