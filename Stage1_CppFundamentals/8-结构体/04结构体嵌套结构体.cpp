#include<iostream>

struct student {
	std::string name;
	int age;
	int score;
};

struct teacher {
	int id;
	std::string name;
	int age;
	student stu; // 每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
};

int main04() {
	teacher t1;
	t1.id = 10000;
	t1.name = "老王";
	t1.age=50;
	t1.stu = { "张三",18 };
	t1.stu.score = 60;
	std::cout << "教师编号：" << t1.id
		<< " 教师姓名：" << t1.name
		<< " 教师年龄：" << t1.age << std::endl;
	std::cout << "辅导学员姓名：" << t1.stu.name
		<< " 辅导学员年龄：" << t1.stu.age
		<< " 辅导学员成绩：" << t1.stu.score << std::endl;
	return 0;
}