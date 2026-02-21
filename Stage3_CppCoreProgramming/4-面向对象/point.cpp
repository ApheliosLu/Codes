#include "point.h"

// 点类实现(成员函数实现)
// 设置x
void Point::setX(int x) {	// Point作用域下的成员函数
	m_x = x;
}
// 获取x
int Point::getx() {
	return m_x;
}
// 设置y
void Point::setY(int y) {
	m_y = y;
}
// 获取y
int Point::getY() {
	return m_y;
}