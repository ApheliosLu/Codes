#include <iostream>

class Person08 {
public:
	// 构造函数
	Person08() {	
		// 如果我们不提供构造和析构，编译器会提供
		// 编译器提供的构造函数和析构函数是空实现
		std::cout << "Person08的构造函数调用" << std::endl;
	}
	// 析构函数
	~Person08() {	
		std::cout << "Person08的析构函数调用" << std::endl;
	}
};

void test08() {
	Person08 p;	// 栈区数据，执行完毕后自动释放
}

int main08() {
	//test08();
	Person08 p;	// 执行完下一行后main函数才会结束释放
	system("pause");	// 提示按任意键继续
	return 0;
}