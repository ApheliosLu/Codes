#include <iostream>
using namespace std;

int main04() {
	int score = 0;
	cout << "请给电影打个分： " << endl;
	cin >> score;
	cout << "你给这个电影打分为：" << score << "分" << endl;

	switch (score) {	// switch语句中表达式类型只能是整型或者字符型，不可以判断区间
	case 10:
	case 9:
		cout << "你认为这个电影很经典" << endl;
		break;	// 退出当前分支
	case 8:
		cout << "你认为这个电影非常好" << endl;
		break;
	case 7:
	case 6:
		cout << "你认为这个电影一般" << endl;
		break;
	default:
		cout << "你认为这个电影是烂片" << endl;
		break;
	}
	return 0;
}