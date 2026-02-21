#include <iostream>

class Person11 {
public:
	// 2、如果用户定义有参构造函数，c++不再提供默认无参构造，但是会提供默认拷贝构造
	//Person11() {
	//	std::cout << "Person11默认构造函数调用" << std::endl;
	//	m_age = 0;
	//}
	Person11(int age) {
		std::cout << "Person11有参构造函数调用" << std::endl;
		m_age = age;
	}
	// 1、若不自行定义拷贝构造函数，则会调用默认拷贝构造函数，对属性进行值拷贝
	// 3、如果用户定义拷贝构造函数，c++不会再提供其他构造函数
	Person11(const Person11& p) {
		std::cout << "Person11拷贝构造函数调用" << std::endl;
		m_age = p.m_age;	
	}
	~Person11() {
		std::cout << "Person11析构函数调用" << std::endl;
	}

	int m_age;
};

//void test111() {
//	Person11 p;
//	p.m_age = 18;
//
//	Person11 p2(p);
//	std::cout << "p2的年龄为：" << p2.m_age << std::endl;
//}

void test112() {
	Person11 p(28);
	Person11 p2(p);
	std::cout << "p2的年龄为：" << p2.m_age << std::endl;

}

int main11() {
	//test111();
	test112();
	return 0;
}