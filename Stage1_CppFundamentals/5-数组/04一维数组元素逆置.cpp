#include<iostream>
#include<iterator>

int main04() {
	// 原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1

	int arr[5] = { 1,3,2,5,4 };
	std::cout << "数组逆置前：" << std::endl;
	for (int i = 0; i < std::size(arr); i++) {
		std::cout << arr[i] << std::endl;
	}

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	// start和end下标元素互换
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	std::cout << "数组逆置后：" << std::endl;
	for (int element : arr) {
		std::cout << element << std::endl;;
	}
	return 0;
}