#include <iostream>

/*
设计立方体类(Cube)
求出立方体的面积和体积
分别用全局函数和成员函数判断两个立方体是否相等。
1、创建立方体类
2、设计属性
3、设计行为 获取面积体积
4、用全局函数和成员函数判断是否相等
*/

class Cube {
public:
	// 设置、获取长宽高
	void setL(int l) {
		m_l = l;
	}
	int getL() {
		return m_l;
	}
	void setW(int w) {
		m_w = w;
	}
	int getW() {
		return m_w;
	}
	void setH(int h) {
		m_h = h;
	}
	int getH() {
		return m_h;
	}
	// 获取面积
	int calculateS() {
		return 2 * m_l * m_w + 2 * m_w * m_h + 2 * m_h * m_l;
	}
	// 获取体积
	int calculateV() {
		return m_l * m_w * m_h;
	}
	// 利用成员函数判断是否相等
	bool isSameByClass(Cube& c) {
		if (c.getL() == m_l && c.getW() == m_w && c.getH() == m_h) {
			return true;
		}
		return false;
	}
private:
	int m_l;
	int m_w;
	int m_h;
};

// 利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2) {
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	return false;
}

int main06() {
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	std::cout << "c1的面积为：" << c1.calculateS() << std::endl;
	std::cout << "c1的体积为：" << c1.calculateV() << std::endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);

	// 利用全局函数判断
	bool ret = isSame(c1, c2);
	if (ret) {
		std::cout << "c1和c2是相等的" << std::endl;
	}
	else {
		std::cout << "c1和c2是不相等的" << std::endl;
	}

	// 利用成员函数判断
	bool ret1 = c1.isSameByClass(c2);
	if (ret1) {
		std::cout << "成员函数判断：c1和c2是相等的" << std::endl;
	}
	else {
		std::cout << "成员函数判断：c1和c2是不相等的" << std::endl;
	}
	return 0;
}