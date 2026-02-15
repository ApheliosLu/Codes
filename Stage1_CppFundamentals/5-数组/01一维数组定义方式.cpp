#include <iostream>
#include <iterator>

int main01() {
	// 定义方式1 
	// 数据类型 数组名[元素个数];
	int score[10];
	score[0] = 100;
	score[1] = 99;
	score[2] = 85;
	for (int i = 0; i < 10; i++) {
		std::cout << score[i] << std::endl;	// 有脏数据
	}

	// 定义方式2
	//数据类型 数组名[元素个数] =  {值1，值2 ，值3 ...};
	int score2[10] = { 100,99,85 };
	for (int i = 0; i < sizeof(score2) / sizeof(score2[0]); i++) {	// 10 = sizeof(score2)/sizeof(score2[0])
		std::cout << score2[i] << std::endl;	// 未初始化的会用0填充
	}

	//定义方式3
	//数据类型 数组名[] =  {值1，值2 ，值3 ...};
	int score3[] = { 100,99,80,70,60,50,40,30,20,10 };
	for (int i = 0; i < std::size(score3); i++) {	// c++17标准库函数<iterator>中的std::size
		std::cout << score3[i] << std::endl;
	}
	/*for (int score : score3) {	// c++11范围循环，等价上述for循环
		std::cout << score << std::endl;
	}*/
	return 0;
}