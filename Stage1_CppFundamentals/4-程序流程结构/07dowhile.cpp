#include<iostream>

int main07() {
	int num = 0;

	// do...while先执行一次循环语句，再判断循环条件
	do {
		std::cout << num << std::endl;
		num++;
	} while (num);

	// 不会执行
	/*while (num){
		std::cout << num << std::endl;
		num++;
	}*/
	return 0;
}