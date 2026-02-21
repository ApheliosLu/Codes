#include <iostream>
#include "point.h"
#include "circle.h"
// 依赖：point.h point.cpp circle.h circle.cpp

// 设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。
// 判断点到圆心距离与圆半径的大小关系

//class Point {	// 点类 point.h point.cpp
//public:
//	// 设置x
//	void setX(int x) {
//		m_x = x;
//	}
//	// 获取x
//	int getx() {
//		return m_x;
//	}
//	// 设置y
//	void setY(int y) {
//		m_y = y;
//	}
//	// 获取y
//	int getY() {
//		return m_y;
//	}
//private:
//	int m_x;
//	int m_y;
//};

//class Circle {	// 圆类
//public:
//	// 设置半径
//	void setR(int r) {
//		m_r = r;
//	}
//	// 获取半径
//	int getR() {
//		return m_r;
//	}
//	// 设置圆心
//	void setCenter(Point center) {
//		m_center = center;
//	}
//	// 获取圆心
//	Point getCenter() {
//		return m_center;
//	}
//private:
//	int m_r;	// 半径
//	// 在类中让另一个类作为本类中的一个成员
//	Point m_center;	// 圆心
//};

// 判断点与圆关系
void  isInCircle(Circle& c, Point& p) {
	// 计算两点之间距离平方
	int distance =
		(c.getCenter().getx() - p.getx()) * (c.getCenter().getx() - p.getx()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	// 半径平方
	int r_square = c.getR() * c.getR();
	if (distance == r_square) {
		std::cout << "点在圆上" << std::endl;
	}
	else if (distance < r_square) {
		std::cout<<"点在圆内"<<std::endl;
	}
	else {
		std::cout << "点在圆外" << std::endl;
	}
}

int main07() {
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(11);

	isInCircle(c, p);

	return 0;
}