#include <iostream>

// 圆周率
const double PI = 3.14;

// 设计一个圆类：求圆的周长
// 圆求周长的公式：2*PI*半径
class Circle {
	// 访问权限
public:	// 公共权限

	// 属性
	int m_r;	// 半径

	// 行为
	double calculateZC() {	// 获取圆的周长
		return 2 * PI * m_r;
	}
};

int main01() {
	Circle c1;	// 实例化：通过类创建对象
	c1.m_r = 10;
	std::cout << "圆的周长为：" << c1.calculateZC() << std::endl;

	return 0;
}