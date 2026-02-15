#include<iostream>

/*
案例描述：

设计一个英雄的结构体，包括成员姓名，年龄，性别; 创建结构体数组，数组中存放5名英雄。

通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
*/

struct hero {
	std::string name;
	int age;
	std::string sex;
};

void bubbleSort(hero arr[], int len) {
	for (int i = 0; i < len - 1; i++) {			
		for (int j = 0; j < len - 1 - i; j++) {	
			if (arr[j].age > arr[j + 1].age) {
				hero temp = arr[j ];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printHeros(hero arr[], int len) {
	for (int i = 0; i < len; i++) {
		std::cout <<"姓名："<< arr[i].name 
			<< " 性别："<<arr[i].sex
			<<" 年龄："<<arr[i].age<<std::endl;
	}
}
int main() {
	hero heroArr[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(heroArr) / sizeof(heroArr[0]);
	std::cout << "排序前打印： " << std::endl;
	printHeros(heroArr, len);

	bubbleSort(heroArr, len);

	std::cout << "排序后打印： " << std::endl;
	printHeros(heroArr, len);
}