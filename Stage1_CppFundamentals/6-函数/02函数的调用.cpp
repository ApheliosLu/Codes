#include<iostream>

int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main02() {
	int a = 10, b = 20;
	int c = add(a, b);
	std::cout <<"c = "<< c << std::endl;

	a = 100, b = 500;
	c = add(a, b);
	std::cout << "c = " << c << std::endl;

	return 0;
}