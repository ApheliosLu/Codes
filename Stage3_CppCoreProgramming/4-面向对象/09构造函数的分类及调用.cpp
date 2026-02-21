#include <iostream>

class Person09 {
public:
	// 普通构造函数
	Person09() {	// 无参构造（默认构造）
		std::cout << "Person09的无参构造函数调用" << std::endl;
	}
	Person09(int a) {	// 有参构造 相当于初始化操作
		age = a;
		std::cout << "Person09的有参构造函数调用" << std::endl;
	}
	// 拷贝构造函数
	Person09(const Person09& p) {
		age = p.age;	// 将传入的p的所有属性拷贝到当前对象上
		std::cout << "Person09的拷贝构造函数调用" << std::endl;
	}
	~Person09() {
		std::cout << "Person09的析构函数调用" << std::endl;
	}
	int age;
};

// 3种调用方式
void test091() {
	// 1、括号法
	//Person09 p1;		// 默认构造函数调用
	//Person09 p2(10);	// 有参构造函数调用
	//Person09 p3(p2);	// 拷贝构造函数调用

	// ！！！注意1：调用默认构造函数时，不要加()
	//Person09 p1();	// 不会创建对象 编译器认为此行是一个函数的声明 类似于 void func();

	//std::cout << "p2的年龄：" << p2.age << std::endl;
	//std::cout << "p3的年龄：" << p3.age << std::endl;

	// 2、显式法
	//Person09 p1;
	//Person09 p2 = Person09(10);	// 有参构造
	//Person09 p3 = Person09(p2);	// 拷贝构造

	//Person09(10);	// 匿名对象 特点：当前行执行结束后，系统会立即回收匿名对象,即会立即调用析构函数再执行下一行
	//std::cout << "aaaaa" << std::endl;

	// ！！！注意2：不要利用拷贝构造函数来初始化匿名对象
	//Person09(p3);	// ×p3重定义 编译器认为 Person09 (p3) === Perons09 p3; 即一个对象声明 

	// 3、隐式转换法
	Person09 p4 = 10;	// 相当于 Person09 p4 = Person(10);	有参构造
	Person09 p5 = p4;	// 拷贝构造 等价于 Person09 p5 = Person(p4);
}

int main09() {
	test091();
	return 0;
}