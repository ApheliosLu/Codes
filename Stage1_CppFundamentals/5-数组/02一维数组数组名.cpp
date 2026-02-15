#include <iostream>

int main02() {
	//数组名用途
	//1、可以获取整个数组占用内存空间大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::cout << "整个数组所占空间为" << sizeof(arr) << std::endl;
	std::cout << "每个元素所占空间为" << sizeof(arr[0]) << std::endl;
	std::cout << "数组的元素个数为" << sizeof(arr)/sizeof(arr[0]) << std::endl;

	//2、可以通过数组名获取到数组首地址
	std::cout << "数组首地址为：" << (int)arr << std::endl;	// int负责将十六进制地址转为十进制
	std::cout << "数组中第一个元素地址为：" << (int)&arr[0] << std::endl;
	std::cout << "数组中第二个元素地址为：" << (int)&arr[1] << std::endl;

	//arr = 100; 错误，数组名是常量，因此不可以赋值
	return 0;
}