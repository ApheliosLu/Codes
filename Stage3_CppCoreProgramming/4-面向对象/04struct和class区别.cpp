#include <iostream>

// struct  默认权限为公共
// class   默认权限为私有

struct C2 {
	int m_A;	// 默认权限公共
};
class C1 {
	int m_A;	// 默认权限私有
};

int main04() {
	C1 c1;
	//c1.m_A = 100;	// ×
	C2 c2;
	c2.m_A = 100;
	return 0;
}