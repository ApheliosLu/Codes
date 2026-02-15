#include<iostream>

int main13() {

	// 1、在switch中使用break
	std::cout << "请选择副本难度：" << std::endl;
	std::cout << "1:普通" << std::endl;
	std::cout << "2：中等" << std::endl;
	std::cout << "3：困难" << std::endl;
	int select = 0;
	std::cin >> select;
	switch (select) {
	case 1:
		std::cout << "您选择了普通难度" << std::endl;
		break;
	case 2:
		std::cout << "您选择了中等难度" << std::endl;
		break;
	case 3:
		std::cout << "您选择了困难难度" << std::endl;
		break;
	default:
		break;
	}

	// 2、在循环语句中使用break
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;	// 跳出循环
		}
		std::cout << i << std::endl;
	}

	// 3、在嵌套循环中使用break，退出内层循环
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) {
				break;	// 10行5列
			}
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}