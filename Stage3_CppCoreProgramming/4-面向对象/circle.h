#pragma once	// 防止头文件重包含
#include <iostream>
#include "point.h"

// 圆类声明
class Circle {
public:
	// 设置半径
	void setR(int r);
	// 获取半径
	int getR();
	// 设置圆心
	void setCenter(Point center);
	// 获取圆心
	Point getCenter();
private:
	int m_r;	// 半径
	Point m_center;	// 圆心	在类中让另一个类作为本类中的一个成员
};