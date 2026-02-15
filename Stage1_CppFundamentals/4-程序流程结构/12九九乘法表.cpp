#include<iostream>
#include<iomanip>

int main12() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			std::cout << std::setw(2) << j << " x " << std::setw(1) << i
					  << " = " << std::setw(2) << j * i << "  ";
			// std::setw(n) 设置下一个输出项占用的最小宽度为 n 个字符 默认右对齐
		}
		std::cout << std::endl;
	}
	return 0;
}