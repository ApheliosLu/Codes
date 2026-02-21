#include <iostream>

/*
C++中拷贝构造函数调用时机通常有三种情况
	1、使用一个已经创建完毕的对象来初始化一个新对象
	2、值传递的方式给函数参数传值
	3、以值方式返回局部对象
*/

class Person10 {
public:
	Person10() {
		std::cout << "Person10默认构造函数调用" << std::endl;
		m_age = 0;
	}
	Person10(int age) {
		std::cout << "Person10有参构造函数调用" << std::endl;
		m_age = age;
	}
	Person10(const Person10& p) {
		std::cout << "Person10拷贝构造函数调用" << std::endl;
		m_age = p.m_age;
	}
	~Person10() {
		std::cout << "Person10析构函数调用" << std::endl;
	}

	int m_age;
};

// 1、使用一个已经创建完毕的对象来初始化一个新对象
void test101() {
	Person10 p1(20);
	Person10 p2(p1);

	std::cout << "p2的年龄为" << p2.m_age << std::endl;
}

// 2、值传递的方式给函数参数传值
void doWork(Person10 p1) {	// 发生了拷贝临时副本	相当于Person10 p1 = p;

}
void test102() {
	Person10 p;
	doWork(p);
}

// 3、以值方式返回局部对象
Person10 doWork2() {
	Person10 p1;
	std::cout << (int*)&p1 << std::endl;
	return Person10(p1);	// 显示拷贝构造
	//return p1;	// 不显示拷贝构造
}
void test103() {
	Person10 p = doWork2();
	std::cout << (int*)&p << std::endl;	// 与51行地址不一样，不是同一个对象，发生了拷贝
	// (int*)&p 的作用是强制将 &p 当作 int* 类型指针输出，避免因 p 的类型导致 std::cout 误将其解释为字符串，从而可靠地输出 p 的地址值。
}

int main10() {
	//test101();
	//test102();
	test103();
	return 0;
}