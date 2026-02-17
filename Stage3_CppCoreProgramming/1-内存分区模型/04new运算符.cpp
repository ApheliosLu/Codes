#include<iostream>

// 1、new的基本语法
int* func() {
	// 在堆区创建整型数据
	// new返回该数据类型的指针
	int* i = new int(10);	// 创建一个整型变量，小括号存放10
	return i;
}

void test01() {
	int* p = func();
	std::cout << *p << std::endl;
	std::cout << *p << std::endl;
	std::cout << *p << std::endl;
	// 堆区数据由程序员管理开辟和释放
	// new开辟 delete释放
	delete p;
	//std::cout << *p << std::endl;	// 读取访问冲突，内存已释放
}

// 2、在堆区利用new开辟数组
void test02() {
	// 在堆区创建10整型数据的数组
	int* arr = new int[10];	// 创建一个整型数组，中括号包含10个元素
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;	// 给10个元素赋值，100`109
	}
	for (int i = 0; i < 10; i++) {
		std::cout << arr[i] << std::endl;
	}
	//	释放堆区数组
	delete[] arr;
}

int main() {
	//test01();
	test02();
}