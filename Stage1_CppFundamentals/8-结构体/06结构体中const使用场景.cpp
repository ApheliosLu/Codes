#include<iostream>

struct student {
	std::string name;
	int age;
	int score;
};

// 作用：用const来防止误操作，使函数仅读
void printStudent(const student* stu) {	// 形参改为指针，可以减少内存空间，而且不会复制新的副本出来
	//stu->age = 38;	// 操作失败，因为加了const修饰
	std::cout << "姓名：" << stu->name
		<< " 年龄：" << stu->age
		<< " 成绩：" << stu->score << std::endl;
}
int main06() {
	student stu = {
		"张三",
		18,
		60
	};
	printStudent(&stu);	// 地址传递减少数据拷贝
	std::cout << "main函数中姓名：" << stu.name
		<< " 年龄：" << stu.age
		<< " 成绩：" << stu.score << std::endl;
	return 0;
}