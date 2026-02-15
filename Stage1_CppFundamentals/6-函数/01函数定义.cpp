#include<iostream>

int add01(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main01() {
	std::cout << add01(1, 2) << std::endl;
	return 0;
}