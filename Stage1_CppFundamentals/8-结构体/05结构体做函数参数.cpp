#include<iostream>

struct student {
	std::string name;
	int age;
	int score;
};

void printStudent(student stu) {
	stu.age = 28;
	std::cout << "值传递中函数中姓名：" << stu.name	// 成员选择（对象）
		<< " 年龄：" << stu.age
		<< " 成绩：" << stu.score << std::endl;
	std::cout << std::endl;
}

void printStudent2(student *stu) {
	stu->age = 38;
	std::cout << "地址传递中函数中姓名：" << stu->name	// 成员选择（指针）
		<< " 年龄：" << stu->age
		<< " 成绩：" << stu->score << std::endl;
	std::cout << std::endl;
}
int main05() {
	student stu = { "张三",18,60 };
	std::cout << "main函数中姓名：" << stu.name
		<< " 年龄：" << stu.age
		<< " 成绩：" << stu.score << std::endl;
	std::cout << std::endl;

	// 值传递
	printStudent(stu);
	std::cout << "main函数中姓名：" << stu.name
		<< " 年龄：" << stu.age
		<< " 成绩：" << stu.score << std::endl;
	std::cout << std::endl;

	// 地址传递
	printStudent2(&stu);
	std::cout << "main函数中姓名：" << stu.name
		<< " 年龄：" << stu.age
		<< " 成绩：" << stu.score << std::endl;
	std::cout << std::endl;

	// 总结：如果不想修改主函数中的数据，用值传递，反之用地址传递
	return 0;
}