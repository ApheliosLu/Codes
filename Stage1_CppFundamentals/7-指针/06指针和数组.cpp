#include <iostream>

int main06() {
	// 利用指针访问数组中元素
	int arr[] = { 1,2,3,4,5,6,7,8,9 ,10};
	int* p = arr;
	std::cout << "the first element is " << arr[0] << std::endl;
	std::cout << "the first element is " << *p<< std::endl;

	for (int i = 0; i < std::size(arr); i++) {
		std::cout << *p << std::endl;
		p++;	// 指针向后偏移4字节
	}

	return 0;
}

