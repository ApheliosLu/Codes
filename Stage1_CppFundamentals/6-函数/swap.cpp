#include "swap.h"

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	std::cout << "交换后a = " << a << std::endl;
	std::cout << "交换后b = " << b << std::endl;
}