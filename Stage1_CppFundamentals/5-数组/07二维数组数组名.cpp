#include<iostream>

int main07() {
	//二维数组数组名，定义
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	//查看二维数组所占内存空间
	std::cout << "二维数组大小：" << sizeof(arr) << std::endl;
	std::cout << "二维数组一行大小：" << sizeof(arr[0]) << std::endl;
	std::cout << "二维数组元素大小：" << sizeof(arr[0][0]) << std::endl;

	std::cout << "二维数组行数：" << sizeof(arr)/sizeof(arr[0]) << std::endl;
	std::cout << "二维数组列数：" << sizeof(arr[0])/sizeof(arr[0][0]) << std::endl;

	//获取二维数组首地址
	std::cout << "二维数组首地址" << arr << std::endl;
	std::cout << "二维数组第一行地址" << int(arr[0]) << std::endl;	// int将十六进制地址转为十进制
	std::cout << "二维数组第二行地址" << arr[1] << std::endl;
	std::cout << "二维数组第二列地址" << &arr[0][1] << std::endl;
	std::cout << "二维数组第一个元素地址" << &arr[0][0] << std::endl;
	std::cout << "二维数组第二个元素地址" << &arr[0][1] << std::endl;

	return 0;
}