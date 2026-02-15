#include<iostream>

int main14() {

	// 在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
	// continue并没有使整个循环终止，而break会跳出循环

	for (int i = 0; i <= 100; i++) {
		if (i % 2 == 0) {	// 奇数输出偶数不输出，即起到筛选条件的作用
			continue;	// 不再执行本次循环中余下的cout
		}
		std::cout << i << std::endl;
	}

	return 0;
}