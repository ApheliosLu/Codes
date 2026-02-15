#include <iostream>

void bubbleSort(int* arr, int len) {	// int* arr 等价于 int arr[]
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int arr[], int len) {
	for (int i = 0; i < len; ++i) {
		std::cout << arr[i] << std::endl;
	}
}

int main() {
	// 封装一个函数，利用冒泡排序，实现对整型数组的升序排序
	int arr[10]={ 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	printArray(arr, len);
}