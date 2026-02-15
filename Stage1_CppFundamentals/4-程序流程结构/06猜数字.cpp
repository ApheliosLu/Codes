#include<iostream>
#include<ctime>	// time系统时间头文件

int main06() {

	// 添加随机数种子：利用当前系统时间生成随机数，防止每次生成随机数都一样
	srand((unsigned int)time(NULL));

	// 1、系统生成随机数
	int num = rand() % 100 + 1;	// 生成(0~99)+1的随机数
	//std::cout << num << std::endl;

	// 2、玩家进行猜测
	int val = 0;	// 玩家输入的数据

	int guessCount = 0;	// 已猜测次数
	const int MAX_GUESSES = 5;	// 最大猜测次数

	std::cout << "欢迎来到猜数字游戏！" << std::endl;
	std::cout << "您最多有" << MAX_GUESSES << "次机会猜测1~100之间的数字。" << std::endl;
	
	while (guessCount<MAX_GUESSES) {
		guessCount++;	// 增加猜测次数
		std::cout << "第" << guessCount << "次猜测（还剩"
			<< MAX_GUESSES - guessCount << "次机会），请输入：";
		std::cin >> val;
		// 3、判断玩家的猜测
		
		// 猜错 提示猜的结果 过大或者过小 重新返回第2步
		if (val > num) {
			std::cout << "猜测过大" << std::endl;
		}
		else if (val < num) {
			std::cout << "猜测过小" << std::endl;
		}
		else {
			// 猜对 退出游戏
			std::cout << "恭喜您猜对了!您用了" <<guessCount<<"次机会。"<< std::endl;
			break;	// break退出当前循环
		}
		if (guessCount == MAX_GUESSES) {
			std::cout << "很遗憾，5次机会已用完！" << std::endl;
			std::cout << "正确答案是：" << num << std::endl;
		}
	}
	return 0;
}