#include<iostream>

int main10() {
	// 1、输出1~100数字
	for (int i = 1; i <= 100; i++) {
		// 2、如果符合条件，输出敲桌子
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			std::cout << "敲桌子" << std::endl;
		}
		else {
			std::cout << i << std::endl;

		}
	}
	return 0;
}