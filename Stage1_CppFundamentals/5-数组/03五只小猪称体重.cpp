#include<iostream>
#include<iterator>

int main03() {
	// 找出并打印最重的小猪体重。
	int arr[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < std::size(arr); i++) {
		//std::cout << arr[i] << std::endl;
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	std::cout << "最重的小猪体重为："<<max << std::endl;
	return 0;
}