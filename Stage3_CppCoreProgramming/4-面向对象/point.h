#pragma once
#include<iostream>

// 点类声明
class Point {	
public:
	// 设置x
	void setX(int x);
	// 获取x
	int getx();
	// 设置y
	void setY(int y);
	// 获取y
	int getY();
private:
	int m_x;
	int m_y;
};
